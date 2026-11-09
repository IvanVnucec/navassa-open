
uint FUN_010028e0(uint param_1)

{
  if (-1 < (int)param_1) {
    return *(uint *)(DAT_0100292c + (param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1;
  }
  return 0;
}

