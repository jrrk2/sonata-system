/*
 * Minimal M-mode stub for LiteX VexRiscv on Sonata FPGA
 *
 * Replaces OpenSBI (260KB) with ~1KB.  The init code runs once from
 * HyperRAM, copies the trap handler to SRAM (0x10000000, invisible to
 * Linux), sets up PMP/delegation, then mrets into S-mode.
 *
 * The resident trap handler in SRAM handles:
 *   - SBI ecalls from S-mode (timer, base extension)
 *   - M-mode timer interrupts (injects STIP)
 *   - Illegal instruction (emulates rdtime/rdtimeh, forwards others)
 */

/* ── Constants ─────────────────────────────────────────────────────── */

.equ SRAM_BASE,         0x10000000
.equ SRAM_TRAP_STACK,   0x10000800

.equ CLINT_MTIMECMP,    0xf0014000
.equ CLINT_MTIME,       0xf001BFF8

/*
 * A/B flash layout (32MB SPI NOR at 0x02000000):
 *   Slot A: 0x02000000 - 0x023FFFFF  (4MB) — kernel A
 *   Slot B: 0x02400000 - 0x027FFFFF  (4MB) — kernel B
 *   rootfs: 0x02800000 - onwards     — shared romfs
 *   Flags:  0x027FFFF0 (16 bytes)    — boot selection flags
 *
 * Flag byte at BOOT_FLAGS_ADDR:
 *   0x00 or 0xFF (erased) = boot slot A (default)
 *   0x42 ('B')            = boot slot B
 *   anything else         = boot slot A
 */
.equ FLASH_BASE,        0x02000000
.equ SLOT_A_ENTRY,      0x02000000
.equ SLOT_B_ENTRY,      0x02400000
.equ BOOT_FLAGS_ADDR,   0x027FFFF0
.equ BOOT_FLAG_B,       0x42          /* 'B' = boot slot B */

.equ DTB_ADDR,          0x40770000

.equ UART_BASE,         0xf0001000
.equ UART_RXTX,         0x00
.equ UART_TXFULL,       0x04

.equ SBI_EXT_0_1_SET_TIMER, 0x0
.equ SBI_EXT_BASE,          0x10
.equ SBI_EXT_TIME,          0x54494D45

.equ SBI_BASE_GET_SPEC_VERSION, 0
.equ SBI_BASE_GET_IMP_ID,       1
.equ SBI_BASE_GET_IMP_VERSION,  2
.equ SBI_BASE_PROBE_EXT,        3
.equ SBI_BASE_GET_MVENDORID,    4
.equ SBI_BASE_GET_MARCHID,      5
.equ SBI_BASE_GET_MIMPID,       6

.equ SBI_SUCCESS,           0
.equ SBI_ERR_NOT_SUPPORTED, -2

.equ MCAUSE_ILLEGAL_INSN,  2
.equ MCAUSE_S_ECALL,       9
.equ MCAUSE_M_TIMER_IRQ,   0x80000007

.equ MSTATUS_MPP_S,        0x800
.equ MIE_MTIE,             0x80
.equ MIP_STIP,             0x20

/*
 * Trap frame layout: 128 bytes, indexed by register number.
 * offset = regnum * 4.  Slots 0 (x0) and 8 (x2/sp) unused.
 */
.equ FRAME_SIZE, 128

/* ══════════════════════════════════════════════════════════════════════
 * INIT CODE (runs once from load address)
 * ══════════════════════════════════════════════════════════════════════ */

    .section .text
    .globl _start
    .option norelax

_start:
    /* 1. Copy trap handler to SRAM */
    la      t0, _trap_handler       /* source (runtime address) */
    li      t1, SRAM_BASE           /* destination */
    la      t2, _trap_handler_end   /* source end */

