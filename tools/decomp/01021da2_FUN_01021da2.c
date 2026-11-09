
undefined4 FUN_01021da2(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 1 << (param_3 & 0xff);
  if (param_4 != 0) {
    param_1[9] = param_3;
    param_1[10] = param_4;
    return 1;
  }
  if ((int)((0xc00000U >> (param_3 & 0xff)) << 0x1f) < 0) {
    param_1[3] = param_1[3] | uVar1;
    *param_1 = uVar1 | *param_1;
    return 0;
  }
  param_1[param_2 + 1] = uVar1 | param_1[param_2 + 1];
  param_1[param_2 + 4] = param_1[param_2 + 4] | uVar1;
  return 0;
}

