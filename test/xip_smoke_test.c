/*
 * XIP Flash DDR Smoke Test — standalone bare-metal for Verilator
 *
 * Tests:
 *   1. XIP reads at each clock divider (div=9 down to div=0 DDR)
 *      — verifies incrementing byte pattern from w25q256_model
 *   2. Capture BRAM: arm → trigger XIP read → dump captured SPI waveform
 *   3. Show mini eye diagram from captured data
 *
 * Build:
 *   make -C test -f Makefile.xip_smoke
 *
 * Run in Verilator:
 *   ./build/.../Vtop_verilator -E test/xip_smoke_test.elf \
 *       +UARTDPI_LOG_uart0=- +disable_cheri
 */

#include <stdint.h>

/* ---- Hardware addresses ---- */
#define UART0_BASE   0x80100000u
#define TIMER_BASE   0x80040000u

/* XIP controller registers (see spi_flash_xip.sv) */
#define FLASH_REG_BASE  0x80130000u
#define REG_CTRL        (*(volatile uint32_t *)(FLASH_REG_BASE + 0x00))
#define REG_STATUS      (*(volatile uint32_t *)(FLASH_REG_BASE + 0x04))
#define REG_CMD         (*(volatile uint32_t *)(FLASH_REG_BASE + 0x08))
#define REG_ADDR        (*(volatile uint32_t *)(FLASH_REG_BASE + 0x0C))
#define REG_WDATA       (*(volatile uint32_t *)(FLASH_REG_BASE + 0x10))
#define REG_RDATA       (*(volatile uint32_t *)(FLASH_REG_BASE + 0x14))
#define REG_FIFO_STS    (*(volatile uint32_t *)(FLASH_REG_BASE + 0x18))
#define REG_CAP_CTRL    (*(volatile uint32_t *)(FLASH_REG_BASE + 0x1C))
#define REG_CAP_ADDR    (*(volatile uint32_t *)(FLASH_REG_BASE + 0x20))
#define REG_CAP_DATA    (*(volatile uint32_t *)(FLASH_REG_BASE + 0x24))
#define REG_CAP_LEN     (*(volatile uint32_t *)(FLASH_REG_BASE + 0x28))
#define REG_IDELAY_TAP  (*(volatile uint32_t *)(FLASH_REG_BASE + 0x2C))

/* XIP memory window */
#define XIP_BASE  0x20000000u

/* Timer: 64-bit mtime at offset 0 */
#define MTIME_LO  (*(volatile uint32_t *)(TIMER_BASE + 0x00))
#define MTIME_HI  (*(volatile uint32_t *)(TIMER_BASE + 0x04))

/* UART registers (OpenTitan style — see sw/legacy/common/uart.h) */
#define UART_CTRL_REG    (*(volatile uint32_t *)(UART0_BASE + 0x10))
#define UART_STATUS_REG  (*(volatile uint32_t *)(UART0_BASE + 0x14))
#define UART_TX_REG      (*(volatile uint32_t *)(UART0_BASE + 0x1C))
#define UART_FIFO_CTRL_REG (*(volatile uint32_t *)(UART0_BASE + 0x20))

#define UART_STATUS_TX_FULL  1u  /* bit 0 */

/* Sim control — write to signal end of test */
#define SIM_CTRL_BASE 0x20000u
#define SIM_CTRL_CTRL (*(volatile uint32_t *)(SIM_CTRL_BASE + 0x08))

/* ---- Minimal UART ---- */

static void uart_init(void)
{
    /* NCO = 2^20 * baud / clk_freq
     * For 115200 @ 40 MHz: (1048576 * 115200) / 40000000 = 3019 = 0xBCB
     * Enable TX (bit 0) + RX (bit 1) */
    uint32_t nco = (uint32_t)(((uint64_t)115200 << 20) / 40000000);
    UART_CTRL_REG = (nco << 16) | 0x3u;
}

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

static void put_hex2(uint8_t v)
{
    static const char hex[] = "0123456789abcdef";
    uart_putc(hex[(v >> 4) & 0xf]);
    uart_putc(hex[v & 0xf]);
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
    return MTIME_LO;
}

/* ---- Flash helpers ---- */

