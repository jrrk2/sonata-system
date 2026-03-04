# Minimal startup for Ibex on Sonata — legacy (non-CHERI) mode
# Boot address: 0x00100000, reset vector at +0x80

.section .vectors, "ax"
.option norvc

  .org 0x00
  .rept 32
  jal x0, _exc_handler
  .endr

  .org 0x80
  jal x0, _reset

.section .text

_exc_handler:
  j _exc_handler        /* spin on exception */

_reset:
  /* Zero all registers */
  mv  x1, x0
  mv  x2, x0
  mv  x3, x0
  mv  x4, x0
  mv  x5, x0
  mv  x6, x0
  mv  x7, x0
  mv  x8, x0
  mv  x9, x0
  mv x10, x0
  mv x11, x0
  mv x12, x0
  mv x13, x0
  mv x14, x0
  mv x15, x0
  mv x16, x0
  mv x17, x0
  mv x18, x0
  mv x19, x0
  mv x20, x0
  mv x21, x0
  mv x22, x0
  mv x23, x0
  mv x24, x0
  mv x25, x0
  mv x26, x0
  mv x27, x0
  mv x28, x0
  mv x29, x0
  mv x30, x0
  mv x31, x0

  /* Stack at top of SRAM (128 KB at 0x00100000) */
  la sp, _stack_start

  /* Clear BSS */
  la t0, _bss_start
  la t1, _bss_end
  bge t0, t1, 2f
1:
  sw zero, 0(t0)
  addi t0, t0, 4
  blt t0, t1, 1b
2:

  /* Call main */
  jal ra, main

  /* Halt: write to sim ctrl */
  li t0, 0x20008
  li t1, 1
  sw t1, 0(t0)

3:
  wfi
  j 3b
