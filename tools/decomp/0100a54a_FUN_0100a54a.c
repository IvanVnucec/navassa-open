
uint FUN_0100a54a(int param_1,uint param_2)

{
  uint uVar1;
  
  if (0x347 < param_2) {
    param_2 = 0x347;
  }
  uVar1 = *(uint *)(*(int *)(DAT_0100a794 + param_1 * 4) + param_2 * 4);
  return DAT_0100a79c & (uVar1 & 0x3ffff) << 8 | param_2 << 0x14 | (uVar1 << 0xe) >> 0x1a;
}

