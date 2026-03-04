/* Linker script for PMP offset test
 * Loads into upper HyperRAM, well away from PMP test regions (0x00000000-0x00200000)
 */
ENTRY(_start)

MEMORY {
    RAM (rwx) : ORIGIN = 0x40400000, LENGTH = 64K
}

SECTIONS {
    .text : { *(.text*) } > RAM
    .rodata : { *(.rodata*) } > RAM
    .data : { *(.data*) } > RAM
    .bss : { *(.bss*) } > RAM
}
