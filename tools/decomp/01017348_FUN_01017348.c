
void FUN_01017348(int param_1,uint param_2)

{
  pin_update(*(int *)(&DAT_0101751c + param_1 * 4) + 0xe3,0x80,(param_2 & 1) << 7);
  return;
}

