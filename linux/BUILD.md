# Building Linux for Sonata (XIP from SPI NOR Flash)

This documents the complete build process for the XIP Linux system on
the Sonata FPGA board with VexRiscv soft CPU.

## Quick Build (Makefile)

After first-time setup, all binaries can be built with:

```bash
cd linux/
make            # builds flashxip.bin + SD card boot files in out/
make sdcard     # copies boot files to /tmp/sonata-sdcard/
```

See `make help` for all targets.

## Boot Flow

```
BIOS → boot.json → xipjump.bin (sets a1=DTB, jumps to flash)
    → OpenSBI @ 0x02780000 (XIP from flash, .data/.bss in HyperRAM)
    → Kernel @ 0x02000000 (XIP from flash, uses built-in DTB)
    → rootfs.romfs @ flash offset 0x800000
```

The kernel uses CONFIG_BUILTIN_DTB=y (required for SMP to work on hardware).
The DTB passed via OpenSBI a1 is used by OpenSBI itself but ignored by the kernel.

## Architecture Overview

```
SPI NOR Flash (32MB at 0x02000000)
├── 0x000000: Kernel Slot A (4MB) — active kernel (XIP)
├── 0x400000: Kernel Slot B (4MB) — update kernel (XIP)
├── 0x7FFFF0: Boot flags (16 bytes) — A/B selection
└── 0x800000: rootfs.romfs (~450KB) — mounted read-only

HyperRAM (8MB at 0x40000000)
└── Full 8MB available to kernel (no firmware reservation)

SRAM (6KB at 0x10000000)
└── M-mode trap handler (~300 bytes) — invisible to Linux

SD Card (FAT32 partition)
├── sonata.bit — FPGA bitstream
├── boot.json — load map for BIOS
├── stub.bin — M-mode stub (replaces OpenSBI, ~1.5KB)
└── rv32.dtb — device tree blob
```

### A/B Boot Selection

The stub reads a flag byte at flash offset 0x7FFFF0 (CPU address 0x027FFFF0):
- `0x00` or `0xFF` (erased): boot Slot A (default)
- `0x42` (`'B'`): boot Slot B
- Any other value: boot Slot A

This allows the running kernel to write a new kernel to the inactive slot,
update the flag byte, and reboot to test it. If the new kernel fails, the
watchdog (or manual reset) boots back to the previous slot.

MTD partition layout (as seen by Linux):
- `/dev/mtdblock0` — kernel_a (4MB, read-only)
- `/dev/mtdblock1` — kernel_b (4MB, read-only)
- `/dev/mtdblock2` — rootfs (24MB, mounted as romfs)


The M-mode stub (stub.bin) replaces OpenSBI (260KB → 1.5KB), freeing
512KB of HyperRAM. The stub's trap handler lives in SRAM at 0x10000000
which is outside the kernel's memory map, so zero HyperRAM is reserved.

## Prerequisites

### Buildroot Toolchain

The kernel is built using the RISC-V 32-bit toolchain from the
linux-on-litex-vexriscv buildroot:

```bash
cd /home/jonathan/litex-sonata/linux-on-litex-vexriscv
# First-time setup only:
./make.py --board=sonata --build
```

This creates the cross toolchain at:
```
/home/jonathan/litex-sonata/buildroot/output/host/bin/riscv32-buildroot-linux-musl-*
```

Kernel source is at:
```
/home/jonathan/litex-sonata/buildroot/output/build/linux-6.9/
```

### Device Tree Compiler

```bash
sudo apt install device-tree-compiler
```

## Step 1: Build the Kernel (xipImage)

The kernel is built from tinyconfig with minimal additions for XIP boot.

```bash
LINUX=/home/jonathan/litex-sonata/buildroot/output/build/linux-6.9
CROSS=/home/jonathan/litex-sonata/buildroot/output/host/bin/riscv32-buildroot-linux-musl-

cd "$LINUX"

# Start from tinyconfig
make ARCH=riscv CROSS_COMPILE="$CROSS" tinyconfig

# Merge XIP additions
scripts/kconfig/merge_config.sh -m .config \
    /home/jonathan/sonata-system/linux/config/xip-additions.config

# Fix dependencies that merge_config can miss
scripts/config --set-val CONFIG_MISC_FILESYSTEMS y
scripts/config --set-val CONFIG_MTD_ROM y

# Resolve dependencies
make ARCH=riscv CROSS_COMPILE="$CROSS" olddefconfig

# VERIFY critical options survived:
grep -E '(XIP_KERNEL|PHYS_RAM_BASE|NONPORTABLE|SPARSEMEM|MMC=|ROMFS)' .config
# Expected:
#   CONFIG_XIP_KERNEL=y
#   CONFIG_PHYS_RAM_BASE=0x40000000
#   CONFIG_NONPORTABLE=y
#   CONFIG_SPARSEMEM_MANUAL=y
#   CONFIG_MMC=y
#   CONFIG_ROMFS_FS=y

# Build
make ARCH=riscv CROSS_COMPILE="$CROSS" -j$(nproc) xipImage

# Result: arch/riscv/boot/xipImage (~2.8MB)
cp arch/riscv/boot/xipImage /tmp/sonata-sdcard/xipImage
```

**WARNING**: `olddefconfig` is known to silently drop XIP_KERNEL if
NONPORTABLE or SPARSEMEM_MANUAL are missing. Always verify after running it.

## Step 2: Build the Root Filesystem (rootfs.romfs)

