// SPDX-License-Identifier: MIT
/*
 * Programmatic DTB generator for lowRISC Sonata FPGA board.
 * Uses libfdt sequential-write API to build a devicetree blob
 * matching the structure previously in sonata.dts.
 *
 * Usage: sonata_dtb_gen [output.dtb]
 *   If no argument, writes to stdout.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libfdt.h>
#include "sonata_hw.h"

#define DTB_MAX_SIZE  16384

#define CHK(expr) do { \
	int _err = (expr); \
	if (_err < 0) { \
		fprintf(stderr, "FDT error at %s:%d: %s\n", \
			__FILE__, __LINE__, fdt_strerror(_err)); \
		exit(1); \
	} \
} while (0)

/*
 * Phandle assignments (fixed values, referenced across nodes):
 *   1 = clk50          (clock-50000000)
 *   2 = cpu0_intc      (cpu@0/interrupt-controller)
 *   3 = cpu1_intc      (cpu@1/interrupt-controller)
 *   4 = plic           (interrupt-controller@f0c00000)
 *   5 = vreg_mmc       (vreg_mmc regulator)
 *   6 = cpu0           (cpu@0)
 *   7 = cpu1           (cpu@1)
 */
#define PH_CLK50      1
#define PH_CPU0_INTC  2
#define PH_CPU1_INTC  3
#define PH_PLIC       4
#define PH_VREG_MMC   5
#define PH_CPU0       6
#define PH_CPU1       7

static void add_cpu(void *fdt, int idx, uint32_t cpu_ph, uint32_t intc_ph)
{
	char name[16];
	snprintf(name, sizeof(name), "cpu@%d", idx);
	CHK(fdt_begin_node(fdt, name));

	CHK(fdt_property_string(fdt, "device_type", "cpu"));
	CHK(fdt_property_string(fdt, "compatible", "riscv"));
	CHK(fdt_property_string(fdt, "riscv,isa", "rv32ima_zicsr_zifencei"));
	CHK(fdt_property_string(fdt, "riscv,isa-base", "rv32i"));

	{
		const char ext[] = "a\0i\0m\0zicsr\0zifencei";
		CHK(fdt_property(fdt, "riscv,isa-extensions", ext, sizeof(ext)));
	}

	CHK(fdt_property_string(fdt, "mmu-type", "riscv,sv32"));
	CHK(fdt_property_u32(fdt, "reg", idx));
	CHK(fdt_property_u32(fdt, "clock-frequency", SONATA_CLK_HZ));
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_property_u32(fdt, "phandle", cpu_ph));

	CHK(fdt_property_u32(fdt, "d-cache-size", SONATA_DCACHE_SIZE));
	CHK(fdt_property_u32(fdt, "d-cache-sets", SONATA_DCACHE_SETS));
	CHK(fdt_property_u32(fdt, "d-cache-block-size", SONATA_DCACHE_BLOCK));
	CHK(fdt_property_u32(fdt, "i-cache-size", SONATA_ICACHE_SIZE));
	CHK(fdt_property_u32(fdt, "i-cache-sets", SONATA_ICACHE_SETS));
	CHK(fdt_property_u32(fdt, "i-cache-block-size", SONATA_ICACHE_BLOCK));

	CHK(fdt_property(fdt, "tlb-split", NULL, 0));
	CHK(fdt_property_u32(fdt, "d-tlb-size", SONATA_DTLB_SIZE));
	CHK(fdt_property_u32(fdt, "d-tlb-sets", SONATA_DTLB_SETS));
	CHK(fdt_property_u32(fdt, "i-tlb-size", SONATA_ITLB_SIZE));
	CHK(fdt_property_u32(fdt, "i-tlb-sets", SONATA_ITLB_SETS));

	/* interrupt-controller sub-node */
	CHK(fdt_begin_node(fdt, "interrupt-controller"));
	CHK(fdt_property_u32(fdt, "#address-cells", 0));
	CHK(fdt_property_u32(fdt, "#interrupt-cells", 1));
	CHK(fdt_property(fdt, "interrupt-controller", NULL, 0));
	CHK(fdt_property_string(fdt, "compatible", "riscv,cpu-intc"));
	CHK(fdt_property_u32(fdt, "phandle", intc_ph));
	CHK(fdt_end_node(fdt));

	CHK(fdt_end_node(fdt));
}

