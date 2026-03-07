OUTPUT_ARCH(riscv)
MEMORY
{
    rom : ORIGIN = 0x00000000, LENGTH = 64K
}
ENTRY(_start)
SECTIONS
{
    /DISCARD/ : { *(.note.gnu.build-id) }
    .text : { *(.text._start) *(.text .text.*) } > rom
    .rodata : ALIGN(4) { *(.rodata .rodata.*) } > rom
}
