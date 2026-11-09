
void FUN_0102267a(int param_1,uint param_2,int param_3)

{
  if (param_2 < 3) {
    FUN_0102598c(*(undefined4 *)(DAT_01022724 + param_1 * 4),0x8000,param_3 << 0xf);
    return;
  }
  if (param_2 != 3) {
    return;
  }
  pin_update(*(int *)(DAT_01022728 + param_1 * 4) + 0xa4,1);
  return;
}