static void build_dtb(void *fdt, const char *bootargs)
{
	CHK(fdt_create(fdt, DTB_MAX_SIZE));
	CHK(fdt_finish_reservemap(fdt));

	/* / root */
	CHK(fdt_begin_node(fdt, ""));
	{
		const char compat[] = "litex,lowrisc_sonata\0litex,soc";
		CHK(fdt_property(fdt, "compatible", compat, sizeof(compat)));
	}
	CHK(fdt_property_string(fdt, "model", "lowrisc_sonata"));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 1));

	/* /chosen */
	CHK(fdt_begin_node(fdt, "chosen"));
	CHK(fdt_property_string(fdt, "bootargs", bootargs));
	CHK(fdt_end_node(fdt));

	/* /clock-50000000 */
	CHK(fdt_begin_node(fdt, "clock-50000000"));
	CHK(fdt_property_string(fdt, "compatible", "fixed-clock"));
	CHK(fdt_property_u32(fdt, "#clock-cells", 0));
	CHK(fdt_property_u32(fdt, "clock-frequency", SONATA_CLK_HZ));
	CHK(fdt_property_u32(fdt, "phandle", PH_CLK50));
	CHK(fdt_end_node(fdt));

	/* /cpus */
	CHK(fdt_begin_node(fdt, "cpus"));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 0));
	CHK(fdt_property_u32(fdt, "timebase-frequency", SONATA_CLK_HZ));

	add_cpu(fdt, 0, PH_CPU0, PH_CPU0_INTC);
	add_cpu(fdt, 1, PH_CPU1, PH_CPU1_INTC);

	/* /cpus/cpu-map */
	CHK(fdt_begin_node(fdt, "cpu-map"));
	CHK(fdt_begin_node(fdt, "cluster0"));
	CHK(fdt_begin_node(fdt, "core0"));
	CHK(fdt_property_u32(fdt, "cpu", PH_CPU0));
	CHK(fdt_end_node(fdt));
	CHK(fdt_begin_node(fdt, "core1"));
	CHK(fdt_property_u32(fdt, "cpu", PH_CPU1));
	CHK(fdt_end_node(fdt));
	CHK(fdt_end_node(fdt)); /* cluster0 */
	CHK(fdt_end_node(fdt)); /* cpu-map */

	CHK(fdt_end_node(fdt)); /* cpus */

	/* /memory@40000000 */
	CHK(fdt_begin_node(fdt, "memory@40000000"));
	CHK(fdt_property_string(fdt, "device_type", "memory"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_RAM_BASE),
				    cpu_to_fdt32(SONATA_RAM_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_end_node(fdt));

	/* /vreg_mmc */
	CHK(fdt_begin_node(fdt, "vreg_mmc"));
	CHK(fdt_property_string(fdt, "compatible", "regulator-fixed"));
	CHK(fdt_property_string(fdt, "regulator-name", "vreg_mmc"));
	CHK(fdt_property_u32(fdt, "regulator-min-microvolt", SONATA_VMMC_UV));
	CHK(fdt_property_u32(fdt, "regulator-max-microvolt", SONATA_VMMC_UV));
	CHK(fdt_property(fdt, "regulator-always-on", NULL, 0));
	CHK(fdt_property_u32(fdt, "phandle", PH_VREG_MMC));
	CHK(fdt_end_node(fdt));

	/* /soc */
	CHK(fdt_begin_node(fdt, "soc"));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 1));
	CHK(fdt_property_string(fdt, "compatible", "simple-bus"));
	CHK(fdt_property_u32(fdt, "interrupt-parent", PH_PLIC));
	CHK(fdt_property(fdt, "ranges", NULL, 0));

	/* soc_controller@f0000000 */
	CHK(fdt_begin_node(fdt, "soc_controller@f0000000"));
	CHK(fdt_property_string(fdt, "compatible", "litex,soc-controller"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_SOC_CTRL_BASE),
				    cpu_to_fdt32(SONATA_SOC_CTRL_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_end_node(fdt));

	/* clint@f0010000 */
	CHK(fdt_begin_node(fdt, "clint@f0010000"));
	CHK(fdt_property_string(fdt, "compatible", "riscv,clint0"));
	{
		uint32_t ie[8] = {
			cpu_to_fdt32(PH_CPU0_INTC), cpu_to_fdt32(3),
			cpu_to_fdt32(PH_CPU0_INTC), cpu_to_fdt32(7),
			cpu_to_fdt32(PH_CPU1_INTC), cpu_to_fdt32(3),
			cpu_to_fdt32(PH_CPU1_INTC), cpu_to_fdt32(7),
		};
		CHK(fdt_property(fdt, "interrupts-extended", ie, sizeof(ie)));
	}
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_CLINT_BASE),
				    cpu_to_fdt32(SONATA_CLINT_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property_string(fdt, "reg-names", "control"));
	CHK(fdt_end_node(fdt));

	/* interrupt-controller@f0c00000 (PLIC) */
	CHK(fdt_begin_node(fdt, "interrupt-controller@f0c00000"));
	{
		const char compat[] = "sifive,fu540-c000-plic\0sifive,plic-1.0.0";
		CHK(fdt_property(fdt, "compatible", compat, sizeof(compat)));
	}
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_PLIC_BASE),
				    cpu_to_fdt32(SONATA_PLIC_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property_u32(fdt, "#address-cells", 0));
	CHK(fdt_property_u32(fdt, "#interrupt-cells", 1));
	CHK(fdt_property(fdt, "interrupt-controller", NULL, 0));
	{
		uint32_t ie[8] = {
			cpu_to_fdt32(PH_CPU0_INTC), cpu_to_fdt32(11),
			cpu_to_fdt32(PH_CPU0_INTC), cpu_to_fdt32(9),
			cpu_to_fdt32(PH_CPU1_INTC), cpu_to_fdt32(11),
			cpu_to_fdt32(PH_CPU1_INTC), cpu_to_fdt32(9),
		};
		CHK(fdt_property(fdt, "interrupts-extended", ie, sizeof(ie)));
	}
	CHK(fdt_property_u32(fdt, "riscv,ndev", SONATA_PLIC_NDEV));
	CHK(fdt_property_u32(fdt, "phandle", PH_PLIC));
	CHK(fdt_end_node(fdt));

	/* serial@f0001000 */
	CHK(fdt_begin_node(fdt, "serial@f0001000"));
	CHK(fdt_property_string(fdt, "compatible", "litex,liteuart"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_UART_BASE),
				    cpu_to_fdt32(SONATA_UART_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property_u32(fdt, "interrupts", SONATA_UART_IRQ));
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_end_node(fdt));

	/* spiflash@f0004000 — LiteX SPI controller (read/write/erase) */
	CHK(fdt_begin_node(fdt, "spiflash@f0004000"));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 1));
	CHK(fdt_property_string(fdt, "compatible", "litex,spiflash"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_SPIFLASH_BASE),
				    cpu_to_fdt32(SONATA_SPIFLASH_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}

	/* flash@0 child (SPI NOR) */
	CHK(fdt_begin_node(fdt, "flash@0"));
	CHK(fdt_property_string(fdt, "compatible", "jedec,spi-nor"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(0),
				    cpu_to_fdt32(SONATA_FLASH_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_end_node(fdt)); /* flash@0 */
	CHK(fdt_end_node(fdt)); /* spiflash */

	/* flash@2000000 — memory-mapped SPI NOR (read-only via XIP) */
	CHK(fdt_begin_node(fdt, "flash@2000000"));
	CHK(fdt_property_string(fdt, "compatible", "mtd-rom"));
	CHK(fdt_property_u32(fdt, "bank-width", 1));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 1));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_FLASH_BASE),
				    cpu_to_fdt32(SONATA_FLASH_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property(fdt, "probe-type", "map_rom", 8));

	/* partitions */
	CHK(fdt_begin_node(fdt, "partitions"));
	CHK(fdt_property_string(fdt, "compatible", "fixed-partitions"));
	CHK(fdt_property_u32(fdt, "#address-cells", 1));
	CHK(fdt_property_u32(fdt, "#size-cells", 1));

	CHK(fdt_begin_node(fdt, "kernel_a@0"));
	CHK(fdt_property_string(fdt, "label", "kernel_a"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_FLASH_KERN_A_OFF),
				    cpu_to_fdt32(SONATA_FLASH_KERN_A_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_end_node(fdt));

	CHK(fdt_begin_node(fdt, "kernel_b@400000"));
	CHK(fdt_property_string(fdt, "label", "kernel_b"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_FLASH_KERN_B_OFF),
				    cpu_to_fdt32(SONATA_FLASH_KERN_B_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_end_node(fdt));

	CHK(fdt_begin_node(fdt, "rootfs@800000"));
	CHK(fdt_property_string(fdt, "label", "rootfs"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_FLASH_ROOTFS_OFF),
				    cpu_to_fdt32(SONATA_FLASH_ROOTFS_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_end_node(fdt));

	CHK(fdt_end_node(fdt)); /* partitions */
	CHK(fdt_end_node(fdt)); /* flash@2000000 */

	/* mmc@f0003000 */
	CHK(fdt_begin_node(fdt, "mmc@f0003000"));
	CHK(fdt_property_string(fdt, "compatible", "litex,mmc"));
	{
		uint32_t reg[10] = {
			cpu_to_fdt32(SONATA_MMC_BASE + SONATA_MMC_PHY_OFF),
			cpu_to_fdt32(SONATA_MMC_PHY_SIZE),
			cpu_to_fdt32(SONATA_MMC_BASE + SONATA_MMC_CORE_OFF),
			cpu_to_fdt32(SONATA_MMC_CORE_SIZE),
			cpu_to_fdt32(SONATA_MMC_BASE + SONATA_MMC_READER_OFF),
			cpu_to_fdt32(SONATA_MMC_READER_SIZE),
			cpu_to_fdt32(SONATA_MMC_BASE + SONATA_MMC_WRITER_OFF),
			cpu_to_fdt32(SONATA_MMC_WRITER_SIZE),
			cpu_to_fdt32(SONATA_MMC_BASE + SONATA_MMC_IRQ_OFF),
			cpu_to_fdt32(SONATA_MMC_IRQ_SIZE),
		};
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	{
		const char names[] = "phy\0core\0reader\0writer\0irq";
		CHK(fdt_property(fdt, "reg-names", names, sizeof(names)));
	}
	CHK(fdt_property_u32(fdt, "clocks", PH_CLK50));
	CHK(fdt_property_u32(fdt, "vmmc-supply", PH_VREG_MMC));
	CHK(fdt_property_u32(fdt, "bus-width", SONATA_MMC_BUS_WIDTH));
	CHK(fdt_property_u32(fdt, "interrupts", SONATA_MMC_IRQ));
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_end_node(fdt));

	/* gpio@f0002800 (LEDs, output) */
	CHK(fdt_begin_node(fdt, "gpio@f0002800"));
	CHK(fdt_property_string(fdt, "compatible", "litex,gpio"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_LED_BASE),
				    cpu_to_fdt32(SONATA_LED_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property(fdt, "gpio-controller", NULL, 0));
	CHK(fdt_property_u32(fdt, "#gpio-cells", 2));
	CHK(fdt_property_string(fdt, "litex,direction", "out"));
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_property_u32(fdt, "litex,ngpio", SONATA_LED_NGPIO));
	CHK(fdt_end_node(fdt));

	/* gpio@f0004800 (buttons, input) */
	CHK(fdt_begin_node(fdt, "gpio@f0004800"));
	CHK(fdt_property_string(fdt, "compatible", "litex,gpio"));
	{
		uint32_t reg[2] = { cpu_to_fdt32(SONATA_BTN_BASE),
				    cpu_to_fdt32(SONATA_BTN_SIZE) };
		CHK(fdt_property(fdt, "reg", reg, sizeof(reg)));
	}
	CHK(fdt_property(fdt, "gpio-controller", NULL, 0));
	CHK(fdt_property_u32(fdt, "#gpio-cells", 2));
	CHK(fdt_property_string(fdt, "litex,direction", "in"));
	CHK(fdt_property_u32(fdt, "interrupts", SONATA_BTN_IRQ));
	CHK(fdt_property_string(fdt, "status", "okay"));
	CHK(fdt_property_u32(fdt, "litex,ngpio", SONATA_BTN_NGPIO));
	CHK(fdt_end_node(fdt));

	CHK(fdt_end_node(fdt)); /* soc */

	/* /aliases */
	CHK(fdt_begin_node(fdt, "aliases"));
	CHK(fdt_property_string(fdt, "serial0", "/soc/serial@f0001000"));
	CHK(fdt_property_string(fdt, "spiflash", "/soc/spiflash@f0004000"));
	CHK(fdt_end_node(fdt));

	CHK(fdt_end_node(fdt)); /* / root */
	CHK(fdt_finish(fdt));
}

#define BOOTARGS_SD \
	"console=liteuart earlycon=liteuart,0xf0001000 " \
	"root=/dev/mmcblk0p2 rootwait loglevel=8 init=/bin/sh"

#define BOOTARGS_XIP \
	"console=liteuart earlycon=liteuart,0xf0001000 " \
	"root=/dev/mtdblock2 rootfstype=romfs ro init=/bin/sh loglevel=8"

int main(int argc, char **argv)
{
	void *fdt;
	FILE *fp;
	const char *bootargs = BOOTARGS_SD;
	const char *outfile = NULL;
	int i;

	for (i = 1; i < argc; i++) {
		if (strcmp(argv[i], "--xip") == 0)
			bootargs = BOOTARGS_XIP;
		else
			outfile = argv[i];
	}

	fdt = malloc(DTB_MAX_SIZE);
	if (!fdt) {
		perror("malloc");
		return 1;
	}

	build_dtb(fdt, bootargs);

	if (outfile) {
		fp = fopen(outfile, "wb");
		if (!fp) {
			perror(outfile);
			return 1;
		}
	} else {
		fp = stdout;
	}

	if (fwrite(fdt, fdt_totalsize(fdt), 1, fp) != 1) {
		perror("fwrite");
		return 1;
	}

	if (fp != stdout)
		fclose(fp);

	free(fdt);
	return 0;
}
