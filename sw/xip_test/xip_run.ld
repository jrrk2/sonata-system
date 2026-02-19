MEMORY
{
    FLASH (rx)  : ORIGIN = 0x20000000, LENGTH = 32M
    SRAM  (rwx) : ORIGIN = 0x00100000, LENGTH = 128K
}

SECTIONS
{
    .text : {
        *(.text*)
    } > FLASH

    .rodata : {
        *(.rodata*)
    } > FLASH

    .data : {
        *(.data*)
    } > SRAM AT > FLASH

    .bss : {
        *(.bss*)
    } > SRAM
}

ENTRY(_start)
