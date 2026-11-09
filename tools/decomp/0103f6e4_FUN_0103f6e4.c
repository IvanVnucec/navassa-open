
undefined4 FUN_0103f6e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 * 0x28;
  iVar3 = DAT_0103ff80 + param_1;
  iVar2 = DAT_0103ff68 + param_1;
  param_1 = DAT_01040264 + param_1;
  if (param_2 == 0) {
    FUN_0103f778();
    FUN_0100d7b8(iVar2 + 0xa0,0x28);
    FUN_0100d7b8(iVar2 + 0xf0,0x28);
    FUN_0100d7b8(iVar2 + 0x140,0x28);
  }
  else {
    if (param_2 == 1) {
      FUN_0103f778();
      FUN_0100d7b8(iVar2 + 0xa0,0x28);
      FUN_0100d7b8(iVar2 + 0xf0,0x28);
      param_1 = iVar2 + 0x140;
      goto LAB_0103f76c;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return param_4;
      }
      goto LAB_0103f76c;
    }
  }
  FUN_0100d7b8(iVar2,0x28);
  FUN_0100d7b8(param_1,0x28);
  param_1 = iVar3;
LAB_0103f76c:
  uVar1 = FUN_0100d7b8(param_1,0x28,param_4);
  return uVar1;
}

