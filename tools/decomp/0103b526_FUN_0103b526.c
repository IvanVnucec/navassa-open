
void FUN_0103b526(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_0103b5f8 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}

