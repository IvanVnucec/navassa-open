
undefined4 FUN_0100ba30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_0100bcd4 + param_1 * 4);
  iVar3 = iVar2 + 0xf9;
  pin_update(iVar3,2,0);
  iVar2 = iVar2 + 0x1a9;
  pin_update(iVar2,2,0);
  if (param_3 != 0) {
    iVar2 = iVar3;
  }
  if (param_2 == 0) {
    return param_4;
  }
  uVar1 = pin_update(iVar2,2,2,param_4);
  return uVar1;
}

