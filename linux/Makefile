# Linux XIP Build System for Sonata FPGA
#
# Builds all binaries needed for XIP boot:
#   flashxip.bin  — combined flash image (kernel + OpenSBI + rootfs)
#   xipjump.bin   — 12-byte trampoline for BIOS → OpenSBI
#   rv32.dtb      — device tree blob (for OpenSBI; kernel uses built-in)
#   boot.json     — BIOS load map
#
# Prerequisites:
#   - LiteX ecosystem built: cd $(LITEX_BASE)/linux-on-litex-vexriscv &&
#     python3 make.py --board=sonata --build
#   - This populates buildroot (cross toolchain, kernel source, opensbi source)
#
# Usage:
#   make                    # build everything
#   make flash.bin          # A/B flash image (for dd to mtdblock3)
#   make flashxip.bin       # legacy single-opensbi flash image
#   make sdcard             # copy boot files to SDCARD_DIR
#   make clean              # remove build artifacts
#   make kernel-clean       # force kernel rebuild
#
# First-time setup (extracts and patches kernel + opensbi trees):
#   make setup

SHELL := /bin/bash

# ── Paths ──────────────────────────────────────────────────────────────

LITEX_BASE   := /home/jonathan/litex-sonata
BUILDROOT    := $(LITEX_BASE)/buildroot/output
CROSS        := $(BUILDROOT)/host/bin/riscv32-buildroot-linux-musl-

LINUX_SRC    := /home/jonathan/linux-xip
OPENSBI_SRC  := /home/jonathan/opensbi-xip
REPO_ROOT    := $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

CONFIG_DIR   := $(REPO_ROOT)/config
DTS_DIR      := $(REPO_ROOT)/dts
SDCARD_DIR   := $(REPO_ROOT)/sdcard
STUB_DIR     := $(REPO_ROOT)/stub

OUT          := $(REPO_ROOT)/out
SDCARD_OUT   ?= /tmp/sonata-sdcard

# ── Buildroot source trees (for setup target) ─────────────────────────

BR_LINUX_SRC  := $(BUILDROOT)/build/linux-6.9
BR_OPENSBI_SRC:= $(BUILDROOT)/build/opensbi-1.3.1
BR_PATCHES    := $(LITEX_BASE)/linux-on-litex-vexriscv/buildroot/patches

# ── Kernel config ─────────────────────────────────────────────────────

KERNEL_TINYCONFIG := tinyconfig
KERNEL_XIP_CONFIG := $(CONFIG_DIR)/xip-additions.config

# ── OpenSBI ───────────────────────────────────────────────────────────

OPENSBI_PLATFORM := litex/vexriscv
OPENSBI_FW_JUMP  := $(OPENSBI_SRC)/build/platform/$(OPENSBI_PLATFORM)/firmware/fw_jump.bin

# ── Flash layout ──────────────────────────────────────────────────────

KERNEL_OFFSET  := 0x000000
OPENSBI_OFFSET := 0x780000
ROOTFS_OFFSET  := 0x800000
FLASH_AB_SIZE  := 8388608

# ── Outputs ───────────────────────────────────────────────────────────

XIPIMAGE     := $(LINUX_SRC)/arch/riscv/boot/xipImage
OPENSBI_BIN  := $(OUT)/opensbi-xip.bin
# rootfs.romfs: use buildroot output if available, else local copy
ROOTFS_BR    := $(BUILDROOT)/images/rootfs.romfs
ROOTFS_LOCAL := $(OUT)/rootfs.romfs
ROOTFS       := $(shell if [ -f $(ROOTFS_BR) ]; then echo $(ROOTFS_BR); \
                 elif [ -f $(ROOTFS_LOCAL) ]; then echo $(ROOTFS_LOCAL); \
                 else echo $(ROOTFS_BR); fi)
DTB          := $(OUT)/rv32.dtb
XIPJUMP      := $(OUT)/xipjump.bin
FLASHXIP     := $(OUT)/flashxip.bin
FLASH_AB     := $(OUT)/flash.bin
BOOT_JSON    := $(OUT)/boot.json

