
void FUN_01024d04(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    param_2 = param_2 << 0x18;
    uVar1 = 0xf000000;
  }
  else {
    if (param_3 != 1) {
      return;
    }
    param_2 = param_2 << 0x14;
    uVar1 = 0xf00000;
  }
  FUN_0102598c(*(undefined4 *)(DAT_01025444 + param_1 * 4),uVar1,param_2);
  return;
}

