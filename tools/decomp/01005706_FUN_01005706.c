
undefined4 FUN_01005706(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1 * 0x2a0 + DAT_01005e50;
  if (param_2 == 0) {
    FUN_0100d7b8(iVar1,0x2a0);
  }
  else {
    if (param_2 == 1) goto LAB_01005756;
    if (param_2 != 2) {
      iVar1 = iVar1 + 0xa80;
      if (param_2 != 3) {
        return param_4;
      }
      goto LAB_01005756;
    }
  }
  FUN_0100d7b8(iVar1 + 0x540,0x2a0);
  FUN_0100d7b8(iVar1 + 0xa80,0x2a0);
  iVar1 = iVar1 + 0xfc0;
LAB_01005756:
  uVar2 = FUN_0100d7b8(iVar1,0x2a0,param_4);
  return uVar2;
}