.PHONY: all clean kernel-clean opensbi-clean sdcard setup help

all: $(FLASHXIP) $(DTB) $(XIPJUMP) $(BOOT_JSON)

help:
	@echo "Targets:"
	@echo "  all          Build flashxip.bin + SD card boot files (default)"
	@echo "  flash.bin    Build A/B flash image (kernel in slot A + rootfs)"
	@echo "  flashxip.bin Build flash image (kernel + opensbi + rootfs)"
	@echo "  sdcard       Copy boot files to SDCARD_OUT ($(SDCARD_OUT))"
	@echo "  setup        First-time: extract and patch kernel + opensbi trees"
	@echo "  kernel-clean Force kernel rebuild"
	@echo "  opensbi-clean Force opensbi rebuild"
	@echo "  clean        Remove build artifacts"

# ── Directory creation ────────────────────────────────────────────────

$(OUT):
	mkdir -p $(OUT)

# ── Kernel ────────────────────────────────────────────────────────────

$(XIPIMAGE): $(KERNEL_XIP_CONFIG) $(DTS_DIR)/sonata.dts | $(OUT)
	@echo "=== Building xipImage ==="
	@# Update built-in DTB
	dtc -I dts -O dtb -o /tmp/sonata-builtin.dtb $(DTS_DIR)/sonata.dts 2>/dev/null
	base64 /tmp/sonata-builtin.dtb > $(LINUX_SRC)/arch/riscv/boot/dts/litex/sonata.dtb.b64
	rm -f /tmp/sonata-builtin.dtb
	@# Configure
	cd $(LINUX_SRC) && \
		$(MAKE) ARCH=riscv CROSS_COMPILE=$(CROSS) $(KERNEL_TINYCONFIG) && \
		scripts/kconfig/merge_config.sh -m .config $(KERNEL_XIP_CONFIG) && \
		scripts/config --set-val CONFIG_MISC_FILESYSTEMS y && \
		scripts/config --set-val CONFIG_MTD_ROM y && \
		scripts/config --enable CONFIG_BUILTIN_DTB && \
		scripts/config --set-str CONFIG_BUILTIN_DTB_SOURCE "litex/sonata" && \
		$(MAKE) ARCH=riscv CROSS_COMPILE=$(CROSS) olddefconfig
	@# Verify critical options
	@grep -q 'CONFIG_XIP_KERNEL=y' $(LINUX_SRC)/.config || \
		{ echo "ERROR: XIP_KERNEL not set after olddefconfig!"; exit 1; }
	@grep -q 'CONFIG_BUILTIN_DTB=y' $(LINUX_SRC)/.config || \
		{ echo "ERROR: BUILTIN_DTB not set after olddefconfig!"; exit 1; }
	@# Build
	cd $(LINUX_SRC) && \
		$(MAKE) ARCH=riscv CROSS_COMPILE=$(CROSS) -j$$(nproc) xipImage
	@echo "=== xipImage ready: $@ ==="

# ── OpenSBI ───────────────────────────────────────────────────────────

$(OPENSBI_FW_JUMP):
	@echo "=== Building OpenSBI fw_jump ==="
	cd $(OPENSBI_SRC) && \
		$(MAKE) CROSS_COMPILE=$(CROSS) PLATFORM=$(OPENSBI_PLATFORM) \
			PLATFORM_RISCV_XLEN=32 -j$$(nproc)
	@echo "=== OpenSBI ready: $@ ==="

$(OPENSBI_BIN): $(OPENSBI_FW_JUMP) | $(OUT)
	cp $(OPENSBI_FW_JUMP) $@

# ── Device Tree ───────────────────────────────────────────────────────

$(DTB): $(DTS_DIR)/sonata.dts | $(OUT)
	dtc -I dts -O dtb -o $@ $< 2>/dev/null

# ── Trampoline (lui a1,0x40770; lui t0,0x02780; jr t0) ───────────────

$(XIPJUMP): | $(OUT)
	printf '\xb7\x05\x77\x40\xb7\x02\x78\x02\x67\x80\x02\x00' > $@

