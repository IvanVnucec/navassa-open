
undefined8 FUN_010324be(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar2 = DAT_01032744;
  bVar1 = *(byte *)(DAT_010327c0 + param_1);
  uVar8 = (uint)bVar1;
  uVar5 = CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)(DAT_01032754 + param_1));
  iVar6 = *(int *)(DAT_01032744 + uVar8 * 4 + 0x2c);
  uVar10 = FUN_01006dfc(0,0,uVar8,param_4,uVar5,param_3,param_4);
  iVar4 = DAT_01032770;
  iVar7 = param_1 * 0x14;
  iVar9 = DAT_01032770 + iVar7;
  FUN_0103246c(iVar7,uVar5 & 0xff,(short)(ushort)bVar1 * 0x28 + DAT_010327c4);
  if (iVar6 == 0) {
    FUN_010140ac(0xc,1,iVar9);
    uVar3 = 0xd;
LAB_01032532:
    FUN_010140ac(uVar3,1,iVar9);
  }
  else if (iVar6 == 1) {
    FUN_010140ac(0xe,1,iVar9);
    uVar3 = 0xf;
    goto LAB_01032532;
  }
  if (param_1 == 0) {
    uVar3 = 3;
LAB_0103254e:
    FUN_010140ac(uVar3,1,iVar4);
  }
  else if (param_1 == 1) {
    iVar4 = iVar4 + 0x14;
    uVar3 = 6;
    goto LAB_0103254e;
  }
  FUN_0100b594(iVar9);
  iVar4 = DAT_01032774;
  iVar7 = DAT_01032774 + iVar7;
  FUN_0103246e(200,uVar5 & 0xff,DAT_010327c8 + uVar8 * 200,0x32);
  if (iVar6 == 0) {
    uVar3 = 0xd;
LAB_01032582:
    FUN_01014190(uVar3,iVar7);
  }
  else if (iVar6 == 1) {
    uVar3 = 0xf;
    goto LAB_01032582;
  }
  if (param_1 == 0) {
    uVar3 = 3;
  }
  else {
    if (param_1 != 1) goto LAB_0103259e;
    iVar4 = iVar4 + 0x14;
    uVar3 = 6;
  }
  FUN_01014190(uVar3,iVar4);
LAB_0103259e:
  FUN_01008f0c(iVar6,*(undefined1 *)(iVar2 + iVar6 + 0xbc),iVar7);
  iVar4 = FUN_010070c2(iVar6,0,iVar7);
  FUN_01009152(iVar6,0,iVar7);
  if (iVar4 == 0) {
    uVar5 = (uint)*(byte *)(iVar2 + iVar6 + 0xbc);
    iVar4 = FUN_01032600(param_1,iVar6,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar5,
                         *(char *)(DAT_010327cc + 0x780) == '\x02');
  }
  return CONCAT44(uVar5,iVar4);
}