```bash
BUILDROOT=/home/jonathan/litex-sonata/buildroot/output

cd /home/jonathan/litex-sonata/linux-on-litex-vexriscv
./make.py --board=sonata --build

# Or build just the rootfs:
cd "$BUILDROOT"
make rootfs-romfs

# Result: images/rootfs.romfs (~450KB)
cp "$BUILDROOT/images/rootfs.romfs" /tmp/sonata-sdcard/rootfs.romfs
```

## Step 3: Create Combined Flash Image

The A/B layout places the kernel in Slot A (offset 0) and rootfs at
offset 0x800000. Slot B is initially empty (0xFF).

```bash
cd /tmp/sonata-sdcard
cp xipImage flash.bin
truncate -s 8388608 flash.bin    # pad to exactly 0x800000 (8MB, covers both slots)
cat rootfs.romfs >> flash.bin

# Verify:
hexdump -C flash.bin | head -1          # should start with 6f 00 80 0f (RISC-V jump)
hexdump -C flash.bin -s 0x800000 -n 8   # should show -rom1fs- header
ls -la flash.bin                         # ~8.5MB
```

For the legacy single-slot layout (rootfs at 0x300000):

```bash
cp xipImage flash.bin
truncate -s 3145728 flash.bin    # pad to exactly 0x300000 (3MB)
cat rootfs.romfs >> flash.bin
```

## Step 4: Build the M-mode Stub

```bash
CC=/home/jonathan/litex-sonata/buildroot/output/host/bin/riscv32-buildroot-linux-musl-

${CC}as -march=rv32ima -o /tmp/sonata-sdcard/stub.o \
    /home/jonathan/sonata-system/linux/stub/stub.S

${CC}ld -T /home/jonathan/sonata-system/linux/stub/stub.ld \
    -o /tmp/sonata-sdcard/stub.elf /tmp/sonata-sdcard/stub.o

${CC}objcopy -O binary /tmp/sonata-sdcard/stub.elf /tmp/sonata-sdcard/stub.bin

ls -la /tmp/sonata-sdcard/stub.bin    # ~1.5KB
```

## Step 5: Build Device Tree Blobs

### Final DTB (for normal boot with stub)

```bash
dtc -I dts -O dtb -o /tmp/sonata-sdcard/rv32.dtb \
    /home/jonathan/sonata-system/linux/dts/sonata.dts
```

### Transitional DTB (for flashing, with OpenSBI)

```bash
dtc -I dts -O dtb -o /tmp/sonata-sdcard/rv32-transitional.dtb \
    /home/jonathan/sonata-system/linux/dts/sonata-transitional.dts
```

## Step 6: Flash the SPI NOR

Flashing requires a transitional boot environment because the final
kernel uses a read-only MTD driver (`mtd-rom`). The transitional kernel
boots from SD card with OpenSBI and uses the `litex,spiflash` driver
which supports writes.

### Prepare SD card for transitional boot

```
sonata.bit                  FPGA bitstream
boot.json                   copy of linux/sdcard/boot-transitional.json (renamed)
Image                       Transitional kernel with built-in initramfs
opensbi.bin                 OpenSBI firmware
rv32.dtb                    copy of rv32-transitional.dtb (renamed)
flash.bin                   Combined flash image from Step 3
```

`Image` and `opensbi.bin` come from the buildroot build.

### Boot and flash

Power on with FPGA USB. At the `#` prompt:

```sh
mount -t proc proc /proc
mount -t vfat /dev/mmcblk0p1 /mnt
```

The transitional DTS creates these MTD partitions:
- mtdblock0 = kernel_a (4MB)
- mtdblock1 = kernel_b (4MB)
- mtdblock2 = rootfs (24MB)
- mtdblock3 = flash (full 32MB)

To write the entire combined image:

```sh
mknod /dev/mtdblock3 b 31 3
dd if=/mnt/flash.bin of=/dev/mtdblock3 bs=4096
```

Or write individual partitions:

```sh
mknod /dev/mtdblock0 b 31 0
mknod /dev/mtdblock2 b 31 2
dd if=/mnt/xipImage of=/dev/mtdblock0 bs=4096
dd if=/mnt/rootfs.romfs of=/dev/mtdblock2 bs=4096
```

Verify:

```sh
hexdump -C /dev/mtdblock0 -s 0 -n 16         # kernel_a header
hexdump -C /dev/mtdblock2 -s 0 -n 16         # romfs header (-rom1fs-)
```

Power off.

### Prepare SD card for normal boot

```
sonata.bit                  FPGA bitstream (keep)
boot.json                   copy of linux/sdcard/boot.json
stub.bin                    M-mode stub from Step 4
rv32.dtb                    Final DTB from Step 5
```

Remove: `Image`, `opensbi.bin`, `flash.bin`

### SD Card Partition Layout

```
Partition 1: FAT32 — boot files (sonata.bit, boot.json, stub.bin, rv32.dtb)
Partition 2: Linux swap (optional, recommended for 8MB RAM)
```

## Verification

On successful boot you should see:

```
STUB:A
F0:6f 00 80 0f ...
C1:XXXXXXXX
C2:XXXXXXXX
[    0.000000] Linux version 6.9.0 ...
[    0.000000] SBI specification v0.2 detected
...
[    X.XXXXXX] mmc0: new SD card ...
[    X.XXXXXX] mmcblk0: ... p1 p2
...
Adding XXXXXXK swap on /dev/mmcblk0p2.
#
```

Key checks:
- `free` shows ~6300K total RAM (full 8MB minus kernel)
- `cat /proc/mounts` shows romfs on /dev/mtdblock2 mounted at /
- `cat /proc/swaps` shows mmcblk0p2
- `ls /dev/mmcblk0*` shows p1 and p2
