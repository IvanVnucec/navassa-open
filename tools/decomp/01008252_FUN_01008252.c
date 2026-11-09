
void FUN_01008252(int param_1,int param_2)

{
  if (5 < param_1) {
    return;
  }
  pin_update(*(undefined4 *)(DAT_010084e0 + param_1 * 4),3 << (&DAT_010085a4)[param_1] & 0xff,
             param_2 << (&DAT_010085a4)[param_1] & 0xff);
  return;
}