.copy_loop:
    lw      t3, 0(t0)
    sw      t3, 0(t1)
    addi    t0, t0, 4
    addi    t1, t1, 4
    blt     t0, t2, .copy_loop

    /* Ensure I-cache sees the new code */
    fence.i

    /* 2. mtvec = SRAM trap handler */
    li      t0, SRAM_BASE
    csrw    mtvec, t0

    /* 3. mscratch = trap stack */
    li      t0, SRAM_TRAP_STACK
    csrw    mscratch, t0

    /* 4. PMP: SRAM M-only, everything else open */
    li      t0, 0x040003FF
    csrw    pmpaddr0, t0
    li      t0, 0x3FFFFFFF
    csrw    pmpaddr1, t0
    li      t0, 0x1F18
    csrw    pmpcfg0, t0

    /* 5. Delegate traps — keep illegal insn (bit 2) and ecall-from-S (bit 9) */
    li      t0, 0xFFFFFDFB          /* all except bits 2 and 9 */
    csrw    medeleg, t0
    li      t0, 0xFFFFFFFF
    csrw    mideleg, t0

    /* 6. Enable M-mode timer interrupt */
    li      t0, MIE_MTIE
    csrw    mie, t0

    /* 7. mstatus.MPP = Supervisor */
    csrr    t0, mstatus
    li      t1, 0x1800
    not     t1, t1
    and     t0, t0, t1
    li      t1, MSTATUS_MPP_S
    or      t0, t0, t1
    csrw    mstatus, t0

    /* ── A/B boot selection ──────────────────────────────────────────── */
    li      s0, UART_BASE

    /* Read boot flag byte from flash */
    li      t0, BOOT_FLAGS_ADDR
    lbu     s3, 0(t0)                /* s3 = boot flag byte */

    /* Select kernel entry point */
    li      s4, SLOT_A_ENTRY          /* s4 = kernel entry (default A) */
    li      t0, BOOT_FLAG_B
    bne     s3, t0, .boot_slot_a
    li      s4, SLOT_B_ENTRY          /* flag == 'B' → slot B */

.boot_slot_a:
    /* ── Debug: print boot slot and flash checksums via UART ──────── */
    /* Print banner "STUB:A" or "STUB:B" */
    li      a0, 'S'
    jal     ra, .uart_putc
    li      a0, 'T'
    jal     ra, .uart_putc
    li      a0, 'U'
    jal     ra, .uart_putc
    li      a0, 'B'
    jal     ra, .uart_putc
    li      a0, ':'
    jal     ra, .uart_putc
    /* Print slot letter */
    li      t0, BOOT_FLAG_B
    bne     s3, t0, .print_a
    li      a0, 'B'
    j       .print_slot_done
.print_a:
    li      a0, 'A'
.print_slot_done:
    jal     ra, .uart_putc
    li      a0, '\n'
    jal     ra, .uart_putc

    /* Print first 16 bytes of selected kernel slot as hex */
    li      a0, 'F'
    jal     ra, .uart_putc
    li      a0, '0'
    jal     ra, .uart_putc
    li      a0, ':'
    jal     ra, .uart_putc
    mv      s1, s4                    /* s4 = selected entry */
    li      s2, 16
.print_flash_bytes:
    lbu     a0, 0(s1)
    jal     ra, .uart_puthex8
    li      a0, ' '
    jal     ra, .uart_putc
    addi    s1, s1, 1
    addi    s2, s2, -1
    bnez    s2, .print_flash_bytes
    li      a0, '\n'
    jal     ra, .uart_putc

    /* Checksum of first 1MB of selected kernel slot */
    li      a0, 'C'
    jal     ra, .uart_putc
    li      a0, '1'
    jal     ra, .uart_putc
    li      a0, ':'
    jal     ra, .uart_putc
    mv      a0, s4                    /* start of selected slot */
    li      a1, 0x100000              /* 1MB length */
    jal     ra, .checksum
    mv      a0, s1                    /* result in s1 */
    jal     ra, .uart_puthex32
    li      a0, '\n'
    jal     ra, .uart_putc

    /* Checksum of rootfs region (512KB at offset 0x800000) */
    li      a0, 'C'
    jal     ra, .uart_putc
    li      a0, '2'
    jal     ra, .uart_putc
    li      a0, ':'
    jal     ra, .uart_putc
    li      a0, (FLASH_BASE + 0x800000)  /* rootfs start */
    li      a1, 0x80000               /* 512KB length */
    jal     ra, .checksum
    mv      a0, s1
    jal     ra, .uart_puthex32
    li      a0, '\n'
    jal     ra, .uart_putc

    /* ── Continue boot ────────────────────────────────────────────── */

    /* 8. mepc = selected kernel entry */
    csrw    mepc, s4

    /* 9. a0 = hartid, a1 = DTB */
    li      a0, 0
    li      a1, DTB_ADDR

    /* 10. Enter S-mode */
    mret

/* ── UART helper routines (used during init only) ─────────────────── */

/* Print character in a0 to UART. Clobbers t0. */
.uart_putc:
1:  lw      t0, UART_TXFULL(s0)
    bnez    t0, 1b
    sw      a0, UART_RXTX(s0)
    ret

