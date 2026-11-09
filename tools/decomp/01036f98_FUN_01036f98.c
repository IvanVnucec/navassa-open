
int FUN_01036f98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_2c;
  undefined1 auStack_28 [28];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_010331ee(param_2,auStack_28);
  if ((param_1 < 8) && (param_1 != 0)) {
    iVar1 = (&iStack_2c)[param_1];
    if (iVar1 == 0) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

