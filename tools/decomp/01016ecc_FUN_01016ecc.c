
void FUN_01016ecc(int param_1,uint param_2)

{
  if (1 < param_1 || 3 < param_2) {
    return;
  }
  pin_update(*(int *)(&DAT_0101751c + param_1 * 4) + 0x162,3);
  return;
}

