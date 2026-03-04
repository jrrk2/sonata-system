/* Minimal linker script for standalone tests on Sonata (Ibex) */
OUTPUT_ARCH(riscv)

MEMORY
{
    ram : ORIGIN = 0x00100000, LENGTH = 128K
}

_stack_start = ORIGIN(ram) + LENGTH(ram);

ENTRY(_reset)

SECTIONS
{
    /DISCARD/ : {
        *(.note.gnu.build-id)
    }
    .text : {
        _vectors_start = .;
        KEEP(*(.vectors))
        _vectors_end = .;
        *(.text .text.*)
    } > ram

    .rodata : ALIGN(4) {
        *(.rodata .rodata.*)
        *(.srodata .srodata.*)
    } > ram

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
