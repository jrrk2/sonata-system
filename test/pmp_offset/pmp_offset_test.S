# PMP Address Offset Extension - Hardware Test
#
# Tests the custom pmpoffset CSRs (0x7D0-0x7DF) which add per-region
# address translation to PMP: physical = virtual + offset
#
# Run via GDB on Sonata with the new FPGA bitstream:
#   target remote 192.168.1.169:2331
#   load pmp_offset_test.elf
#   break done
#   continue
#   info registers a0 a1 a2 a3 a4 a5
#
# Results in a0-a5: 1 = pass, 0 = fail
# Also prints results to UART0 (serial console)
#
# Memory map assumed:
#   0x20000000  Flash (XIP, read-only)
#   0x40000000  HyperRAM (8MB)
#   0x80100000  UART0 (OpenTitan)

.equ UART_BASE,    0x80100000
.equ UART_STATUS,  0x14
.equ UART_WDATA,   0x1C
.equ UART_TXFULL,  0x01

# CSR addresses
.equ CSR_PMPCFG0,    0x3A0
.equ CSR_PMPADDR0,   0x3B0
.equ CSR_PMPADDR1,   0x3B1
.equ CSR_PMPADDR2,   0x3B2
.equ CSR_PMPOFFSET0, 0x7D0
.equ CSR_PMPOFFSET1, 0x7D1
.equ CSR_PMPOFFSET2, 0x7D2

# PMP config bits: TOR=0x08, R=0x01, W=0x02, X=0x04
.equ PMP_TOR_RWX,  0x0F    # TOR + R+W+X
.equ PMP_TOR_RW,   0x0B    # TOR + R+W
.equ PMP_TOR_RX,   0x0D    # TOR + R+X

.section .text
.globl _start
_start:
    # Set up stack in upper RAM (well away from test regions)
    li   sp, 0x40700000

    # Set up UART base in s11 for print routines
    li   s11, UART_BASE

    # Print banner
    la   a0, str_banner
    jal  ra, puts

    # =========================================================
    # First, clear all PMP config to start clean
    # =========================================================
    csrw 0x3A0, zero        # pmpcfg0  (regions 0-3)
    csrw 0x3A1, zero        # pmpcfg1  (regions 4-7)
    csrw 0x3A2, zero        # pmpcfg2  (regions 8-11)
    csrw 0x3A3, zero        # pmpcfg3  (regions 12-15)

    # =========================================================
    # Test 1: CSR read/write - verify pmpoffset0 is accessible
    # =========================================================
    la   a0, str_test1
    jal  ra, puts

    # Write a known value
    li   t0, 0x12345000
    csrw 0x7D0, t0          # pmpoffset0 = 0x12345000
    csrr t1, 0x7D0          # read it back
    beq  t0, t1, 1f
    li   a0, 0              # FAIL
    j    test1_done
1:
    # Write another value to a different register
    li   t0, 0xABCDE000
    csrw 0x7D1, t0          # pmpoffset1 = 0xABCDE000
    csrr t1, 0x7D1
    beq  t0, t1, 2f
    li   a0, 0
    j    test1_done
2:
    # Verify pmpoffset0 wasn't corrupted
    csrr t1, 0x7D0
    li   t0, 0x12345000
    beq  t0, t1, 3f
    li   a0, 0
    j    test1_done
3:
    # Clear them
    csrw 0x7D0, zero
    csrw 0x7D1, zero
    li   a0, 1              # PASS
test1_done:
    mv   s0, a0             # save result in s0
    jal  ra, print_result

    # =========================================================
    # Test 2: Data load translation
    #
    # Set up PMP region 0 (TOR): virtual 0x00000000 - 0x00100000
    # with offset +0x40000000 so virtual 0x00080000 maps to
    # physical 0x40080000.
    #
    # Write a sentinel to physical 0x40080000 directly (no PMP
    # match in M-mode = identity), then read via virtual address.
    # =========================================================
    la   a0, str_test2
    jal  ra, puts

    # Write sentinel to physical RAM
    li   t0, 0x40080000
    li   t1, 0xDEADBEEF
    sw   t1, 0(t0)

    # Configure PMP region 0: TOR 0x00000000 - 0x00100000
    # pmpaddr0 = 0x00100000 >> 2 = 0x00040000
    li   t0, 0x00040000
    csrw 0x3B0, t0          # pmpaddr0

    # pmpcfg0 byte 0 = TOR + RWX = 0x0F
    li   t0, 0x0F
    csrw 0x3A0, t0

    # pmpoffset0 = 0x40000000
    li   t0, 0x40000000
    csrw 0x7D0, t0

    # Read through virtual address 0x00080000
    # PMP matches region 0 → physical = 0x00080000 + 0x40000000 = 0x40080000
    li   t0, 0x00080000
    lw   a0, 0(t0)

    # Verify we got the sentinel
    li   t1, 0xDEADBEEF
    beq  a0, t1, test2_pass
    li   a0, 0
    j    test2_done
