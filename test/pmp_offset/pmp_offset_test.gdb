# GDB script to run PMP offset extension test
#
# Usage:
#   riscv32-unknown-elf-gdb -x pmp_offset_test.gdb
#
# Prerequisites:
#   - J-Link GDB server running at 192.168.1.169:2331
#   - New FPGA bitstream with PMP offset extension loaded
#   - Board halted (no OS running)

set pagination off
set confirm off

# Connect to J-Link
target remote 192.168.1.169:2331

# Halt the core
monitor halt
monitor reset

# Load the test ELF
file pmp_offset_test.elf
load

# Set breakpoint at end of test
break done

# Run
echo \n*** Starting PMP Offset Extension Test ***\n
echo *** Output also appears on serial console ***\n\n
continue

# When we hit the breakpoint, show results
echo \n*** Test Results ***\n
echo Test 1 (CSR read/write):
print/d $a0
echo Test 2 (Data load translation):
print/d $a1
echo Test 3 (Data store translation):
print/d $a2
echo Test 4 (Instruction fetch xlate):
print/d $a3
echo Test 5 (Two regions, two offsets):
print/d $a4
echo Test 6 (Zero offset identity):
print/d $a5
echo \n
