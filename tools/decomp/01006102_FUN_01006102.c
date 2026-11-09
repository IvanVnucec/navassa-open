
void FUN_01006102(uint param_1,int param_2,int *param_3,int *param_4)

{
  *param_3 = 0x300 << ((param_1 & 0x7f) << 1);
  *param_4 = param_2 << (param_1 * 2 + 8 & 0xff);
  return;
}

