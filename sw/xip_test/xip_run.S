// Execute-in-place test program.
// Linked at 0x20000000 (XIP flash), runs directly from flash.
// Prints "Hello from XIP flash!" to UART0 then spins.

#define UART_BASE   0x80100000
#define UART_CTRL   0x10
#define UART_STATUS 0x14
#define UART_WDATA  0x1C
#define UART_STATUS_TXFULL 0x1

// NCO for 115200 baud @ 40 MHz: baud * 16 * 65536 / 40000000 = 3020 = 0xBCC
#define UART_CTRL_VAL 0x0BCC0001

.section .text
.global _start

_start:
    // Set up stack in SRAM (flash is read-only)
    li      sp, 0x0011FF00

    // Configure UART
    li      a0, UART_BASE
    li      t0, UART_CTRL_VAL
    sw      t0, UART_CTRL(a0)

    // Print message
    la      a4, message
print_loop:
    lbu     a1, 0(a4)
    beqz    a1, done
    jal     uart_putc
    addi    a4, a4, 1
    j       print_loop

done:
    // Spin forever
1:  j       1b

// uart_putc: send byte in a1 to UART
uart_putc:
    li      a0, UART_BASE
1:  lw      t0, UART_STATUS(a0)
    andi    t0, t0, UART_STATUS_TXFULL
    bnez    t0, 1b
    sw      a1, UART_WDATA(a0)
    ret

.section .rodata
message:
    .asciz "Hello from XIP flash!\r\n"