/* Print byte in a0 as 2 hex digits. Clobbers a0, t0, t1, t2. */
.uart_puthex8:
    mv      t2, ra
    mv      t1, a0
    srli    a0, t1, 4
    andi    a0, a0, 0xF
    jal     ra, .uart_putnib
    andi    a0, t1, 0xF
    jal     ra, .uart_putnib
    mv      ra, t2
    ret

/* Print 32-bit word in a0 as 8 hex digits. Clobbers a0, t0-t5. */
.uart_puthex32:
    mv      t5, ra
    mv      t4, a0
    srli    a0, t4, 24
    andi    a0, a0, 0xFF
    jal     ra, .uart_puthex8
    srli    a0, t4, 16
    andi    a0, a0, 0xFF
    jal     ra, .uart_puthex8
    srli    a0, t4, 8
    andi    a0, a0, 0xFF
    jal     ra, .uart_puthex8
    andi    a0, t4, 0xFF
    jal     ra, .uart_puthex8
    mv      ra, t5
    ret

/* Print nibble in a0 (0-15) as hex char. Clobbers a0, t0. */
.uart_putnib:
    andi    a0, a0, 0xF
    li      t0, 10
    blt     a0, t0, 1f
    addi    a0, a0, ('a' - 10)
    j       2f
1:  addi    a0, a0, '0'
2:  j       .uart_putc              /* tail call */

/* Simple additive checksum: sum all bytes. a0=start, a1=length.
 * Returns result in s1. Clobbers a0, a1, t0. */
.checksum:
    li      s1, 0
    add     a1, a0, a1              /* a1 = end address */
1:  lbu     t0, 0(a0)
    add     s1, s1, t0
    addi    a0, a0, 1
    blt     a0, a1, 1b
    ret


/* ══════════════════════════════════════════════════════════════════════
 * TRAP HANDLER (copied to SRAM at 0x10000000)
 *
 * Frame: 128 bytes, slot[N] = register xN (offset = N*4).
 * Common path saves only the registers it clobbers.
 * Illegal-instruction path saves all for arbitrary rd writeback.
 * ══════════════════════════════════════════════════════════════════════ */

    .balign 4
_trap_handler:
    csrrw   sp, mscratch, sp
    addi    sp, sp, -FRAME_SIZE

    /* Minimal save (registers used by all paths) */
    sw      ra,   4(sp)             /* x1  */
    sw      t0,  20(sp)             /* x5  */
    sw      t1,  24(sp)             /* x6  */
    sw      t2,  28(sp)             /* x7  */
    sw      t3, 112(sp)             /* x28 */
    sw      t4, 116(sp)             /* x29 */
    sw      t5, 120(sp)             /* x30 */
    sw      a0,  40(sp)             /* x10 */
    sw      a1,  44(sp)             /* x11 */
    sw      a6,  64(sp)             /* x16 */
    sw      a7,  68(sp)             /* x17 */

    csrr    t0, mcause

    /* Illegal instruction? */
    li      t1, MCAUSE_ILLEGAL_INSN
    beq     t0, t1, .handle_illegal_insn

    /* Interrupt? */
    bltz    t0, .handle_interrupt

    /* ecall from S-mode? */
    li      t1, MCAUSE_S_ECALL
    bne     t0, t1, .trap_unknown

    /* ── SBI ecall ────────────────────────────────────────────────── */
    csrr    t0, mepc
    addi    t0, t0, 4
    csrw    mepc, t0

    li      t0, SBI_EXT_0_1_SET_TIMER
    beq     a7, t0, .sbi_set_timer

    li      t0, SBI_EXT_TIME
    beq     a7, t0, .sbi_set_timer_v02

    li      t0, SBI_EXT_BASE
    beq     a7, t0, .sbi_base

    li      a0, SBI_ERR_NOT_SUPPORTED
    li      a1, 0
    j       .trap_ret_ecall

.sbi_set_timer:
    li      t0, CLINT_MTIMECMP
    sw      a0, 0(t0)
    sw      a1, 4(t0)
    li      t0, MIP_STIP
    csrc    mip, t0
    li      t0, MIE_MTIE
    csrs    mie, t0
    li      a0, 0
    j       .trap_ret_ecall

