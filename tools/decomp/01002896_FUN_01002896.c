
void FUN_01002896(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_01002924 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  }
  return;
}

