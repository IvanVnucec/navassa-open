
void FUN_0101cd24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0101d5a4 + param_2 * 4);
  if (param_1 == 1) {
    uVar2 = 2;
    uVar1 = 2;
  }
  else {
    if (param_1 == 2) {
      uVar2 = 4;
    }
    else {
      FUN_0101cd60(param_1,2,0);
      uVar2 = 0;
    }
    uVar1 = 4;
  }
  pin_update(iVar3 + 0x52,uVar1,uVar2);
  return;
}

