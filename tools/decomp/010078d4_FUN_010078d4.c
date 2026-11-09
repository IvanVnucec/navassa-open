
void FUN_010078d4(int param_1,uint param_2)

{
  pin_update(*(int *)(DAT_01007f70 + param_1 * 4) + 0x55,0xc,(param_2 & 0x3f) << 2);
  return;
}

