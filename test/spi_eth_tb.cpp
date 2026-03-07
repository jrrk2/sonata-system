// spi_eth_tb.cpp
// C++ Verilator testbench for spi_wb + KSZ8851SNL FIFO read debugging
//
// Drives Wishbone bus to spi_wb, injects an ARP frame into KSZ model RX path,
// then reads frame back via SPI FIFO read to debug data integrity.

#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vspi_eth_tb_top.h"

// SPI WB register offsets (byte addresses within 8KB)
#define SPI_INTR_STATE  0x000
#define SPI_INTR_ENABLE 0x004
#define SPI_CFG         0x00C
#define SPI_CONTROL     0x010
#define SPI_STATUS      0x014
#define SPI_START       0x018
#define SPI_CS          0x028

// Buffer offsets
#define SPI_TX_BUF      0x1000
#define SPI_RX_BUF      0x1800

// KSZ8851SNL register addresses
#define KSZ_MARL        0x10
#define KSZ_MARM        0x12
#define KSZ_MARH        0x14
#define KSZ_TXCR        0x70
#define KSZ_RXCR1       0x74
#define KSZ_RXCR2       0x76
#define KSZ_RXFHSR      0x7C
#define KSZ_RXFHBCR     0x7E
#define KSZ_TXQCR       0x80
#define KSZ_RXQCR       0x82
#define KSZ_TXFDPR      0x84
#define KSZ_RXFDPR      0x86
#define KSZ_IER         0x90
#define KSZ_ISR         0x92
#define KSZ_RXFCTR      0x9C
#define KSZ_CIDER       0xC0

static Vspi_eth_tb_top *tb;
static VerilatedVcdC *tfp;
static uint64_t sim_time = 0;
static int clk_25_counter = 0;

// Ethernet CRC-32 computation
static uint32_t crc32_table[256];
static bool crc32_table_init = false;

static void init_crc32_table() {
    if (crc32_table_init) return;
    for (uint32_t i = 0; i < 256; i++) {
        uint32_t crc = i;
        for (int j = 0; j < 8; j++) {
            if (crc & 1)
                crc = (crc >> 1) ^ 0xEDB88320;
            else
                crc >>= 1;
        }
        crc32_table[i] = crc;
    }
    crc32_table_init = true;
}

static uint32_t eth_crc32(const uint8_t *data, int len) {
    init_crc32_table();
    uint32_t crc = 0xFFFFFFFF;
    for (int i = 0; i < len; i++) {
        crc = (crc >> 8) ^ crc32_table[(crc ^ data[i]) & 0xFF];
    }
    return ~crc;
}

static void tick() {
    // Rising edge
    tb->clk_i = 1;
    // Generate 25MHz clock: toggle every 2 sys_clk cycles
    clk_25_counter++;
    if (clk_25_counter >= 2) {
        tb->clk_25mhz = !tb->clk_25mhz;
        clk_25_counter = 0;
    }
    tb->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;

    // Falling edge
    tb->clk_i = 0;
    tb->eval();
    if (tfp) tfp->dump(sim_time);
    sim_time++;
}

static void wb_write(uint32_t addr, uint32_t data) {
    tb->wb_adr_i = addr & 0x1FFF;
    tb->wb_dat_i = data;
    tb->wb_sel_i = 0xF;
    tb->wb_we_i = 1;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    tick();
    int timeout = 1000;
    while (!tb->wb_ack_o && --timeout > 0) {
        tick();
    }
    if (timeout == 0) {
        printf("ERROR: wb_write timeout at addr 0x%04x\n", addr);
    }
    // Deassert
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->wb_we_i = 0;
    tick();
}

static uint32_t wb_read(uint32_t addr) {
    tb->wb_adr_i = addr & 0x1FFF;
    tb->wb_dat_i = 0;
    tb->wb_sel_i = 0xF;
    tb->wb_we_i = 0;
    tb->wb_cyc_i = 1;
    tb->wb_stb_i = 1;
    tick();
    int timeout = 1000;
    while (!tb->wb_ack_o && --timeout > 0) {
        tick();
    }
    if (timeout == 0) {
        printf("ERROR: wb_read timeout at addr 0x%04x\n", addr);
        tb->wb_cyc_i = 0;
        tb->wb_stb_i = 0;
        tick();
        return 0xDEADBEEF;
    }
    uint32_t val = tb->wb_dat_o;
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tick();
    return val;
}

static void wait_spi_idle() {
    int timeout = 50000;
    while (--timeout > 0) {
        uint32_t status = wb_read(SPI_STATUS);
        if (status & (1 << 26)) return;  // idle bit
    }
    printf("ERROR: SPI idle timeout!\n");
}

