
void FUN_010028ca(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_0100292c + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}