static void flash_wait_idle(void)
{
    while (REG_STATUS & 1u)  /* busy */
        ;
}

static void flash_set_div(uint32_t div)
{
    flash_wait_idle();
    uint32_t ctrl = REG_CTRL;
    ctrl = (ctrl & ~0xFFu) | (div & 0xFFu);
    REG_CTRL = ctrl;
}

static void flash_set_ddr(int enable)
{
    uint32_t ctrl = REG_CTRL;
    if (enable)
        ctrl |= (1u << 9);
    else
        ctrl &= ~(1u << 9);
    REG_CTRL = ctrl;
}

static void flash_set_read_delay(uint32_t delay)
{
    flash_wait_idle();
    uint32_t ctrl = REG_CTRL;
    ctrl = (ctrl & ~(0x7u << 10)) | ((delay & 0x7u) << 10);
    REG_CTRL = ctrl;
}

static void flash_enable_xip(void)
{
    uint32_t ctrl = REG_CTRL;
    ctrl |= (1u << 8);  /* XIP enable */
    REG_CTRL = ctrl;
}

/* CMD register encoding */
#define FLASH_CMD(opcode, quad, dummy, addr_bytes, data_len) \
    (((opcode) & 0xFF) | \
     (((quad) & 1) << 8) | \
     ((((data_len) >> 8) & 1) << 9) | \
     (((dummy) & 0xF) << 12) | \
     (((addr_bytes) & 0xF) << 16) | \
     (((data_len) & 0xFF) << 24))

static uint32_t flash_read_jedec(void)
{
    flash_wait_idle();
    REG_CMD = FLASH_CMD(0x9F, 0, 0, 0, 3);
    flash_wait_idle();
    uint8_t id[3];
    for (int i = 0; i < 3; i++)
        id[i] = (uint8_t)REG_RDATA;
    return ((uint32_t)id[0] << 16) | ((uint32_t)id[1] << 8) | id[2];
}

/* ---- XIP read test ---- */

/*
 * The w25q256_model initializes flash with mem[i] = i[7:0].
 * So XIP address 0x20000000 + N should read byte N & 0xFF.
 * A 32-bit read at address 0x20000000 + 4*k should give:
 *   little-endian: byte0 = (4k)&0xFF, byte1 = (4k+1)&0xFF, ...
 *   word = byte3<<24 | byte2<<16 | byte1<<8 | byte0
 */
static uint32_t expected_word(uint32_t byte_addr)
{
    uint8_t b0 = (byte_addr + 0) & 0xFF;
    uint8_t b1 = (byte_addr + 1) & 0xFF;
    uint8_t b2 = (byte_addr + 2) & 0xFF;
    uint8_t b3 = (byte_addr + 3) & 0xFF;
    return (uint32_t)b0 | ((uint32_t)b1 << 8) |
           ((uint32_t)b2 << 16) | ((uint32_t)b3 << 24);
}

#define TEST_SIZE_BYTES  256  /* small for fast sim */

static int test_xip_read(uint32_t div)
{
    volatile uint32_t *xip = (volatile uint32_t *)XIP_BASE;
    int errors = 0;

    flash_set_div(div);
    flash_enable_xip();

    /* Invalidate prefetch line by reading a different region first */
    (void)xip[1024];  /* force a miss */

    for (uint32_t i = 0; i < TEST_SIZE_BYTES / 4; i++) {
        uint32_t got = xip[i];
        uint32_t exp = expected_word(i * 4);
        if (got != exp) {
            if (errors < 4) {
                puts_raw("  MISMATCH @ ");
                put_hex8(i * 4);
                puts_raw(": got ");
                put_hex8(got);
                puts_raw(" exp ");
                put_hex8(exp);
                puts_raw("\n");
            }
            errors++;
        }
    }
    return errors;
}

/* ---- Capture BRAM test ---- */

/*
 * 9-bit capture sample format: {cs_n, d_out[3:0], d_in[3:0]}
 *   bit 8: CS_N (1 = deasserted)
 *   bits 7:4: d_out[3:0] — ODDR D1 values (what controller is sending)
 *   bits 3:0: d_in[3:0]  — IDDR Q1 values (what flash is returning)
 *
 * CAP_DATA register: 2 packed 9-bit samples per word
 *   [8:0]  = even sample
 *   [17:9] = odd sample
 *   [31:18] = 0
 */

