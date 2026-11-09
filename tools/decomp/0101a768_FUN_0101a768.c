
undefined4 FUN_0101a768(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar2 = *(int *)(DAT_0101a908 + param_1 * 4);
    iVar3 = iVar2 + 0x50;
    pin_update(iVar3,1,1);
    pin_update(iVar3,1,0);
    pin_update(iVar2 + 0x51,1,0);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

