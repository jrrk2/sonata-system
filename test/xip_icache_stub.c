/*
 * SRAM stub for XIP icache test — runs from SRAM, initializes the XIP
 * controller, then jumps to the test binary at 0x20300000.
 *
 * Build as the -E ELF for Verilator, with the flash test loaded via
 * +flash_kernel= (placed at offset 0x300000 in the vmem).
 */

#include <stdint.h>

/* ---- Hardware addresses ---- */
#define UART0_BASE      0x80100000u

/* XIP controller registers */
#define FLASH_REG_BASE  0x80130000u
#define REG_CTRL        (*(volatile uint32_t *)(FLASH_REG_BASE + 0x00))
#define REG_STATUS      (*(volatile uint32_t *)(FLASH_REG_BASE + 0x04))

/* UART registers (OpenTitan style) */
#define UART_CTRL_REG      (*(volatile uint32_t *)(UART0_BASE + 0x10))
#define UART_STATUS_REG    (*(volatile uint32_t *)(UART0_BASE + 0x14))
#define UART_TX_REG        (*(volatile uint32_t *)(UART0_BASE + 0x1C))
#define UART_STATUS_TX_FULL  1u

/* ---- Minimal UART ---- */

static void uart_init(void)
{
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

/* ---- Flash helpers ---- */

static void flash_wait_idle(void)
{
    while (REG_STATUS & 1u)
        ;
}

static void flash_set_div(uint32_t div)
{
    flash_wait_idle();
    uint32_t ctrl = REG_CTRL;
    ctrl = (ctrl & ~0xFFu) | (div & 0xFFu);
    REG_CTRL = ctrl;
}

static void flash_enable_xip(void)
{
    uint32_t ctrl = REG_CTRL;
    ctrl |= (1u << 8);
    REG_CTRL = ctrl;
}

/* ---- Main ---- */

typedef void (*entry_fn)(void);

int main(void)
{
    uart_init();
    puts_raw("\n[stub] SRAM stub: init XIP, jump to 0x20300000\n");

    /* Set clock divider = 3 (conservative for sim) and enable XIP */
    flash_set_div(3);
    flash_enable_xip();

    puts_raw("[stub] XIP enabled, div=3. Jumping...\n");

    /* Jump to flash test at 0x20300000 */
    entry_fn entry = (entry_fn)0x20300000u;
    entry();

    /* Should not return */
    for (;;)
        __asm__ volatile ("wfi");

    return 0;
}
