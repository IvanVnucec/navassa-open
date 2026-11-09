
undefined4 FUN_01006e78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  iVar3 = DAT_01007724;
  iVar2 = DAT_010071b0;
  puVar8 = (undefined1 *)(DAT_010071b0 + 0x21);
  if (param_1 == 0) {
    uVar5 = FUN_010076d0();
    uVar5 = FUN_010076d4(uVar5,0xc,0);
    iVar4 = DAT_010079cc;
    uVar5 = FUN_010076d4(uVar5,0xf0,((uint)*(byte *)(iVar3 + 6) << 0x1c) >> 0x18);
    uVar5 = FUN_01007042(uVar5,7,*(undefined1 *)(iVar3 + 10));
    uVar9 = FUN_01007036(uVar5,7,*(undefined1 *)(iVar3 + 8));
    uVar9 = FUN_0100703c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar3 + 9));
    FUN_01007030((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar3 + 7));
    FUN_01007b60(*(undefined1 *)(iVar2 + 0x20),2);
    FUN_01007b5c();
    pin_update(DAT_010079d8,0x20,0x20);
    pin_update(DAT_010079e0,0x20,0x20);
    uVar5 = FUN_01007b5c();
    FUN_01007b60(uVar5,2,2);
    uVar5 = DAT_010079e4;
    if (*(ushort *)(iVar2 + 0x10) == 1) {
      *(undefined1 *)(iVar4 + 1) = 1;
      uVar7 = 0;
    }
    else {
      *(char *)(iVar4 + 1) = (char)(*(ushort *)(iVar2 + 0x10) >> 1);
      uVar7 = *(ushort *)(iVar2 + 0x10) >> 9 & 1;
    }
    uVar5 = pin_update(uVar5,1,uVar7);
    uVar5 = FUN_010076d4(uVar5,1,0);
    uVar9 = FUN_0100704e(uVar5,8,8);
    FUN_01007048((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar2 + 0x22));
    uVar1 = *(undefined1 *)(iVar2 + 0x24);
    uVar5 = DAT_01007720;
    uVar6 = extraout_r1;
  }
  else {
    if (param_1 != 1) {
      return param_4;
    }
    uVar5 = FUN_010076d0();
    uVar5 = FUN_010076d4(uVar5,0xc,0);
    iVar4 = DAT_010079ec;
    uVar5 = FUN_010076d4(uVar5,0xf0,((uint)*(byte *)(iVar3 + 0x11) << 0x1c) >> 0x18);
    uVar5 = FUN_01007042(uVar5,7,*(undefined1 *)(iVar3 + 0x15));
    uVar9 = FUN_01007036(uVar5,7,*(undefined1 *)(iVar3 + 0x13));
    uVar9 = FUN_0100703c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar3 + 0x14));
    FUN_01007030((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar3 + 0x12));
    FUN_01007b60(*puVar8,2);
    FUN_01007b5c();
    pin_update(DAT_010079f8,0x20,0x20);
    pin_update(DAT_01007b40,0x20,0x20);
    uVar5 = FUN_01007b5c();
    FUN_01007b60(uVar5,2,2);
    uVar5 = DAT_01007b44;
    if (*(ushort *)(iVar2 + 0x12) == 1) {
      *(undefined1 *)(iVar4 + 1) = 1;
      uVar7 = 0;
    }
    else {
      *(char *)(iVar4 + 1) = (char)(*(ushort *)(iVar2 + 0x12) >> 1);
      uVar7 = *(ushort *)(iVar2 + 0x12) >> 9 & 1;
    }
    uVar5 = pin_update(uVar5,1,uVar7);
    uVar5 = FUN_010076d4(uVar5,1,0);
    uVar9 = FUN_0100704e(uVar5,8,8);
    FUN_01007048((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(iVar2 + 0x23));
    uVar1 = *(undefined1 *)(iVar2 + 0x25);
    uVar5 = DAT_0100735c;
    uVar6 = extraout_r1_00;
  }
  FUN_01007028(uVar5,uVar6,uVar1);
  uVar5 = pin_update();
  return uVar5;
}

