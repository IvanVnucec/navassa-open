; LZ77-style decompressor used by the scheduler handoff to expand the
; RAM payload in place (source 0x010444dc..0x01046326 -> dest 0x01047fe4+)
; Token format (to be fully pinned): literal byte-copy loop, back-reference
; copy loop (r1 = dest - count), nibble run-lengths with 0xF escape.
0x01002960: ldrh     r0, [r2]
0x01002962: pop      {r4, pc}
0x01002964: msr      basepri, r0
0x01002968: bx       lr
0x0100296a: push     {r4, r5, r6, r7}
0x0100296c: mov      r2, r0
0x0100296e: ldr      r0, [r2]
0x01002970: ldr      r5, [r2, #8]
0x01002972: adds     r3, r2, r0
0x01002974: ldr      r0, [r2, #4]
0x01002976: add.w    r4, r3, r0, lsr #1
0x0100297a: lsls     r0, r0, #0x1f
0x0100297c: bpl      #0x10029ba
0x0100297e: add      r5, sb
0x01002980: b        #0x10029ba
0x01002982: ldrb     r7, [r3], #1
0x01002986: strb     r7, [r5], #1
0x0100298a: subs     r1, r1, #1
0x0100298c: bne      #0x1002982
0x0100298e: cbz      r0, #0x10029ba
0x01002990: lsrs     r6, r6, #2
0x01002992: ldrb     r1, [r3], #1
0x01002996: and      r6, r6, #3
0x0100299a: cmp      r6, #3
0x0100299c: it       eq
0x0100299e: ldrbeq   r6, [r3], #1
0x010029a2: add.w    r1, r1, r6, lsl #8
0x010029a6: rsbs     r1, r1, #0
0x010029a8: adds     r0, r0, #2
0x010029aa: add      r1, r5
0x010029ac: beq      #0x10029ba
0x010029ae: ldrb     r6, [r1], #1
0x010029b2: strb     r6, [r5], #1
0x010029b6: subs     r0, r0, #1
0x010029b8: bne      #0x10029ae
0x010029ba: cmp      r3, r4
0x010029bc: beq      #0x10029dc
0x010029be: ldrb     r6, [r3], #1
0x010029c2: ands     r1, r6, #3
0x010029c6: itt      eq
0x010029c8: ldrbeq   r1, [r3], #1
0x010029cc: addeq    r1, r1, #3
0x010029ce: lsrs     r0, r6, #4
0x010029d0: cmp      r0, #0xf
0x010029d2: bne      #0x100298a
0x010029d4: ldrb     r0, [r3], #1
0x010029d8: adds     r0, #0xf
0x010029da: b        #0x100298a
0x010029dc: pop      {r4, r5, r6, r7}
0x010029de: add.w    r0, r2, #0xc
0x010029e2: bx       lr
0x010029e4: uxtb     r2, r2
0x010029e6: subs     r2, #0x20
0x010029e8: ittt     hs
0x010029ea: lslhs.w  r1, r0, r2
0x010029ee: movhs    r0, #0
