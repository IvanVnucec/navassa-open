
void FUN_01034e04(int param_1,uint param_2)

{
  pin_update(*(int *)(DAT_01035254 + param_1 * 4) + 0xbc,0x80,(param_2 & 1) << 7);
  return;
}

