
void FUN_0100b83e(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    iVar1 = *(int *)(&DAT_0100b86c + param_2 * 4);
    uVar2 = 2;
  }
  else if (param_1 == 2) {
    iVar1 = *(int *)(&DAT_0100b86c + param_2 * 4);
    uVar2 = 4;
  }
  else {
    if (1 < param_1) {
      return;
    }
    iVar1 = *(int *)(&DAT_0100b86c + param_2 * 4);
    uVar2 = 1;
  }
  FUN_010027d8(iVar1 + 2,uVar2);
  return;
}

