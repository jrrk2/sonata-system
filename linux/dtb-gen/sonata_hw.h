/* SPDX-License-Identifier: MIT */
/*
 * Hardware constants for lowRISC Sonata FPGA board
 * (Xilinx Artix-7 XC7A50T, LiteX + VexRiscv SMP)
 */

#ifndef SONATA_HW_H
#define SONATA_HW_H

/* Clock */
#define SONATA_CLK_HZ         50000000

/* CPUs */
#define SONATA_NR_CPUS        2

/* RAM */
#define SONATA_RAM_BASE       0x40000000
#define SONATA_RAM_SIZE       0x00780000  /* 7.5 MB (top 512K reserved for OpenSBI) */

/* CLINT (Core Local Interruptor) */
#define SONATA_CLINT_BASE     0xf0010000
#define SONATA_CLINT_SIZE     0x00010000

/* PLIC (Platform-Level Interrupt Controller) */
#define SONATA_PLIC_BASE      0xf0c00000
#define SONATA_PLIC_SIZE      0x00400000
#define SONATA_PLIC_NDEV      32

/* UART */
#define SONATA_UART_BASE      0xf0001000
#define SONATA_UART_SIZE      0x00000100
#define SONATA_UART_IRQ       1

/* SoC controller */
#define SONATA_SOC_CTRL_BASE  0xf0000000
#define SONATA_SOC_CTRL_SIZE  0x0000000c

/* SPI Flash controller (LiteX spiflash CSR for read/write/erase) */
#define SONATA_SPIFLASH_BASE  0xf0003800
#define SONATA_SPIFLASH_SIZE  0x00000018

/* SPI Flash — memory-mapped XIP region */
#define SONATA_FLASH_BASE     0x02000000
#define SONATA_FLASH_SIZE     0x02000000  /* 32 MB */

/* Flash partitions */
#define SONATA_FLASH_KERN_A_OFF   0x000000
#define SONATA_FLASH_KERN_A_SIZE  0x400000  /* 4 MB */
#define SONATA_FLASH_KERN_B_OFF   0x400000
#define SONATA_FLASH_KERN_B_SIZE  0x400000  /* 4 MB */
#define SONATA_FLASH_ROOTFS_OFF   0x800000
#define SONATA_FLASH_ROOTFS_SIZE  0x1800000 /* 24 MB */

/* MMC (LiteX SD/MMC) */
#define SONATA_MMC_BASE       0xf0003000
#define SONATA_MMC_PHY_OFF    0x00
#define SONATA_MMC_PHY_SIZE   0x1c
#define SONATA_MMC_CORE_OFF   0x1c
#define SONATA_MMC_CORE_SIZE  0x2c
#define SONATA_MMC_READER_OFF 0x48
#define SONATA_MMC_READER_SIZE 0x1c
#define SONATA_MMC_WRITER_OFF 0x64
#define SONATA_MMC_WRITER_SIZE 0x1c
#define SONATA_MMC_IRQ_OFF    0x80
#define SONATA_MMC_IRQ_SIZE   0x100
#define SONATA_MMC_IRQ        3
#define SONATA_MMC_BUS_WIDTH  4

/* GPIO — LEDs (output) */
#define SONATA_LED_BASE       0xf0002800
#define SONATA_LED_SIZE       0x04
#define SONATA_LED_NGPIO      4

/* GPIO — buttons/switches (input) */
#define SONATA_BTN_BASE       0xf0004000
#define SONATA_BTN_SIZE       0x04
#define SONATA_BTN_IRQ        4
#define SONATA_BTN_NGPIO      4

/* Cache geometry (16K/4-way, matches FPGA build) */
#define SONATA_DCACHE_SIZE    16384
#define SONATA_DCACHE_SETS    64
#define SONATA_DCACHE_BLOCK   64
#define SONATA_ICACHE_SIZE    16384
#define SONATA_ICACHE_SETS    64
#define SONATA_ICACHE_BLOCK   64

/* TLB */
#define SONATA_DTLB_SIZE      4
#define SONATA_DTLB_SETS      4
#define SONATA_ITLB_SIZE      4
#define SONATA_ITLB_SETS      4

/* VMC regulator (for MMC) */
#define SONATA_VMMC_UV        3300000

#endif /* SONATA_HW_H */
