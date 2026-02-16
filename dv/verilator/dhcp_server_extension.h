// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef DHCP_SERVER_EXTENSION_H
#define DHCP_SERVER_EXTENSION_H

#include "sim_ctrl_extension.h"
#include "dhcp_server.h"
#include "arp_server.h"
#include "Vtop_verilator.h"
#include "Vtop_verilator_top_verilator.h"
#include <iomanip>

/**
 * Network Server extension for Verilator simulation
 *
 * Handles both ARP and DHCP packet injection:
 * - Injects gratuitous ARP packet at startup
 * - Monitors GMII TX signals from the KSZ8851 MAC
 * - Injects DHCP responses via RMII RX signals
 */
class DHCPServerExtension : public SimCtrlExtension {
private:
    Vtop_verilator *top_;
    ARPServer arp_server_;
    DHCPServer dhcp_server_;

    // RMII to GMII conversion state for TX monitoring
    // RMII provides 2 bits per cycle, need 4 cycles to form 8-bit GMII byte
    uint8_t gmii_tx_byte_ = 0;
    int tx_dibit_index_ = 0;  // Which dibit (0-3) we're receiving
    bool gmii_tx_byte_valid_ = false;
    uint8_t prev_rmii_tx_en_ = 0;  // For edge detection

    // GMII to RMII conversion state for RX injection
    // GMII provides 1 byte per cycle, RMII needs 4 cycles per byte (2 bits each)
    uint8_t gmii_rx_dv_ = 0;
    uint8_t gmii_rx_er_ = 0;
    uint8_t gmii_rxd_ = 0;
    int rmii_dibit_index_ = 0;  // Which dibit (0-3) of the byte we're on
    bool gmii_byte_valid_ = false;

public:
    DHCPServerExtension(Vtop_verilator *top) : top_(top) {}

    virtual ~DHCPServerExtension() = default;

    /**
     * Called every clock cycle
     */
    virtual void OnClock(unsigned long sim_time) override {
        // Monitor RMII TX signals from KSZ8851 MAC and convert to GMII
        // RMII TX is 2 bits per cycle, need 4 cycles to form 8-bit GMII byte
        uint8_t rmii_tx_en = top_->top_verilator->rmii_tx_en;
        uint8_t rmii_txd = top_->top_verilator->rmii_txd;  // [1:0]

        // RMII to GMII conversion for TX monitoring
        gmii_tx_byte_valid_ = false;

        if (rmii_tx_en && !prev_rmii_tx_en_) {
            // Start of frame - reset dibit counter
            tx_dibit_index_ = 0;
            gmii_tx_byte_ = 0;
        }
        prev_rmii_tx_en_ = rmii_tx_en;

        if (rmii_tx_en) {
            // Accumulate dibits into byte
            // Dibit order: [1:0], [3:2], [5:4], [7:6]
            uint8_t dibit_shift = tx_dibit_index_ * 2;
            gmii_tx_byte_ &= ~(0x3 << dibit_shift);  // Clear the dibit position
            gmii_tx_byte_ |= (rmii_txd & 0x3) << dibit_shift;

            tx_dibit_index_++;
            if (tx_dibit_index_ >= 4) {
                // Completed a byte
                gmii_tx_byte_valid_ = true;
                tx_dibit_index_ = 0;
            }
        } else {
            tx_dibit_index_ = 0;
            gmii_tx_byte_ = 0;
        }

        // Feed TX data to DHCP server for packet capture
        // Only feed when we have a complete valid byte
        if (gmii_tx_byte_valid_) {
            static int byte_count = 0;
            if (byte_count < 30) {  // Debug first 30 bytes (full Eth header + start of IP)
                std::cout << "[TX] Byte " << byte_count << ": 0x" << std::hex
                          << std::setfill('0') << std::setw(2) << (int)gmii_tx_byte_
                          << std::dec;
                if (byte_count == 7) std::cout << " (SFD)";
                if (byte_count >= 8 && byte_count <= 13) std::cout << " (Dst MAC)";
                if (byte_count >= 14 && byte_count <= 19) std::cout << " (Src MAC)";
                if (byte_count == 20 || byte_count == 21) std::cout << " (EtherType)";
                std::cout << std::endl;
            }
            byte_count++;
            if (!rmii_tx_en) byte_count = 0;  // Reset on frame end

            dhcp_server_.process_tx(1, gmii_tx_byte_);
        } else if (!rmii_tx_en) {
            dhcp_server_.process_tx(0, 0);
        }

        // GMII to RMII conversion: fetch new byte when we've completed the previous one
        if (rmii_dibit_index_ == 0) {
            // Try ARP server first (priority for startup ARP packet)
            if (!arp_server_.is_done()) {
                gmii_byte_valid_ = arp_server_.get_rx_data(gmii_rx_dv_, gmii_rx_er_, gmii_rxd_);
            } else {
                // ARP is done, use DHCP server
                static bool dhcp_transition_logged = false;
                if (!dhcp_transition_logged) {
                    std::cout << "[EXTENSION] ARP done, switching to DHCP server" << std::endl;
                    dhcp_transition_logged = true;
                }
                gmii_byte_valid_ = dhcp_server_.get_rx_data(gmii_rx_dv_, gmii_rx_er_, gmii_rxd_);
            }
        }

        if (!gmii_byte_valid_) {
            // No response to send, keep RMII RX idle
            top_->top_verilator->rmii_rx_dv = 0;
            top_->top_verilator->rmii_rx_er = 0;
            top_->top_verilator->rmii_rxd = 0;
            rmii_dibit_index_ = 0;
            return;
        }

        // Convert GMII (8-bit per cycle) to RMII (2-bit per cycle)
        // RMII requires 4 cycles to transmit one byte
        // Dibit order: [1:0], [3:2], [5:4], [7:6]

        top_->top_verilator->rmii_rx_dv = gmii_rx_dv_;
        top_->top_verilator->rmii_rx_er = gmii_rx_er_;

        // Extract the appropriate 2-bit slice based on dibit index
        uint8_t dibit_shift = rmii_dibit_index_ * 2;
        uint8_t dibit = (gmii_rxd_ >> dibit_shift) & 0x3;
        top_->top_verilator->rmii_rxd = dibit;

        // Advance to next dibit
        rmii_dibit_index_++;
        if (rmii_dibit_index_ >= 4) {
            // Completed this byte, reset counter to fetch next byte
            rmii_dibit_index_ = 0;
        }
    }
};

#endif // DHCP_SERVER_EXTENSION_H
