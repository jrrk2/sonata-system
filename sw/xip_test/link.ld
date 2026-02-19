MEMORY
{
    SRAM (rwx) : ORIGIN = 0x00100000, LENGTH = 128K
}

SECTIONS
{
    .text : {
        *(.text*)
    } > SRAM

    .data : {
        *(.data*)
        *(.rodata*)
    } > SRAM

    .bss : {
        *(.bss*)
    } > SRAM
}

ENTRY(_start)
