
void FUN_010076da(int param_1,uint param_2)

{
  pin_update(*(int *)(DAT_01007f6c + param_1 * 4) + 0x10,2,(param_2 & 0x7f) << 1);
  return;
}