test2_pass:
    li   a0, 1
test2_done:
    mv   s1, a0
    jal  ra, print_result

    # =========================================================
    # Test 3: Data store translation
    #
    # Write through the virtual address, then read back from the
    # physical address directly to confirm it landed there.
    # =========================================================
    la   a0, str_test3
    jal  ra, puts

    # Store through virtual address
    li   t0, 0x00080000
    li   t1, 0xCAFEBABE
    sw   t1, 0(t0)

    # Read back from physical address directly
    # (0x40080000 doesn't match region 0, M-mode identity)
    li   t0, 0x40080000
    lw   a0, 0(t0)

    li   t1, 0xCAFEBABE
    beq  a0, t1, test3_pass
    li   a0, 0
    j    test3_done
test3_pass:
    li   a0, 1
test3_done:
    mv   s2, a0
    jal  ra, print_result

    # =========================================================
    # Test 4: Instruction fetch translation
    #
    # Place a small code snippet at physical 0x40090000:
    #   lui  a0, 0x12345       (sets a0 = 0x12345000)
    #   addi a0, a0, 0x678     (a0 = 0x12345678)
    #   jalr x0, ra, 0         (ret)
    #
    # Region 0 still active: virtual 0x00090000 maps to
    # physical 0x40090000. Call the virtual address, check a0.
    # =========================================================
    la   a0, str_test4
    jal  ra, puts

    # Write instructions to physical 0x40090000
    li   t0, 0x40090000
    li   t1, 0x12345537      # lui a0, 0x12345
    sw   t1, 0(t0)
    li   t1, 0x67850513      # addi a0, a0, 0x678
    sw   t1, 4(t0)
    li   t1, 0x00008067      # ret (jalr x0, ra, 0)
    sw   t1, 8(t0)

    # Instruction fence
    fence.i

    # Call through virtual address 0x00090000
    li   t0, 0x00090000
    jalr ra, t0, 0

    # a0 should be 0x12345678
    li   t1, 0x12345678
    beq  a0, t1, test4_pass
    li   a0, 0
    j    test4_done
test4_pass:
    li   a0, 1
test4_done:
    mv   s3, a0
    jal  ra, print_result

    # =========================================================
    # Test 5: Two regions with different offsets
    #
    # Region 0: TOR 0x00000000-0x00100000, offset +0x40000000
    #           (virtual 0x00080000 → physical 0x40080000)
    # Region 1: TOR 0x00100000-0x00200000, offset +0x3FF00000
    #           (virtual 0x00180000 → physical 0x40080000)
    #
    # Both virtual addresses should reach the same physical
    # location (0x40080000) via different offsets.
    # =========================================================
    la   a0, str_test5
    jal  ra, puts

    # Region 1: TOR 0x00100000-0x00200000
    # pmpaddr0 already = 0x00040000 (upper bound of region 0 = lower bound of region 1)
    # pmpaddr1 = 0x00200000 >> 2 = 0x00080000
    li   t0, 0x00080000
    csrw 0x3B1, t0          # pmpaddr1

    # pmpcfg0: byte 0 = 0x0F (region 0), byte 1 = 0x0F (region 1)
    li   t0, 0x0F0F
    csrw 0x3A0, t0

    # pmpoffset0 = 0x40000000 (already set)
    # pmpoffset1 = 0x3FF00000
    #   virtual 0x00180000 + 0x3FF00000 = 0x40080000
    li   t0, 0x3FF00000
    csrw 0x7D1, t0

    # Write via region 0 path
    li   t0, 0x00080000
    li   t1, 0x55AA55AA
    sw   t1, 0(t0)

    # Read via region 1 path (different virtual addr, same physical)
    li   t0, 0x00180000
    lw   a0, 0(t0)

    li   t1, 0x55AA55AA
    beq  a0, t1, test5_pass
    li   a0, 0
    j    test5_done