static void dump_capture(int nsamples)
{
    puts_raw("\n=== Capture BRAM Dump ===\n");
    puts_raw("  #   CS  out  in   meaning\n");
    puts_raw("----  --  ---  ---  -------\n");

    int cs_was_high = 1;
    int cmd_bits = 0;
    uint8_t cmd_byte = 0;

    for (int w = 0; w < (nsamples + 1) / 2; w++) {
        REG_CAP_ADDR = w;
        uint32_t data = REG_CAP_DATA;

        for (int s = 0; s < 2 && (w * 2 + s) < nsamples; s++) {
            int idx = w * 2 + s;
            uint16_t sample = (data >> (s * 9)) & 0x1FF;
            uint8_t cs_n   = (sample >> 8) & 1;
            uint8_t d_out  = (sample >> 4) & 0xF;
            uint8_t d_in   = sample & 0xF;

            /* Print sample number */
            if (idx < 10) uart_putc(' ');
            if (idx < 100) uart_putc(' ');
            put_dec(idx);
            puts_raw("   ");
            uart_putc('0' + cs_n);
            puts_raw("   ");
            uart_putc('0' + ((d_out >> 3) & 1));
            uart_putc('0' + ((d_out >> 2) & 1));
            uart_putc('0' + ((d_out >> 1) & 1));
            uart_putc('0' + (d_out & 1));
            puts_raw(" ");
            uart_putc('0' + ((d_in >> 3) & 1));
            uart_putc('0' + ((d_in >> 2) & 1));
            uart_putc('0' + ((d_in >> 1) & 1));
            uart_putc('0' + (d_in & 1));
            puts_raw("  ");

            /* Annotate key events */
            if (cs_n && !cs_was_high) {
                puts_raw("CS deassert");
                cmd_bits = 0;
            } else if (!cs_n && cs_was_high) {
                puts_raw("CS assert");
                cmd_bits = 0;
                cmd_byte = 0;
            } else if (!cs_n && cmd_bits < 8) {
                /* Command phase: single-SPI on d_out[0] */
                cmd_byte = (cmd_byte << 1) | (d_out & 1);
                cmd_bits++;
                if (cmd_bits == 8) {
                    puts_raw("CMD=0x");
                    put_hex2(cmd_byte);
                    if (cmd_byte == 0xEC) puts_raw(" (Quad IO Fast Read)");
                }
            } else if (!cs_n && cmd_bits >= 8) {
                /* Data phase */
                puts_raw("out=0x");
                put_hex2(d_out);
                puts_raw(" in=0x");
                put_hex2(d_in);
            }

            cs_was_high = cs_n;
            puts_raw("\n");
        }
    }
}

/* ---- Main ---- */

/* Exit string that tells Verilator sim to stop */
static const char exit_string[] = "Safe to exit simulator.\xd8\xaf\xfb\xa0\xc7\xe1\xa9\xd7";

