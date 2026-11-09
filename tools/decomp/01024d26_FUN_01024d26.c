
uint FUN_01024d26(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = **(uint **)(DAT_01025444 + param_1 * 4) >> 0x18;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    uVar1 = **(uint **)(DAT_01025444 + param_1 * 4) >> 0x14;
  }
  return uVar1 & 0xf;
}