.sbi_set_timer_v02:
    li      t0, CLINT_MTIMECMP
    sw      a0, 0(t0)
    sw      a1, 4(t0)
    li      t0, MIP_STIP
    csrc    mip, t0
    li      t0, MIE_MTIE
    csrs    mie, t0
    li      a0, SBI_SUCCESS
    li      a1, 0
    j       .trap_ret_ecall

.sbi_base:
    li      t0, SBI_BASE_GET_SPEC_VERSION
    beq     a6, t0, .base_spec
    li      t0, SBI_BASE_GET_IMP_ID
    beq     a6, t0, .base_imp_id
    li      t0, SBI_BASE_GET_IMP_VERSION
    beq     a6, t0, .base_imp_ver
    li      t0, SBI_BASE_PROBE_EXT
    beq     a6, t0, .base_probe
    li      t0, SBI_BASE_GET_MVENDORID
    beq     a6, t0, .base_zero
    li      t0, SBI_BASE_GET_MARCHID
    beq     a6, t0, .base_zero
    li      t0, SBI_BASE_GET_MIMPID
    beq     a6, t0, .base_zero
    li      a0, SBI_ERR_NOT_SUPPORTED
    li      a1, 0
    j       .trap_ret_ecall

.base_spec:
    li      a0, SBI_SUCCESS
    li      a1, 2
    j       .trap_ret_ecall

.base_imp_id:
    li      a0, SBI_SUCCESS
    li      a1, 0xFF
    j       .trap_ret_ecall

.base_imp_ver:
    li      a0, SBI_SUCCESS
    li      a1, 1
    j       .trap_ret_ecall

.base_probe:
    li      a1, 0
    li      t0, SBI_EXT_TIME
    beq     a0, t0, .probe_yes
    li      t0, SBI_EXT_BASE
    beq     a0, t0, .probe_yes
    li      t0, SBI_EXT_0_1_SET_TIMER
    beq     a0, t0, .probe_yes
    li      a0, SBI_SUCCESS
    j       .trap_ret_ecall

.probe_yes:
    li      a0, SBI_SUCCESS
    li      a1, 1
    j       .trap_ret_ecall

.base_zero:
    li      a0, SBI_SUCCESS
    li      a1, 0
    j       .trap_ret_ecall

    /* ── M-mode timer interrupt ───────────────────────────────────── */
.handle_interrupt:
    li      t1, MCAUSE_M_TIMER_IRQ
    bne     t0, t1, .trap_unknown

    li      t0, CLINT_MTIMECMP
    li      t1, -1
    sw      t1, 0(t0)
    sw      t1, 4(t0)
    li      t0, MIE_MTIE
    csrc    mie, t0
    li      t0, MIP_STIP
    csrs    mip, t0
    j       .trap_ret_notouch

    /* ── Illegal instruction ──────────────────────────────────────── */
.handle_illegal_insn:
    /* Save all remaining registers for arbitrary rd writeback */
    sw      gp,  12(sp)
    sw      tp,  16(sp)
    sw      s0,  32(sp)
    sw      s1,  36(sp)
    sw      a2,  48(sp)
    sw      a3,  52(sp)
    sw      a4,  56(sp)
    sw      a5,  60(sp)
    sw      s2,  72(sp)
    sw      s3,  76(sp)
    sw      s4,  80(sp)
    sw      s5,  84(sp)
    sw      s6,  88(sp)
    sw      s7,  92(sp)
    sw      s8,  96(sp)
    sw      s9, 100(sp)
    sw      s10,104(sp)
    sw      s11,108(sp)
    sw      t6, 124(sp)

    /* Get faulting instruction from mtval (avoids virtual address access) */
    csrr    t2, mtval

    /* Check pattern: CSRRS rd, csr, x0  (funct3=010, rs1=0, opcode=SYSTEM)
     * mask  = 0x000FF07F  (checks rs1, funct3, opcode; ignores CSR and rd)
     * match = 0x00002073 */
    li      t3, 0x000FF07F
    and     t4, t2, t3
    li      t3, 0x2073
    bne     t4, t3, .fwd_to_smode

    /* Extract CSR number (bits 31:20) */
    srli    t4, t2, 20

    li      t3, 0xC01               /* time */
    beq     t4, t3, .emul_rdtime

    li      t3, 0xC81               /* timeh */
    beq     t4, t3, .emul_rdtimeh

    j       .fwd_to_smode

.emul_rdtime:
    li      t3, CLINT_MTIME
    lw      t3, 0(t3)              /* low 32 bits of mtime */
    j       .emul_write_rd

