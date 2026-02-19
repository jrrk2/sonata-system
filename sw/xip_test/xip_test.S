// Minimal XIP flash test for Verilator simulation.
// Runs from SRAM (0x00100000), reads from XIP flash (0x20000000),
// prints results to UART0 (0x80100000).

#define UART_BASE  0x80100000
#define UART_WDATA 0x1C         // TX data register offset
#define UART_STATUS 0x14        // Status register offset
#define UART_CTRL  0x10         // Control register offset
#define UART_STATUS_TXFULL 0x1  // TX FIFO full bit

#define XIP_BASE   0x20000000

.section .text
.global _start

// Ibex reset vector is boot_addr + 0x80
.org 0x80
_start:
    // Set up stack at top of SRAM
    li      sp, 0x0011FF00

    // Enable UART TX with baud rate: CTRL[31:16]=NCO, CTRL[0]=TX enable
    // NCO generates 16x baud tick: NCO = baud * 16 * 2^16 / clk_freq
    // = 115200 * 16 * 65536 / 40000000 = 3020 = 0xBCC
    li      a0, UART_BASE
    li      t0, 0x0BCC0001
    sw      t0, UART_CTRL(a0)

    // Print "XIP:" header
    li      a1, 'X'
    jal     uart_putc
    li      a1, 'I'
    jal     uart_putc
    li      a1, 'P'
    jal     uart_putc
    li      a1, ':'
    jal     uart_putc

    // Read first 16 words from XIP flash
    li      s0, XIP_BASE        // Flash base address
    li      s1, 16              // Number of words to read

read_loop:
    lw      a2, 0(s0)           // Read word from XIP flash

    // Print hex value of a2
    mv      a3, a2
    jal     print_hex

    // Print space
    li      a1, ' '
    jal     uart_putc

    addi    s0, s0, 4           // Next word
    addi    s1, s1, -1
    bnez    s1, read_loop

    // Print newline
    li      a1, '\r'
    jal     uart_putc
    li      a1, '\n'
    jal     uart_putc

    // Print "OK" and signal to simulator to stop
    li      a1, 'O'
    jal     uart_putc
    li      a1, 'K'
    jal     uart_putc
    li      a1, '\n'
    jal     uart_putc

    // Spin forever
1:  j       1b

// uart_putc: send byte in a1 to UART
uart_putc:
    li      a0, UART_BASE
1:  lw      t0, UART_STATUS(a0)
    andi    t0, t0, UART_STATUS_TXFULL
    bnez    t0, 1b              // Wait if TX FIFO full
    sw      a1, UART_WDATA(a0)
    ret

// print_hex: print 32-bit value in a3 as 8 hex digits
print_hex:
    addi    sp, sp, -8
    sw      ra, 0(sp)
    sw      s2, 4(sp)

    li      s2, 8               // 8 nibbles

.ph_loop:
    srli    t0, a3, 28          // Get top nibble
    slli    a3, a3, 4           // Shift left for next nibble

    li      t1, 10
    blt     t0, t1, .ph_digit
    addi    a1, t0, ('A' - 10)
    j       .ph_out
.ph_digit:
    addi    a1, t0, '0'
.ph_out:
    jal     uart_putc

    addi    s2, s2, -1
    bnez    s2, .ph_loop

    lw      ra, 0(sp)
    lw      s2, 4(sp)
    addi    sp, sp, 8
    ret
