# Minimal test for Verilator simulation
# Linked at ROM base (0x00000000), writes to UART, reads from spi_eth
#
# Memory map:
#   ROM:       0x00000000 (64KB)
#   SRAM:      0x10000000 (6KB) — stack
#   UART:      0xf0001000
#   SPI_ETH:   0x80302000

.section .text._start
.global _start
_start:
    # Stack at top of SRAM
    li sp, 0x10001800

    # Trap handler
    la t0, _trap_skip
    csrw mtvec, t0

    # Clear PMP (trap handler skips unsupported CSRs)
    csrw pmpcfg0, zero
    csrw pmpcfg1, zero
    csrw pmpcfg2, zero
    csrw pmpcfg3, zero

    # Print "SPI=" on UART at 0xf0001000 (txdata at offset 0)
    li a0, 0xf0001000
    li t0, 'S'
    sw t0, 0(a0)
    li t0, 'P'
    sw t0, 0(a0)
    li t0, 'I'
    sw t0, 0(a0)
    li t0, '='
    sw t0, 0(a0)

    # Read SPI_ETH STATUS register at 0x80302014
    li a1, 0x80302014
    lw a2, 0(a1)          # This is the critical access

    # Print result as hex
    # a2 = value read from spi_eth
    # Print 8 hex digits
    li a3, 28              # shift amount, start from MSB
1:
    srl t0, a2, a3
    andi t0, t0, 0xF
    li t1, 10
    blt t0, t1, 2f
    addi t0, t0, ('A' - 10)
    j 3f
2:
    addi t0, t0, '0'
3:
    sw t0, 0(a0)           # print hex digit
    addi a3, a3, -4
    bge a3, zero, 1b

    # Print newline
    li t0, '\n'
    sw t0, 0(a0)

    # Also read CFG at 0x8030200C and CS at 0x80302028
    li a1, 0x8030200C
    lw a2, 0(a1)
    li a1, 0x80302028
    lw a3, 0(a1)

    # Write 0xDEADBEEF to TX BRAM at 0x80303000
    li a1, 0x80303000
    li t0, 0xDEADBEEF
    sw t0, 0(a1)

    # Read it back
    lw a4, 0(a1)

    # Print "OK" if we got here
    li t0, 'O'
    sw t0, 0(a0)
    li t0, 'K'
    sw t0, 0(a0)
    li t0, '\n'
    sw t0, 0(a0)

    # Halt
4:
    wfi
    j 4b

    .align 4
_trap_skip:
    csrr t0, mepc
    addi t0, t0, 4
    csrw mepc, t0
    mret
