
void FUN_010241e8(int param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  byte unaff_r6;
  int iVar5;
  
  iVar4 = *(int *)(DAT_01024324 + param_1 * 4);
  iVar5 = iVar4 + 0xbd;
  pin_update(iVar5,0x80);
  uVar3 = (uint)*(byte *)(param_2 + 1);
  sVar1 = *param_2;
  if (uVar3 < 0xf) {
    unaff_r6 = *(byte *)(uVar3 + 0x1024330);
  }
  uVar3 = (uint)(uVar3 < 0xf);
  uVar2 = (undefined1)(sVar1 >> 3);
  if (param_4 == 0) {
    *(undefined1 *)(iVar4 + 0xc0) = uVar2;
    if (uVar3 != 0) {
      pin_update(iVar4 + 0xc2,7,unaff_r6);
    }
    if (param_3 != 0) {
      pin_update(iVar4 + 0xc2,0x70,unaff_r6 & 0xf0);
    }
    iVar4 = iVar4 + 0xbf;
    FUN_010242a8();
    FUN_010242a8();
  }
  else {
    *(undefined1 *)(iVar4 + 0xbe) = uVar2;
    if (uVar3 != 0) {
      uVar3 = FUN_010242aa(uVar3,(undefined1 *)(iVar4 + 0xbe),unaff_r6);
    }
    if (param_3 != 0) {
      FUN_010242ac(uVar3,0x70,unaff_r6 & 0xf0);
    }
    FUN_0102429e();
    FUN_0102429e();
    iVar4 = iVar5;
  }
  pin_update(iVar4,7,(char)sVar1);
  pin_update(iVar5,0x80,0x80,param_4);
  return;
}