static void spi_transfer(int nbytes) {
    wb_write(SPI_START, nbytes);
    wait_spi_idle();
}

static void cs_low() {
    wb_write(SPI_CS, 0x0E);  // CS[0] = 0, others high
}

static void cs_high() {
    wb_write(SPI_CS, 0x0F);  // all CS high
}

// KSZ register write via SPI
static void ksz_reg_write(uint8_t reg, uint16_t val) {
    uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
    uint8_t cmd0 = (0x01 << 6) | (be << 2) | (reg >> 6);
    uint8_t cmd1 = (reg << 2) & 0xF0;
    uint8_t d0 = val & 0xFF;
    uint8_t d1 = (val >> 8) & 0xFF;

    uint32_t tx_word = cmd0 | (cmd1 << 8) | (d0 << 16) | (d1 << 24);
    wb_write(SPI_TX_BUF, tx_word);

    cs_low();
    spi_transfer(4);
    cs_high();
}

// KSZ register read via SPI
static uint16_t ksz_reg_read(uint8_t reg) {
    uint8_t be = (reg & 0x2) == 0 ? 0x03 : 0x0C;
    uint8_t cmd0 = (be << 2) | (reg >> 6);
    uint8_t cmd1 = (reg << 2) & 0xF0;

    uint32_t tx_word = cmd0 | (cmd1 << 8);
    wb_write(SPI_TX_BUF, tx_word);

    cs_low();
    spi_transfer(4);
    cs_high();

    uint32_t rx_word = wb_read(SPI_RX_BUF);
    return (rx_word >> 16) & 0xFFFF;
}

// Inject a raw byte on the RX GMII interface for one 25MHz cycle
// Must be called at 25MHz boundaries (driven externally)
static void inject_rx_byte(uint8_t data, bool valid, bool last) {
    tb->rx_data = data;
    tb->rx_valid = valid ? 1 : 0;
    tb->rx_last = last ? 1 : 0;

    // Clock until 25MHz edge (two sys_clk ticks per 25MHz half-period)
    // We need to advance by 4 sys_clk ticks to get one full 25MHz cycle
    for (int i = 0; i < 4; i++) {
        tick();
    }
}

static void inject_rx_idle(int cycles_25mhz) {
    tb->rx_data = 0;
    tb->rx_valid = 0;
    tb->rx_last = 0;
    for (int i = 0; i < cycles_25mhz; i++) {
        for (int j = 0; j < 4; j++) {
            tick();
        }
    }
}

// Build and inject ARP reply frame
static void inject_arp_reply() {
    // Build frame: dst_mac + src_mac + ethertype + ARP payload
    uint8_t frame[64];
    int pos = 0;

    // Destination MAC: 10:e2:d5:00:00:01
    frame[pos++] = 0x10; frame[pos++] = 0xe2; frame[pos++] = 0xd5;
    frame[pos++] = 0x00; frame[pos++] = 0x00; frame[pos++] = 0x01;
    // Source MAC: aa:bb:cc:dd:ee:ff
    frame[pos++] = 0xaa; frame[pos++] = 0xbb; frame[pos++] = 0xcc;
    frame[pos++] = 0xdd; frame[pos++] = 0xee; frame[pos++] = 0xff;
    // Ethertype: ARP (0x0806)
    frame[pos++] = 0x08; frame[pos++] = 0x06;
    // ARP: Hardware type = Ethernet (1)
    frame[pos++] = 0x00; frame[pos++] = 0x01;
    // ARP: Protocol type = IPv4 (0x0800)
    frame[pos++] = 0x08; frame[pos++] = 0x00;
    // ARP: Hardware size = 6, Protocol size = 4
    frame[pos++] = 0x06; frame[pos++] = 0x04;
    // ARP: Opcode = Reply (2)
    frame[pos++] = 0x00; frame[pos++] = 0x02;
    // ARP: Sender MAC: aa:bb:cc:dd:ee:ff
    frame[pos++] = 0xaa; frame[pos++] = 0xbb; frame[pos++] = 0xcc;
    frame[pos++] = 0xdd; frame[pos++] = 0xee; frame[pos++] = 0xff;
    // ARP: Sender IP: 192.168.1.106
    frame[pos++] = 0xc0; frame[pos++] = 0xa8; frame[pos++] = 0x01; frame[pos++] = 0x6a;
    // ARP: Target MAC: 10:e2:d5:00:00:01
    frame[pos++] = 0x10; frame[pos++] = 0xe2; frame[pos++] = 0xd5;
    frame[pos++] = 0x00; frame[pos++] = 0x00; frame[pos++] = 0x01;
    // ARP: Target IP: 192.168.1.100
    frame[pos++] = 0xc0; frame[pos++] = 0xa8; frame[pos++] = 0x01; frame[pos++] = 0x64;

    int frame_len = pos;

    // Pad to minimum 46 bytes payload (60 bytes total)
    while (pos < 60) {
        frame[pos++] = 0x00;
    }
    frame_len = pos;

    // Compute CRC
    uint32_t crc = eth_crc32(frame, frame_len);
    frame[pos++] = (crc >>  0) & 0xFF;
    frame[pos++] = (crc >>  8) & 0xFF;
    frame[pos++] = (crc >> 16) & 0xFF;
    frame[pos++] = (crc >> 24) & 0xFF;
    int total_len = pos;

    printf("Injecting ARP reply frame: %d bytes (+ preamble/SFD)\n", total_len);
    printf("  CRC32 = 0x%08x\n", crc);

    // Inject preamble (7 bytes of 0x55)
    for (int i = 0; i < 7; i++) {
        inject_rx_byte(0x55, true, false);
    }
    // SFD
    inject_rx_byte(0xD5, true, false);

    // Frame data + FCS
    for (int i = 0; i < total_len; i++) {
        bool is_last = (i == total_len - 1);
        inject_rx_byte(frame[i], true, is_last);
    }

    // Idle gap after frame
    inject_rx_idle(20);

    printf("ARP frame injection complete.\n");
}