.emul_rdtimeh:
    li      t3, CLINT_MTIME
    lw      t3, 4(t3)              /* high 32 bits of mtime */

.emul_write_rd:
    /* Extract rd = (instruction >> 7) & 0x1F */
    srli    t2, t2, 7
    andi    t2, t2, 0x1F
    beqz    t2, .emul_done          /* x0, nothing to write */

    /* Write value into frame slot: frame[rd*4] = t3 */
    slli    t2, t2, 2
    add     t2, sp, t2
    sw      t3, 0(t2)

.emul_done:
    /* Advance mepc past the faulting instruction */
    csrr    t1, mepc
    addi    t1, t1, 4
    csrw    mepc, t1
    j       .trap_ret_full

    /* ── Forward non-time illegal instruction to S-mode ───────────── */
.fwd_to_smode:
    csrr    t1, mepc
    csrw    sepc, t1

    li      t1, MCAUSE_ILLEGAL_INSN
    csrw    scause, t1

    csrr    t1, mtval
    csrw    stval, t1

    /* mstatus: SPIE ← SIE, SIE ← 0, SPP ← (was S-mode?) */
    csrr    t1, mstatus
    andi    t2, t1, 2               /* SIE (bit 1) */
    slli    t2, t2, 4               /* → SPIE (bit 5) */
    srli    t3, t1, 3               /* shift bit 11 → bit 8 */
    andi    t3, t3, 0x100           /* isolate SPP (bit 8) */
    li      t4, 0x122               /* clear SIE, SPIE, SPP */
    not     t4, t4
    and     t1, t1, t4
    or      t1, t1, t2              /* set SPIE */
    or      t1, t1, t3              /* set SPP */
    csrw    mstatus, t1

    csrr    t1, stvec
    andi    t1, t1, -4              /* clear mode bits */
    csrw    mepc, t1

    j       .trap_ret_full

    /* ── Unknown trap — ignore ────────────────────────────────────── */
.trap_unknown:
    j       .trap_ret_notouch

    /* ── Return paths ─────────────────────────────────────────────── */

    /* ecall return: a0/a1 hold return values, don't restore them */
.trap_ret_ecall:
    lw      ra,   4(sp)
    lw      t0,  20(sp)
    lw      t1,  24(sp)
    lw      t2,  28(sp)
    lw      t3, 112(sp)
    lw      t4, 116(sp)
    lw      t5, 120(sp)
    lw      a6,  64(sp)
    lw      a7,  68(sp)
    addi    sp, sp, FRAME_SIZE
    csrrw   sp, mscratch, sp
    mret

    /* No-touch return: restore all minimal-saved registers */
.trap_ret_notouch:
    lw      ra,   4(sp)
    lw      t0,  20(sp)
    lw      t1,  24(sp)
    lw      t2,  28(sp)
    lw      t3, 112(sp)
    lw      t4, 116(sp)
    lw      t5, 120(sp)
    lw      a0,  40(sp)
    lw      a1,  44(sp)
    lw      a6,  64(sp)
    lw      a7,  68(sp)
    addi    sp, sp, FRAME_SIZE
    csrrw   sp, mscratch, sp
    mret

    /* Full return: restore ALL registers (used after illegal insn) */
.trap_ret_full:
    lw      ra,   4(sp)
    lw      gp,  12(sp)
    lw      tp,  16(sp)
    lw      t0,  20(sp)
    lw      t1,  24(sp)
    lw      t2,  28(sp)
    lw      s0,  32(sp)
    lw      s1,  36(sp)
    lw      a0,  40(sp)
    lw      a1,  44(sp)
    lw      a2,  48(sp)
    lw      a3,  52(sp)
    lw      a4,  56(sp)
    lw      a5,  60(sp)
    lw      a6,  64(sp)
    lw      a7,  68(sp)
    lw      s2,  72(sp)
    lw      s3,  76(sp)
    lw      s4,  80(sp)
    lw      s5,  84(sp)
    lw      s6,  88(sp)
    lw      s7,  92(sp)
    lw      s8,  96(sp)
    lw      s9, 100(sp)
    lw      s10,104(sp)
    lw      s11,108(sp)
    lw      t3, 112(sp)
    lw      t4, 116(sp)
    lw      t5, 120(sp)
    lw      t6, 124(sp)
    addi    sp, sp, FRAME_SIZE
    csrrw   sp, mscratch, sp
    mret

_trap_handler_end:
