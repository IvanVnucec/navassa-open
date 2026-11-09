
void FUN_0100bbfe(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(DAT_0100bcd8 + param_1 * 4);
  if (param_2 == 0) {
    uVar1 = 0x10;
  }
  else {
    if (param_2 < 0) {
      param_2 = -param_2;
    }
    uVar2 = 0;
    iVar3 = DAT_0100bcdc;
    do {
      iVar5 = *(int *)(DAT_0100bce0 + uVar2 * 4) - param_2;
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      if (iVar5 < iVar3) {
        param_4 = uVar2;
        iVar3 = iVar5;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 8);
    if ((param_4 != 7) && (*(int *)(DAT_0100bce0 + param_4 * 4) < param_2)) {
      param_4 = param_4 + 1;
    }
    uVar1 = FUN_0100bce8(param_2,0xe,(param_4 & 0x7f) << 1);
    FUN_0100bce8(uVar1,0x20,0x20);
    uVar1 = 0;
  }
  pin_update(iVar4 + 0x4a,0x10,uVar1);
  return;
}

