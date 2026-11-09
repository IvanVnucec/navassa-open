
uint FUN_0100a768(int param_1,uint param_2)

{
  if (0x347 < param_2) {
    param_2 = 0x347;
  }
  return *(uint *)(*(int *)(DAT_0100a794 + param_1 * 4) + param_2 * 4) >> 0xc & 0x3f;
}

