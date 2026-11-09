
void FUN_0100b074(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  iVar1 = DAT_0100b224;
  FUN_0100b1d4(param_1,2,(param_1 & 0x7f) << 1);
  uVar2 = FUN_0100b1d0();
  uVar2 = FUN_0100b1d4(uVar2,1,0);
  uVar2 = FUN_0100b1d4(uVar2,8,0);
  FUN_0100b1d4(uVar2,2,2);
  FUN_0100b1d0();
  *(undefined1 *)(iVar1 + 1) = 0xa0;
  FUN_0100b1d4(0xa0,3,10);
  pin_update(iVar1,0x3c,8);
  uVar4 = param_2 / DAT_0100b230;
  if (param_2 != DAT_0100b230 * uVar4) {
    uVar4 = uVar4 + 1;
  }
  uVar3 = uVar4 & 0xffff;
  if (0x3f < uVar3) {
    uVar4 = 0x3f;
  }
  uVar5 = (undefined1)uVar4;
  if ((0x3f >= uVar3) && (uVar3 < 2)) {
    uVar5 = 2;
  }
  pin_update(DAT_0100b234,0x3f,uVar5);
  pin_update(DAT_0100b238,1,1);
  return;
}