# ── Boot JSON ─────────────────────────────────────────────────────────

$(BOOT_JSON): | $(OUT)
	@printf '{\n    "rv32.dtb":    "0x40770000",\n    "xipjump.bin": "0x40000000"\n}\n' > $@

# ── Flash images ──────────────────────────────────────────────────────

$(FLASHXIP): $(XIPIMAGE) $(OPENSBI_BIN) $(ROOTFS) | $(OUT)
	@echo "=== Assembling flashxip.bin ==="
	cp $(XIPIMAGE) $@
	truncate -s $$(($(OPENSBI_OFFSET))) $@
	cat $(OPENSBI_BIN) >> $@
	truncate -s $$(($(ROOTFS_OFFSET))) $@
	cat $(ROOTFS) >> $@
	@echo "--- Verify ---"
	@hexdump -C $@ | head -1
	@hexdump -C $@ -s $(OPENSBI_OFFSET) -n 8
	@hexdump -C $@ -s $(ROOTFS_OFFSET) -n 8
	@ls -la $@
	@echo "=== flashxip.bin ready ==="

$(FLASH_AB): $(XIPIMAGE) $(ROOTFS) | $(OUT)
	@echo "=== Assembling flash.bin (A/B layout) ==="
	cp $(XIPIMAGE) $@
	truncate -s $(FLASH_AB_SIZE) $@
	cat $(ROOTFS) >> $@
	@echo "--- Verify ---"
	@hexdump -C $@ | head -1
	@hexdump -C $@ -s $(ROOTFS_OFFSET) -n 8
	@ls -la $@

flash.bin: $(FLASH_AB)
flashxip.bin: $(FLASHXIP)

# ── SD card population ────────────────────────────────────────────────

sdcard: $(FLASHXIP) $(DTB) $(XIPJUMP) $(BOOT_JSON)
	mkdir -p $(SDCARD_OUT)
	cp $(FLASHXIP)  $(SDCARD_OUT)/flashxip.bin
	cp $(DTB)       $(SDCARD_OUT)/rv32.dtb
	cp $(XIPJUMP)   $(SDCARD_OUT)/xipjump.bin
	cp $(BOOT_JSON) $(SDCARD_OUT)/boot.json
	@echo "=== SD card files ready in $(SDCARD_OUT) ==="
	@ls -la $(SDCARD_OUT)/boot.json $(SDCARD_OUT)/rv32.dtb \
		$(SDCARD_OUT)/xipjump.bin $(SDCARD_OUT)/flashxip.bin

# ── First-time setup ─────────────────────────────────────────────────
#
# Extracts kernel and OpenSBI from buildroot, applies patches, and
# applies the XIP SMP fix. Only needed once.

setup:
	@echo "=== Setting up kernel tree ==="
	@test -d $(BR_LINUX_SRC) || { echo "ERROR: Run buildroot first"; exit 1; }
	@if [ ! -d $(LINUX_SRC) ]; then \
		echo "Copying kernel tree..."; \
		cp -a $(BR_LINUX_SRC) $(LINUX_SRC); \
	else \
		echo "$(LINUX_SRC) already exists, skipping copy"; \
	fi
	@echo "=== Setting up OpenSBI tree ==="
	@if [ ! -d $(OPENSBI_SRC) ]; then \
		echo "Copying OpenSBI tree..."; \
		cp -a $(BR_OPENSBI_SRC) $(OPENSBI_SRC); \
	else \
		echo "$(OPENSBI_SRC) already exists, skipping copy"; \
	fi
	@echo "=== Setup complete ==="
	@echo "Trees at: $(LINUX_SRC) $(OPENSBI_SRC)"

# ── Clean ─────────────────────────────────────────────────────────────

clean:
	rm -rf $(OUT)

kernel-clean:
	cd $(LINUX_SRC) && $(MAKE) ARCH=riscv CROSS_COMPILE=$(CROSS) clean

opensbi-clean:
	cd $(OPENSBI_SRC) && $(MAKE) CROSS_COMPILE=$(CROSS) PLATFORM=$(OPENSBI_PLATFORM) clean
