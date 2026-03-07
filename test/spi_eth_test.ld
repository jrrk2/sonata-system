/* Linker script for standalone VexRiscv test loaded via JTAG into HyperRAM */
OUTPUT_ARCH(riscv)

MEMORY
{
    ram : ORIGIN = 0x40000000, LENGTH = 64K
}

_stack_start = ORIGIN(ram) + LENGTH(ram);

ENTRY(_start)

SECTIONS
{
    /DISCARD/ : {
        *(.note.gnu.build-id)
    }
    .text : {
        *(.text._start)
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
