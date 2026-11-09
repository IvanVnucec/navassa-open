
int FUN_0102efd0(int param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = CONCAT11(*(byte *)(*(int *)(&DAT_0102f294 + param_1 * 4) +
                            (param_2 * 0x11 + 0x94U & 0xffff)) >> 6,
                   *(undefined1 *)
                    (*(int *)(&DAT_0102f294 + param_1 * 4) + (param_2 * 0x11 + 0x93U & 0xffff)));
  if (0x1ff < uVar1) {
    uVar1 = uVar1 - 0x400;
  }
  return (int)(short)uVar1;
}

