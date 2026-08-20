SECTIONS
{
    . = 0x01000000;
    .text : { *(.text) *(.text.*) }
}