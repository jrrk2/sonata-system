// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef ARP_SERVER_H
#define ARP_SERVER_H

#include <stdint.h>
#include <vector>
#include <iostream>

/**
 * Simple ARP packet generator for Verilator testbench
 * Injects a gratuitous ARP packet after a delay
 */
class ARPServer {
private:
    enum class State {
        WAITING,     // Waiting for initial delay
        PREAMBLE,    // Sending preamble
        SFD,         // Sending Start Frame Delimiter
        DATA,        // Sending packet data
        DONE         // Transmission complete
    };

    State state_ = State::WAITING;
    uint32_t counter_ = 0;
    uint32_t wait_cycles_ = 120000;  // 3ms at 40MHz
    std::vector<uint8_t> arp_packet_;
    size_t tx_index_ = 0;
    bool done_printed_ = false;

    // Calculate Ethernet CRC32 (FCS)
    uint32_t calculate_crc32(const std::vector<uint8_t> &data, size_t len) {
        uint32_t crc = 0xFFFFFFFF;
        const uint32_t poly = 0xEDB88320;  // Reversed polynomial for Ethernet

        for (size_t i = 0; i < len; i++) {
            crc ^= data[i];
            for (int j = 0; j < 8; j++) {
                crc = (crc >> 1) ^ (-(int)(crc & 1) & poly);
            }
        }
        return ~crc;
    }

    void build_arp_packet() {
        arp_packet_.clear();
        arp_packet_.resize(60);  // Minimum frame without FCS

        // Ethernet header (14 bytes)
        // Dest MAC: broadcast
        arp_packet_[0] = 0xFF; arp_packet_[1] = 0xFF; arp_packet_[2] = 0xFF;
        arp_packet_[3] = 0xFF; arp_packet_[4] = 0xFF; arp_packet_[5] = 0xFF;
        // Source MAC: 02:00:00:00:00:01
        arp_packet_[6] = 0x02; arp_packet_[7] = 0x00; arp_packet_[8] = 0x00;
        arp_packet_[9] = 0x00; arp_packet_[10] = 0x00; arp_packet_[11] = 0x01;
        // EtherType: ARP
        arp_packet_[12] = 0x08; arp_packet_[13] = 0x06;

        // ARP header (28 bytes)
        arp_packet_[14] = 0x00; arp_packet_[15] = 0x01;  // Hardware type: Ethernet
        arp_packet_[16] = 0x08; arp_packet_[17] = 0x00;  // Protocol type: IPv4
        arp_packet_[18] = 0x06;  // Hardware size: 6
        arp_packet_[19] = 0x04;  // Protocol size: 4
        arp_packet_[20] = 0x00; arp_packet_[21] = 0x01;  // Opcode: Request

        // Sender MAC: 02:00:00:00:00:01
        arp_packet_[22] = 0x02; arp_packet_[23] = 0x00; arp_packet_[24] = 0x00;
        arp_packet_[25] = 0x00; arp_packet_[26] = 0x00; arp_packet_[27] = 0x01;

        // Sender IP: 192.168.1.1
        arp_packet_[28] = 0xC0; arp_packet_[29] = 0xA8;
        arp_packet_[30] = 0x01; arp_packet_[31] = 0x01;

        // Target MAC: 00:00:00:00:00:00
        arp_packet_[32] = 0x00; arp_packet_[33] = 0x00; arp_packet_[34] = 0x00;
        arp_packet_[35] = 0x00; arp_packet_[36] = 0x00; arp_packet_[37] = 0x00;

        // Target IP: 192.168.1.10
        arp_packet_[38] = 0xC0; arp_packet_[39] = 0xA8;
        arp_packet_[40] = 0x01; arp_packet_[41] = 0x0A;

        // Padding (18 bytes to reach minimum 60 bytes before FCS)
        for (int i = 42; i < 60; i++) {
            arp_packet_[i] = 0x00;
        }

        // Calculate and append FCS (4 bytes)
        uint32_t fcs = calculate_crc32(arp_packet_, 60);
        arp_packet_.push_back(fcs & 0xFF);
        arp_packet_.push_back((fcs >> 8) & 0xFF);
        arp_packet_.push_back((fcs >> 16) & 0xFF);
        arp_packet_.push_back((fcs >> 24) & 0xFF);
    }

public:
    ARPServer() {
        build_arp_packet();
    }

    /**
     * Get next GMII RX byte for injection
     * Returns true if data is available, false if idle
     */
    bool get_rx_data(uint8_t &rx_dv, uint8_t &rx_er, uint8_t &rxd) {
        rx_er = 0;

        switch (state_) {
            case State::WAITING:
                counter_++;
                if (counter_ >= wait_cycles_) {
                    std::cout << "[ARP] Injecting gratuitous ARP packet" << std::endl;
                    state_ = State::PREAMBLE;
                    counter_ = 0;
                    tx_index_ = 0;
                }
                rx_dv = 0;
                rxd = 0;
                return false;

            case State::PREAMBLE:
                // Send 7 bytes of preamble (0x55)
                rx_dv = 1;
                rxd = 0x55;
                counter_++;
                if (counter_ >= 7) {
                    state_ = State::SFD;
                    counter_ = 0;
                }
                return true;

            case State::SFD:
                // Send Start Frame Delimiter (0xD5)
                rx_dv = 1;
                rxd = 0xD5;
                state_ = State::DATA;
                tx_index_ = 0;
                return true;

            case State::DATA:
                // Send packet data
                if (tx_index_ < arp_packet_.size()) {
                    rx_dv = 1;
                    rxd = arp_packet_[tx_index_++];
                    return true;
                } else {
                    // Packet complete
                    state_ = State::DONE;
                    if (!done_printed_) {
                        std::cout << "[ARP] Packet injection complete" << std::endl;
                        done_printed_ = true;
                    }
                    rx_dv = 0;
                    rxd = 0;
                    return false;
                }

            case State::DONE:
                rx_dv = 0;
                rxd = 0;
                return false;

            default:
                rx_dv = 0;
                rxd = 0;
                return false;
        }
    }

    bool is_done() const {
        return state_ == State::DONE;
    }
};

#endif // ARP_SERVER_H
