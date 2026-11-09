
void FUN_010354fa(byte param_1,uint param_2)

{
  pin_update(*(int *)(DAT_010358f0 + (uint)param_1 * 4) + 0x22,0xe0,(param_2 & 7) << 5);
  return;
}

