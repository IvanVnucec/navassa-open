
undefined4 FUN_0101947a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_010195bc;
  uVar2 = DAT_010195b4;
  iVar1 = DAT_01019588;
  uVar5 = 0;
  if (param_1 < 2) {
    if (param_1 == 0) {
      pin_update(DAT_01019584,0x80);
      pin_update(DAT_010195c0,1,1);
      *(undefined1 *)(iVar1 + 5) = 2;
      FUN_01019544(2,3,0);
      pin_update(DAT_010195c4,1,1);
      FUN_010181e4(uVar2,0x198,0x9f,7);
      uVar4 = 0x19f;
    }
    else {
      FUN_0101954a(param_1,*(undefined4 *)(DAT_010195b8 + param_1 * 4),0);
      pin_update(DAT_010195c8,1,1);
      *(undefined1 *)(iVar3 + 1) = 2;
      pin_update(DAT_010195cc,3,0);
      pin_update(DAT_010195d0,1,1);
      FUN_010181e4(uVar2,0x199,0x9f,7);
      uVar4 = 0x1a0;
    }
    FUN_010181e4(uVar2,uVar4);
  }
  else {
    uVar5 = 0xe703;
  }
  return uVar5;
}