// Do a SPI FIFO read (0x80 opcode) of n bytes
static void spi_fifo_read(int nbytes) {
    // Write 0x80 (FIFO read opcode) as first TX byte, rest don't care
    // We write the opcode byte followed by dummy bytes
    // TX BRAM: first word byte 0 = 0x80, rest = 0x00
    // We need nbytes+1 total SPI bytes (1 for cmd + nbytes for data)
    int total = nbytes + 1;

    // Fill TX buffer with 0x80 in byte 0, zeros in rest
    wb_write(SPI_TX_BUF, 0x00000080);  // byte0=0x80, byte1-3=0x00
    // Fill remaining words with 0
    for (int i = 1; i < (total + 3) / 4; i++) {
        wb_write(SPI_TX_BUF + i * 4, 0x00000000);
    }

    cs_low();
    spi_transfer(total);
    cs_high();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    tb = new Vspi_eth_tb_top;
    tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("spi_eth_tb.vcd");

    // Initialize signals
    tb->clk_i = 0;
    tb->clk_25mhz = 0;
    tb->rst_i = 1;
    tb->wb_adr_i = 0;
    tb->wb_dat_i = 0;
    tb->wb_sel_i = 0;
    tb->wb_we_i = 0;
    tb->wb_cyc_i = 0;
    tb->wb_stb_i = 0;
    tb->rx_data = 0;
    tb->rx_valid = 0;
    tb->rx_last = 0;
    clk_25_counter = 0;

    // ========================================================
    // Step (a): Release reset
    // ========================================================
    printf("=== Releasing reset ===\n");
    for (int i = 0; i < 20; i++) tick();
    tb->rst_i = 0;
    for (int i = 0; i < 20; i++) tick();

    // ========================================================
    // Step (b): Write SPI_CFG: msb_first=1, half_clk_period=1
    // ========================================================
    printf("=== Configuring SPI ===\n");
    // CFG: bit[29]=msb_first, bits[15:0]=half_clk_period
    // 0x20000001 = msb_first=1, half_clk=1
    wb_write(SPI_CFG, 0x20000001);

    // ========================================================
    // Step (c): Write SPI_CS: all de-asserted (0x0F)
    // ========================================================
    wb_write(SPI_CS, 0x0F);

    // ========================================================
    // Step (d): Read KSZ CIDER register (0xC0)
    // ========================================================
    printf("\n=== Reading KSZ CIDER register ===\n");
    uint16_t cider = ksz_reg_read(KSZ_CIDER);
    printf("CIDER = 0x%04x (expected 0x8870)\n", cider);

    // ========================================================
    // Step (f): Write MAC address registers
    // ========================================================
    printf("\n=== Writing MAC address ===\n");
    ksz_reg_write(KSZ_MARL, 0x0001);
    ksz_reg_write(KSZ_MARM, 0xD500);
    ksz_reg_write(KSZ_MARH, 0x10E2);
    printf("MAC set to 10:E2:D5:00:00:01\n");

    // ========================================================
    // Step (g): Configure TX/RX
    // ========================================================
    printf("\n=== Configuring TX/RX ===\n");
    // TXCR: TX enable, TX CRC enable, TX padding enable
    ksz_reg_write(KSZ_TXCR, 0x01EE);
    // RXCR1: RX enable, promiscuous mode, RX all multicast
    ksz_reg_write(KSZ_RXCR1, 0x9C11);
    // RXCR2: SRDBL=01 (single frame data burst), IUFFP=1, RXIUFCEZ=1
    ksz_reg_write(KSZ_RXCR2, 0x0026);
    // RXFDPR: auto-increment
    ksz_reg_write(KSZ_RXFDPR, 0x4000);
    // RXQCR: auto-dequeue
    ksz_reg_write(KSZ_RXQCR, 0x0010);
    // IER: enable RX and TX interrupts
    ksz_reg_write(KSZ_IER, 0x6000);

    // ========================================================
    // Step (h): Enable TX/RX (already done in TXCR/RXCR1)
    // ========================================================
    printf("TX/RX enabled.\n");

    // Wait a bit for enables to settle
    for (int i = 0; i < 100; i++) tick();

    // ========================================================
    // Step (i): Inject ARP reply frame
    // ========================================================
    printf("\n=== Injecting ARP reply frame ===\n");
    inject_arp_reply();

    // Wait for frame to be processed by KSZ model
    for (int i = 0; i < 200; i++) tick();

    // ========================================================
    // Step (j): Wait for RXFCTR to show frames available
    // ========================================================
    printf("\n=== Checking for received frames ===\n");
    int poll_count = 0;
    uint16_t rxfctr = 0;
    while (poll_count < 50) {
        rxfctr = ksz_reg_read(KSZ_RXFCTR);
        uint8_t frame_count = (rxfctr >> 8) & 0xFF;
        if (frame_count > 0) {
            printf("RXFCTR = 0x%04x (frame count = %d)\n", rxfctr, frame_count);
            break;
        }
        poll_count++;
        for (int i = 0; i < 100; i++) tick();
    }
    if (poll_count >= 50) {
        printf("WARNING: No frames received after polling. RXFCTR = 0x%04x\n", rxfctr);
    }

    // ========================================================
    // Step (k): Read RXFHSR and RXFHBCR
    // ========================================================
    printf("\n=== Reading RX frame header ===\n");
    uint16_t rxfhsr = ksz_reg_read(KSZ_RXFHSR);
    uint16_t rxfhbcr = ksz_reg_read(KSZ_RXFHBCR);
    printf("RXFHSR  = 0x%04x (valid=%d)\n", rxfhsr, (rxfhsr >> 15) & 1);
    printf("RXFHBCR = 0x%04x (byte count = %d)\n", rxfhbcr, rxfhbcr & 0x7FF);

    // ========================================================
    // Step (l): Do FIFO read
    // ========================================================
    printf("\n=== Performing FIFO read ===\n");

    // Set RXFDPR = 0x4000 (auto-increment, pointer reset)
    ksz_reg_write(KSZ_RXFDPR, 0x4000);

    // Set Start DMA in RXQCR (bit 3)
    uint16_t rxqcr_val = ksz_reg_read(KSZ_RXQCR);
    ksz_reg_write(KSZ_RXQCR, rxqcr_val | 0x0008);

    // Read frame data via FIFO read command
    // Read enough bytes to get header + some frame data
    // 8 bytes KSZ header + up to 64 bytes frame data = 72 bytes
    // Plus 1 byte for the 0x80 command byte itself = 73 total SPI bytes
    int read_bytes = 80;
    spi_fifo_read(read_bytes);

    // Dump RX BRAM words (first 20)
    printf("\nRX BRAM dump (first 20 words after FIFO read):\n");
    for (int i = 0; i < 20; i++) {
        uint32_t word = wb_read(SPI_RX_BUF + i * 4);
        printf("  RX_BUF[%2d] (0x%04x) = 0x%08x  |", i, SPI_RX_BUF + i * 4, word);
        // Print individual bytes
        for (int b = 0; b < 4; b++) {
            printf(" %02x", (word >> (b * 8)) & 0xFF);
        }
        printf("\n");
    }

    // Clear Start DMA
    ksz_reg_write(KSZ_RXQCR, rxqcr_val & ~0x0008);

    printf("\n=== Test complete ===\n");

    // Final ticks for waveform
    for (int i = 0; i < 100; i++) tick();

    tfp->close();
    delete tfp;
    delete tb;
    return 0;
}
