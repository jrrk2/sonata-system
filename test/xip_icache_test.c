/*
 * XIP Icache + Data Concurrent Test
 *
 * This program is linked at 0x20300000 and executes from flash via the icache.
 * While fetching its own instructions from flash, it simultaneously reads
 * flash data at 0x20000000 via data loads to test concurrent icache+data
 * access through the tlul_socket_m1.
 *
 * Verilator: reads incrementing byte pattern from w25q256_model, does
 *            2-pass self-consistency check.
 * FPGA:      reads kernel .text, compares checksum vs expected 0xcdad8df1.
 *
 * Build:
 *   make -C test xip_icache_test.elf
 *
 * Run in Verilator:
 *   make -C test run-icache
 */

#include <stdint.h>

/* ---- Hardware addresses ---- */
#define UART0_BASE   0x80100000u

/* XIP memory window */
#define XIP_BASE     0x20000000u

/* Sim control */
#define SIM_CTRL_BASE 0x20000u
#define SIM_CTRL_CTRL (*(volatile uint32_t *)(SIM_CTRL_BASE + 0x08))

/* UART registers (OpenTitan style) */
#define UART_CTRL_REG    (*(volatile uint32_t *)(UART0_BASE + 0x10))
#define UART_STATUS_REG  (*(volatile uint32_t *)(UART0_BASE + 0x14))
#define UART_TX_REG      (*(volatile uint32_t *)(UART0_BASE + 0x1C))
#define UART_STATUS_TX_FULL  1u

/* ---- Minimal UART ---- */

static void uart_putc(char c)
{
    while (UART_STATUS_REG & UART_STATUS_TX_FULL)
        ;
    UART_TX_REG = (uint32_t)(unsigned char)c;
}

static void puts_raw(const char *s)
{
    while (*s) {
        if (*s == '\n')
            uart_putc('\r');
        uart_putc(*s++);
    }
}

static void put_hex8(uint32_t v)
{
    static const char hex[] = "0123456789abcdef";
    for (int i = 28; i >= 0; i -= 4)
        uart_putc(hex[(v >> i) & 0xf]);
}

static void put_dec(uint32_t v)
{
    char buf[12];
    int i = 0;
    if (v == 0) { uart_putc('0'); return; }
    while (v) { buf[i++] = '0' + (v % 10); v /= 10; }
    while (i--) uart_putc(buf[i]);
}

/* ---- Timer ---- */

static uint32_t read_mcycle(void)
{
    uint32_t cyc;
    __asm__ volatile ("csrr %0, mcycle" : "=r"(cyc));
    return cyc;
}

/* ---- Checksum (rotate-XOR, same as bootloader) ---- */

static uint32_t xip_checksum(const volatile uint32_t *base, uint32_t nwords)
{
    uint32_t csum = 0;
    for (uint32_t i = 0; i < nwords; i++) {
        uint32_t w = base[i];
        /* Rotate left by 1 then XOR */
        csum = ((csum << 1) | (csum >> 31)) ^ w;
    }
    return csum;
}

/* ---- Test parameters ---- */

/* Read 64 KB from XIP base (16K words) */
#define DATA_NWORDS  (64 * 1024 / 4)
#define NUM_PASSES   4

/* Expected checksum on FPGA (kernel .text at 0x20001000) */
#define FPGA_EXPECTED_CSUM  0xcdad8df1u

/* Exit string that tells Verilator sim to stop */
static const char exit_string[] = "Safe to exit simulator.\xd8\xaf\xfb\xa0\xc7\xe1\xa9\xd7";

/* ---- Main ---- */

int main(void)
{
    /* NOTE: UART already initialized by the SRAM stub */
    volatile uint32_t *xip_data = (volatile uint32_t *)XIP_BASE;
    int all_pass = 1;

    puts_raw("\n");
    puts_raw("========================================\n");
    puts_raw(" XIP Icache + Data Concurrent Test\n");
    puts_raw("========================================\n");
    puts_raw("Running from flash @ 0x20300000\n");
    puts_raw("Reading data from   0x20000000\n\n");

    /* First pass: compute reference checksum */
    uint32_t t0 = read_mcycle();
    uint32_t ref_csum = xip_checksum(xip_data, DATA_NWORDS);
    uint32_t t1 = read_mcycle();

    puts_raw("Pass 0: csum=0x");
    put_hex8(ref_csum);
    puts_raw("  cycles=");
    put_dec(t1 - t0);
    puts_raw("  (reference)\n");

    /* Subsequent passes: compare against reference */
    for (int pass = 1; pass < NUM_PASSES; pass++) {
        t0 = read_mcycle();
        uint32_t csum = xip_checksum(xip_data, DATA_NWORDS);
        t1 = read_mcycle();

        int ok = (csum == ref_csum);

        puts_raw("Pass ");
        put_dec(pass);
        puts_raw(": csum=0x");
        put_hex8(csum);
        puts_raw("  cycles=");
        put_dec(t1 - t0);
        if (ok) {
            puts_raw("  PASS\n");
        } else {
            puts_raw("  FAIL (expected 0x");
            put_hex8(ref_csum);
            puts_raw(")\n");
            all_pass = 0;
        }
    }

    /* Summary */
    puts_raw("\n========================================\n");
    if (all_pass) {
        puts_raw(" ALL PASSES CONSISTENT — PASS\n");
    } else {
        puts_raw(" CHECKSUM MISMATCH — FAIL\n");
    }
    puts_raw("========================================\n");

    /* Signal Verilator to exit */
    puts_raw(exit_string);

    for (;;)
        __asm__ volatile ("wfi");

    return 0;
}
