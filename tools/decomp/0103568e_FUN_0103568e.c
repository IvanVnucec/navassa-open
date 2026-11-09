
void FUN_0103568e(byte param_1,uint param_2)

{
  pin_update(*(int *)(DAT_010358f4 + (uint)param_1 * 4) + 0xac,0x20,(param_2 & 7) << 5);
  return;
}

