
int FUN_01016d20(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(DAT_01016e54 + param_1 * 4);
  uVar2 = (uint)(byte)(&DAT_01016e64)[param_2 * 8];
  if (param_6 == 0) {
    if (param_4 == 0) {
      iVar3 = iVar1 + 0x19;
      iVar1 = iVar1 + 0x12;
    }
    else {
      iVar3 = iVar1 + 0x1a;
      iVar1 = iVar1 + 0x2d;
    }
  }
  else {
    if (param_6 != 1) {
      return param_4;
    }
    if (param_4 == 0) {
      iVar3 = iVar1 + 0x22;
      iVar1 = iVar1 + 0x1b;
    }
    else {
      iVar3 = iVar1 + 0x23;
      iVar1 = iVar1 + 0x2e;
      uVar2 = param_3;
    }
  }
  if (param_5 != 0) {
    FUN_0100b704(param_5,iVar1,uVar2,0x3f);
    iVar1 = FUN_0100b704(param_5,iVar3,param_3,1);
    return iVar1;
  }
  pin_update(iVar1,0x3f);
  iVar1 = pin_update(iVar3,1,param_3,param_4);
  return iVar1;
}

