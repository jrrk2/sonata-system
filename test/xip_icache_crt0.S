# Minimal startup for XIP icache test — entered via jump, not reset.
# No vector table needed; stub has already set up the system.
#
# Uses lui+addi pairs instead of la to avoid GOT, since this code
# executes from flash but the symbols are in SRAM. The la pseudo-
# instruction expands to auipc+lw (GOT load) which would require
# GOT data in SRAM to be pre-initialized.

.section .text
.globl _start

_start:
  /* Set stack pointer = 0x0011FF00 (top of 128K SRAM minus 256 guard) */
  lui  sp, %hi(_stack_start)
  addi sp, sp, %lo(_stack_start)

  /* Clear BSS: _bss_start to _bss_end
   * These are in the .bss section in SRAM (starts just after .got/.data)
   * Use %hi/%lo to get absolute addresses without GOT */
  lui  t0, %hi(_bss_start)
  addi t0, t0, %lo(_bss_start)
  lui  t1, %hi(_bss_end)
  addi t1, t1, %lo(_bss_end)
  bge  t0, t1, 2f
1:
  sw   zero, 0(t0)
  addi t0, t0, 4
  blt  t0, t1, 1b
2:

  /* Call main — use absolute jump since main is in flash near us */
  jal  ra, main

  /* Halt: write to sim ctrl */
  li   t0, 0x20008
  li   t1, 1
  sw   t1, 0(t0)

3:
  wfi
  j    3b
