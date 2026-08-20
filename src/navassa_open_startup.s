.syntax unified
.thumb
.global _start

_start:
    .word 0x20001000
    .word reset

reset:
    bl main
    b .

.thumb_func
.global main
