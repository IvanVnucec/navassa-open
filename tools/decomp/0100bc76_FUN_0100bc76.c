
void FUN_0100bc76(int param_1,uint param_2)

{
  pin_update(*(int *)(DAT_0100bcd4 + param_1 * 4) + 0x95,0x20,(param_2 & 7) << 5);
  return;
}