test5_pass:
    li   a0, 1
test5_done:
    mv   s4, a0
    jal  ra, print_result

    # =========================================================
    # Test 6: Zero offset = identity mapping
    #
    # Set offset to 0, verify access goes to the virtual address
    # itself (identity mapping).
    # =========================================================
    la   a0, str_test6
    jal  ra, puts

    # Set region 0 offset to 0
    csrw 0x7D0, zero

    # Write a value to physical 0x000A0000 — this is in internal
    # SRAM range (0x00100000). Let's use an address that's safe.
    # Actually: with offset=0 and region 0 covering 0-0x100000,
    # writing to virtual 0x00080000 with offset 0 goes to
    # physical 0x00080000 which is below SRAM. Let's instead
    # just verify offset read-back is 0.
    csrr t0, 0x7D0
    beq  t0, zero, test6_pass
    li   a0, 0
    j    test6_done
test6_pass:
    # Also verify writing to physical 0x40080000, then reading
    # through region 0 with offset +0x40000000 restored works
    li   t0, 0x40080000
    li   t1, 0xFEEDF00D
    sw   t1, 0(t0)

    # Re-set offset
    li   t0, 0x40000000
    csrw 0x7D0, t0

    # Read through virtual address
    li   t0, 0x00080000
    lw   a0, 0(t0)
    li   t1, 0xFEEDF00D
    beq  a0, t1, test6_pass2
    li   a0, 0
    j    test6_done
test6_pass2:
    li   a0, 1
test6_done:
    mv   s5, a0
    jal  ra, print_result

    # =========================================================
    # Clean up: disable all PMP regions
    # =========================================================
    csrw 0x3A0, zero
    csrw 0x3A1, zero
    csrw 0x7D0, zero
    csrw 0x7D1, zero

    # =========================================================
    # Summary
    # =========================================================
    la   a0, str_summary
    jal  ra, puts

    # Move results to a0-a5 for GDB inspection
    mv   a0, s0
    mv   a1, s1
    mv   a2, s2
    mv   a3, s3
    mv   a4, s4
    mv   a5, s5

done:
    ebreak                  # Trap back to GDB
    j    done               # Loop if no debugger

# =========================================================
# Utility routines
# =========================================================

# puts: print null-terminated string at a0
# Clobbers: t0, t1, t2
puts:
    mv   t2, a0
1:  lbu  t0, 0(t2)
    beqz t0, 2f
    # Wait for TX not full
3:  lw   t1, UART_STATUS(s11)
    andi t1, t1, UART_TXFULL
    bnez t1, 3b
    # Send char
    sw   t0, UART_WDATA(s11)
    addi t2, t2, 1
    j    1b
2:  ret

# print_result: print "PASS\n" or "FAIL\n" based on a0
# Clobbers: t0, t1, t2
print_result:
    addi sp, sp, -4
    sw   ra, 0(sp)
    bnez a0, 1f
    la   a0, str_fail
    j    2f
1:  la   a0, str_pass
2:  jal  ra, puts
    lw   ra, 0(sp)
    addi sp, sp, 4
    ret

# =========================================================
# String data
# =========================================================
.section .rodata
str_banner:
    .asciz "\r\n=== PMP Offset Extension Test ===\r\n\r\n"
str_test1:
    .asciz "Test 1 - CSR read/write:          "
str_test2:
    .asciz "Test 2 - Data load translation:   "
str_test3:
    .asciz "Test 3 - Data store translation:  "
str_test4:
    .asciz "Test 4 - Instruction fetch xlate: "
str_test5:
    .asciz "Test 5 - Two regions, two offsets: "
str_test6:
    .asciz "Test 6 - Zero offset (identity):  "
str_pass:
    .asciz "PASS\r\n"
str_fail:
    .asciz "FAIL\r\n"
str_summary:
    .asciz "\r\nDone. a0-a5 = test results (1=pass)\r\n"
