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

# ---- Standalone Ethernet test for LiteX VexRiscv (HyperRAM boot) ----

VEXRISCV_CC     = riscv32-buildroot-linux-musl-gcc
VEXRISCV_OBJCOPY = riscv32-buildroot-linux-musl-objcopy
VEXRISCV_SIZE   = riscv32-buildroot-linux-musl-size
VEXRISCV_CFLAGS = -march=rv32ima -mabi=ilp32 -O2 -ffreestanding -nostdlib -nostdinc \
                  -Wall -fno-builtin -fno-common -ffunction-sections -fdata-sections \
                  -fno-pic -fno-pie -fno-stack-protector -g \
                  -isystem $(shell $(VEXRISCV_CC) -march=rv32ima -mabi=ilp32 -print-file-name=include)
VEXRISCV_LDFLAGS = -T spi_eth_test.ld -nostartfiles -nodefaultlibs -static \
                   -Wl,--gc-sections -march=rv32ima -mabi=ilp32

eth_minimal_litex.elf: vexriscv_crt0.o eth_minimal_litex.o spi_eth_test.ld
	$(VEXRISCV_CC) $(VEXRISCV_LDFLAGS) -o $@ vexriscv_crt0.o eth_minimal_litex.o
	$(VEXRISCV_SIZE) $@

eth_minimal_litex.bin: eth_minimal_litex.elf
	$(VEXRISCV_OBJCOPY) -O binary $< $@
	@ls -la $@

eth_minimal_litex.o: eth_minimal_litex.c
	$(VEXRISCV_CC) $(VEXRISCV_CFLAGS) -c $< -o $@

vexriscv_crt0.o: vexriscv_crt0.S
	$(VEXRISCV_CC) -march=rv32ima_zicsr -mabi=ilp32 -c $< -o $@

# ---- SPI Ethernet (spi_wb + KSZ8851) Focused Testbench ----

SPI_ETH_DIR     = $(CURDIR)
SONATA_DIR      = /home/jonathan/sonata-system
LITEX_BOARDS    = /home/jonathan/sonata-linux/litex-boards/litex_boards/platforms/verilog

SPI_ETH_VERILOG = \
  $(SPI_ETH_DIR)/spi_eth_tb_top.sv \
  $(SONATA_DIR)/rtl/ip/spi/rtl/spi_core.sv \
  $(SONATA_DIR)/rtl/ip/spi/rtl/spi_buf_ram.sv \
  $(LITEX_BOARDS)/spi_wb.sv \
  $(SONATA_DIR)/dv/models/ethernet/ksz8851snl_mac_model.v \
  $(SONATA_DIR)/dv/models/ethernet/axis_gmii_rx.v \
  $(SONATA_DIR)/dv/models/ethernet/axis_gmii_tx.v \
  $(SONATA_DIR)/dv/models/ethernet/eth_lfsr.v

spi_eth_sim: spi_eth_tb_top.sv spi_eth_tb.cpp
	verilator --cc --exe --trace \
	  -I$(SONATA_DIR)/dv/models/ethernet \
	  -I$(SONATA_DIR)/rtl/ip/spi/rtl \
	  -I$(LITEX_BOARDS) \
	  -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE \
	  -Wno-TIMESCALEMOD -Wno-INITIALDLY -Wno-BLKSEQ \
	  -Wno-MULTIDRIVEN -Wno-UNOPTFLAT -Wno-LATCH \
	  -Wno-SELRANGE -Wno-WIDTHCONCAT -Wno-UNUSEDSIGNAL \
	  -Wno-CMPCONST -Wno-UNSIGNED -Wno-ENUMVALUE \
	  --top-module spi_eth_tb_top \
	  $(SPI_ETH_VERILOG) \
	  $(SPI_ETH_DIR)/spi_eth_tb.cpp \
	  -CFLAGS "-std=c++17" \
	  -o spi_eth_sim
	$(MAKE) -C obj_dir -f Vspi_eth_tb_top.mk

run-spi-eth: spi_eth_sim
	@echo "Running SPI Ethernet testbench..."
	./obj_dir/spi_eth_sim

clean:
	rm -f *.o *.elf *.bin *.vmem *.dis uart_sim.log sim_stdout.log
	rm -rf obj_dir spi_eth_tb.vcd

.PHONY: all run run-icache spi_eth_sim run-spi-eth clean
