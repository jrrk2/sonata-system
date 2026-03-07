# Minimal startup for VexRiscv on LiteX — loaded via JTAG into HyperRAM
# Entry at 0x40000000, stack at top of 64K region

.section .text._start
.global _start
_start:
    # Set up trap handler (skip illegal CSR writes)
    la t0, _trap_skip
    csrw mtvec, t0

    # Clear PMP (may trap on unsupported CSRs — handler skips them)
    csrw pmpcfg0, zero
    csrw pmpcfg1, zero
    csrw pmpcfg2, zero
    csrw pmpcfg3, zero
    csrw pmpaddr0, zero
    csrw pmpaddr1, zero
    csrw pmpaddr2, zero
    csrw pmpaddr3, zero
    csrw pmpaddr4, zero
    csrw pmpaddr5, zero
    csrw pmpaddr6, zero
    csrw pmpaddr7, zero
    csrw pmpaddr8, zero
    csrw pmpaddr9, zero
    csrw pmpaddr10, zero
    csrw pmpaddr11, zero
    csrw pmpaddr12, zero
    csrw pmpaddr13, zero
    csrw pmpaddr14, zero
    csrw pmpaddr15, zero

    # Stack pointer
    la sp, _stack_start

    # Clear BSS
    la t0, _bss_start
    la t1, _bss_end
    bge t0, t1, 2f
1:
    sw zero, 0(t0)
    addi t0, t0, 4
    blt t0, t1, 1b
2:
    # Call main
    jal ra, main

    # Halt
3:
    wfi
    j 3b

    .align 4
_trap_skip:
    csrr t0, mepc
    addi t0, t0, 4
    csrw mepc, t0
    mret
