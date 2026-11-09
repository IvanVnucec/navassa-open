
undefined4
FUN_01016c72(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_01016e54 + param_1 * 4);
  if (param_7 == 1) {
    iVar2 = 0x1016e68;
  }
  else {
    iVar2 = 0x1016e78;
  }
  uVar1 = *(undefined1 *)(iVar2 + param_2 * 8 + 4);
  if (param_8 == 0) {
    if (param_5 == 0) {
      iVar4 = iVar4 + 0x15;
    }
    else {
      iVar4 = iVar4 + 0x16;
    }
  }
  else {
    if (param_8 != 1) {
      return param_4;
    }
    if (param_5 == 0) {
      iVar4 = iVar4 + 0x1e;
    }
    else {
      iVar4 = iVar4 + 0x1f;
    }
  }
  if (param_6 == 0) {
    uVar3 = pin_update(iVar4,0x1f,uVar1,param_4);
    return uVar3;
  }
  uVar3 = FUN_0100b704(param_6,iVar4,uVar1,0x1f);
  return uVar3;
}

