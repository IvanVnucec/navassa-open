
undefined4 FUN_0103e244(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 * 0x24;
  iVar3 = DAT_0103ec8c + param_1;
  iVar2 = DAT_0103eb84 + param_1;
  param_1 = DAT_0103ec90 + param_1;
  if (param_2 == 0) {
    FUN_0103e2d8();
    FUN_0100d7b8(iVar2 + 0x90,0x24);
    FUN_0100d7b8(iVar2 + 0xd8,0x24);
    FUN_0100d7b8(iVar2 + 0x120,0x24);
  }
  else {
    if (param_2 == 1) {
      FUN_0103e2d8();
      FUN_0100d7b8(iVar2 + 0x90,0x24);
      FUN_0100d7b8(iVar2 + 0xd8,0x24);
      param_1 = iVar2 + 0x120;
      goto LAB_0103e2cc;
    }
    if (param_2 != 2) {
      if (param_2 != 3) {
        return param_4;
      }
      goto LAB_0103e2cc;
    }
  }
  FUN_0100d7b8(iVar2,0x24);
  FUN_0100d7b8(param_1,0x24);
  param_1 = iVar3;
LAB_0103e2cc:
  uVar1 = FUN_0100d7b8(param_1,0x24,param_4);
  return uVar1;
}

