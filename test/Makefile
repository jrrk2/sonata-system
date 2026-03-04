# Build standalone tests for Verilator simulation
CROSS  ?= riscv64-linux-gnu-
CC      = $(CROSS)gcc
OBJCOPY = $(CROSS)objcopy
OBJDUMP = $(CROSS)objdump
SIZE    = $(CROSS)size

ARCH_FLAGS = -march=rv32imc_zicsr -mabi=ilp32
CFLAGS  = $(ARCH_FLAGS) -O2 -ffreestanding -nostdlib -nostdinc -Wall \
          -fno-builtin -fno-common -ffunction-sections -fdata-sections -g \
          -fno-pic -fno-pie \
          -isystem $(shell $(CC) $(ARCH_FLAGS) -print-file-name=include)
LDFLAGS = -T test.ld -nostartfiles -nodefaultlibs -static \
          -Wl,--gc-sections $(ARCH_FLAGS)

SIM     = ../build/lowrisc_sonata_system_0/sim-verilator/Vtop_verilator

# ---- Targets ----

all: xip_smoke_test.elf

xip_smoke_test.elf: crt0.o xip_smoke_test.o test.ld
	$(CC) $(LDFLAGS) -o $@ crt0.o xip_smoke_test.o
	$(SIZE) $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.S
	$(CC) $(ARCH_FLAGS) -c $< -o $@

# ---- XIP Icache + Data Concurrent Test ----

# SRAM stub: inits XIP controller, jumps to 0x20300000
xip_icache_stub.elf: crt0.o xip_icache_stub.o test.ld
	$(CC) $(LDFLAGS) -o $@ crt0.o xip_icache_stub.o
	$(SIZE) $@

# Flash test: linked at 0x20300000, executed from flash via icache
XIP_ICACHE_LDFLAGS = -T xip_icache_test.ld -nostartfiles -nodefaultlibs -static \
                     -Wl,--gc-sections $(ARCH_FLAGS)

xip_icache_test.elf: xip_icache_crt0.o xip_icache_test.o xip_icache_test.ld
	$(CC) $(XIP_ICACHE_LDFLAGS) -o $@ xip_icache_crt0.o xip_icache_test.o
	$(SIZE) $@

xip_icache_test.bin: xip_icache_test.elf
	$(OBJCOPY) -O binary -j .text -j .rodata $< $@

# Generate vmem at flash offset 0x300000 for $readmemh
# Format: @OFFSET followed by one byte per line in hex
xip_icache_test.vmem: xip_icache_test.bin
	@echo "@300000" > $@
	xxd -p -c 1 $< >> $@
	@echo "Generated $@ ($$(wc -l < $@) lines)"

# ---- Run in Verilator ----

run: xip_smoke_test.elf
	@echo "Running XIP smoke test in Verilator..."
	$(SIM) -E $< +UARTDPI_LOG_uart0=- +disable_cheri

run-icache: xip_icache_stub.elf xip_icache_test.vmem
	@echo "Running XIP icache+data concurrent test in Verilator..."
	$(SIM) -E xip_icache_stub.elf +flash_kernel=xip_icache_test.vmem \
		+UARTDPI_LOG_uart0=- +disable_cheri

clean:
	rm -f *.o *.elf *.bin *.vmem *.dis uart_sim.log sim_stdout.log

.PHONY: all run run-icache clean
