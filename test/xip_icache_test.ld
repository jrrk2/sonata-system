/* Linker script for XIP icache+data concurrency test
 * .text/.rodata in flash at 0x20300000 (executed via XIP)
 * .data/.bss in SRAM */
OUTPUT_ARCH(riscv)

MEMORY
{
    flash : ORIGIN = 0x20300000, LENGTH = 1M
    ram   : ORIGIN = 0x00100000, LENGTH = 128K
}

_stack_start = ORIGIN(ram) + LENGTH(ram) - 256;

ENTRY(_start)

SECTIONS
{
    /DISCARD/ : {
        *(.note.gnu.build-id)
    }

    .text : {
        *(.text .text.*)
    } > flash

    .rodata : ALIGN(4) {
        *(.rodata .rodata.*)
        *(.srodata .srodata.*)
    } > flash

    .data : ALIGN(4) {
        *(.data .data.*)
        *(.sdata .sdata.*)
    } > ram

    .bss : ALIGN(4) {
        _bss_start = .;
        *(.bss .bss.*)
        *(.sbss .sbss.*)
        *(COMMON)
        _bss_end = .;
    } > ram
}
