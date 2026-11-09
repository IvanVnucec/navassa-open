
int FUN_0100b558(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == 1) {
    FUN_0100b506(param_1);
    uVar3 = 8;
    uVar2 = 1;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    FUN_0100b506(param_1);
    iVar1 = FUN_0100b36e(param_1,1,8);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar3 = 2;
    uVar2 = 2;
  }
  iVar1 = FUN_0100b36e(param_1,uVar2,uVar3);
  return iVar1;
}