int main(void)
{
    int pass = 1;

    uart_init();

    puts_raw("\n");
    puts_raw("================================\n");
    puts_raw(" XIP Flash DDR Smoke Test\n");
    puts_raw("================================\n\n");

    /* ---- Test 1: Eye diagram via JEDEC ID + XIP verify ---- */

    /* Pass 1: fast eye diagram — single XIP word read at each (div, delay) */
    uint32_t ref_word = expected_word(0);  /* 0x03020100 */
    volatile uint32_t *xip = (volatile uint32_t *)XIP_BASE;

    puts_raw("--- Eye diagram (XIP word 0 at each div/delay) ---\n");
    puts_raw("Expected: 0x");
    put_hex8(ref_word);
    puts_raw("\n");
    puts_raw("div  dly: 0  1  2  3  4  5  6  7   best\n");
    puts_raw("---      -- -- -- -- -- -- -- --   ----\n");

    int best_for_div[10];

    for (int div = 9; div >= 0; div--) {
        int best = -1;
        puts_raw("  ");
        put_dec(div);
        puts_raw("      ");
        for (int dly = 0; dly < 8; dly++) {
            flash_set_read_delay(dly);
            flash_set_div(div);
            flash_enable_xip();
            /* Force cache miss by reading a distant address */
            (void)xip[1024];
            uint32_t got = xip[0];
            int ok = (got == ref_word);
            puts_raw(ok ? "ok " : "-- ");
            if (ok && best < 0) best = dly;
        }
        best_for_div[div] = best;
        if (best >= 0) {
            puts_raw("  ");
            put_dec(best);
        } else {
            puts_raw("  none");
        }
        puts_raw("\n");
    }

    /* Pass 2: XIP verify at best delay per divider */
    puts_raw("\n--- XIP verify at best delay ---\n");
    puts_raw("div  SPI_MHz  delay  errors  result\n");
    puts_raw("---  -------  -----  ------  ------\n");

    for (int div = 9; div >= 0; div--) {
        uint32_t spi_mhz;
        if (div == 0)
            spi_mhz = 40;  /* DDR mode */
        else
            spi_mhz = 40 / (2 * div);

        int best_delay = best_for_div[div];
        int best_errors;

        if (best_delay >= 0) {
            flash_set_read_delay(best_delay);
            best_errors = test_xip_read(div);
        } else {
            best_errors = -1;  /* no JEDEC-passing delay */
        }

        puts_raw(" ");
        if (div < 10) uart_putc(' ');
        put_dec(div);
        puts_raw("     ");
        if (spi_mhz < 10) uart_putc(' ');
        put_dec(spi_mhz);
        puts_raw("       ");
        if (best_delay >= 0)
            put_dec(best_delay);
        else
            uart_putc('-');
        puts_raw("       ");
        if (best_errors >= 0)
            put_dec(best_errors);
        else
            uart_putc('-');
        puts_raw("    ");
        if (best_errors == 0) {
            puts_raw("PASS");
        } else {
            puts_raw("FAIL");
            pass = 0;
        }
        puts_raw("\n");
    }

    /* ---- Test 2: Capture BRAM ---- */
    puts_raw("\n--- Test 2: Capture BRAM ---\n");

    /* Set divider to 2 (moderate speed, 10 MHz) for readable capture */
    flash_set_div(2);
    flash_enable_xip();

    /* Configure capture: 128 samples */
    REG_CAP_LEN = 128;

    /* Arm capture */
    REG_CAP_CTRL = (1u << 0);  /* arm */

    /* Force trigger (captures immediately on next SPI activity) */
    REG_CAP_CTRL = (1u << 0) | (1u << 1);  /* arm + force_trigger */

    /* Trigger SPI activity by doing an XIP read */
    /* Read from a different address to force a cache miss */
    (void)xip[2048];
    (void)xip[2049];
    (void)xip[2050];
    (void)xip[2051];

    /* Wait for capture done */
    int timeout = 100000;
    while (!(REG_CAP_CTRL & (1u << 8)) && --timeout)
        ;

    if (timeout == 0) {
        puts_raw("Capture TIMEOUT — done bit never set\n");
        pass = 0;
    } else {
        puts_raw("Capture complete, dumping first 64 samples:\n");
        dump_capture(64);

        /* Verify capture has some non-zero data */
        REG_CAP_ADDR = 0;
        uint32_t first_word = REG_CAP_DATA;
        REG_CAP_ADDR = 1;
        uint32_t second_word = REG_CAP_DATA;

        if (first_word == 0 && second_word == 0) {
            puts_raw("FAIL: capture data is all zeros\n");
            pass = 0;
        } else {
            puts_raw("Capture data present: word[0]=");
            put_hex8(first_word);
            puts_raw(" word[1]=");
            put_hex8(second_word);
            puts_raw(" PASS\n");
        }
    }

    /* ---- Summary ---- */
    puts_raw("\n================================\n");
    if (pass) {
        puts_raw(" ALL TESTS PASSED\n");
    } else {
        puts_raw(" SOME TESTS FAILED\n");
    }
    puts_raw("================================\n");

    /* Signal Verilator to exit */
    puts_raw(exit_string);

    /* Spin */
    for (;;)
        __asm__ volatile ("wfi");

    return 0;
}
