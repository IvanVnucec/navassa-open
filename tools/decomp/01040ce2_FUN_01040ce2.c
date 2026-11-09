
int FUN_01040ce2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  
  iVar6 = DAT_010411d0;
  iVar1 = DAT_01040f58;
  uVar5 = (uint)*(byte *)(DAT_01041258 + param_1);
  uVar13 = (uint)*(byte *)(DAT_010411bc + param_1);
  iVar8 = *(int *)(DAT_01040f58 + uVar5 * 4 + 0x34);
  uVar12 = FUN_01006dfc(0,5,uVar5);
  uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
  iVar4 = (short)param_1 * 0x14;
  iVar9 = iVar6 + iVar4;
  FUN_0100b698(iVar9,uVar13 & 0xff,DAT_0104125c + uVar5 * 0x28,10);
  if (iVar8 == 0) {
    if (*(char *)(iVar1 + 2) == '\0') {
      FUN_010140ac(0xc,1,iVar9);
    }
    uVar2 = 0xd;
LAB_01040d74:
    FUN_010140ac(uVar2,1,iVar9);
  }
  else if (iVar8 == 1) {
    if (*(char *)(iVar1 + 3) == '\0') {
      FUN_010140ac(0xe,1,iVar9);
    }
    uVar2 = 0xf;
    goto LAB_01040d74;
  }
  if (param_1 == 2) {
    iVar6 = iVar6 + 0x28;
    uVar2 = 4;
LAB_01040d92:
    FUN_010140ac(uVar2,1,iVar6);
  }
  else if (param_1 == 3) {
    iVar6 = iVar6 + 0x3c;
    uVar2 = 7;
    goto LAB_01040d92;
  }
  FUN_0100b594(iVar9);
  iVar6 = DAT_010411e4 + iVar4;
  FUN_0100b698(iVar6,uVar13 & 0xff,DAT_01041260 + uVar5 * 0x28,10);
  iVar9 = iVar1 + iVar8;
  if (*(char *)(iVar9 + 2) == '\0') {
    FUN_010140ac(0x10,1,iVar6);
  }
  FUN_010140ac(0x11,1,iVar6);
  FUN_0100b594(iVar6);
  iVar6 = DAT_010411d4;
  iVar10 = DAT_010411d4 + iVar4;
  FUN_0100b698(iVar10,uVar13 & 0xff,DAT_01041264 + uVar5 * 200,0x32);
  if (iVar8 == 0) {
    uVar2 = 0xd;
LAB_01040e0e:
    FUN_01014190(uVar2,iVar10);
  }
  else if (iVar8 == 1) {
    uVar2 = 0xf;
    goto LAB_01040e0e;
  }
  if (param_1 == 2) {
    iVar6 = iVar6 + 0x28;
    uVar2 = 4;
  }
  else {
    if (param_1 != 3) goto LAB_01040e2c;
    iVar6 = iVar6 + 0x3c;
    uVar2 = 7;
  }
  FUN_01014190(uVar2,iVar6);
LAB_01040e2c:
  FUN_01008f0c(iVar8,*(undefined1 *)(iVar9 + 0xbc),iVar10);
  FUN_010070c2(iVar8,0,iVar10);
  FUN_01009152(iVar8,0,iVar10);
  iVar6 = DAT_010411e8 + iVar4;
  FUN_0100b698(iVar6,uVar13 & 0xff,DAT_01041268 + uVar5 * 200,0x32);
  FUN_01014190(0x11,iVar6);
  FUN_01008f0c(iVar8,*(undefined1 *)(iVar9 + 0xbc),iVar6);
  iVar10 = FUN_010070c2(iVar8,0,iVar6);
  FUN_01009152(iVar8,0,iVar6);
  iVar6 = DAT_01040f5c;
  iVar11 = DAT_01040f5c + uVar5 * 0xbc;
  pcVar7 = (char *)(iVar11 + 0x3c);
  if (iVar10 == 0) {
    FUN_01040f60(param_1,iVar8,(int)uVar12,uVar3,*(undefined1 *)(iVar9 + 0xbc),*pcVar7 == '\x02',
                 *(char *)(DAT_01040f5c + 0x780) == '\x02');
    iVar10 = FUN_01041076(param_1,2,(int)uVar12,uVar3,*(undefined1 *)(iVar1 + 0xbe),
                          *pcVar7 == '\x02',*(char *)(iVar6 + 0x780) == '\x02');
    if ((iVar10 == 0) &&
       (((*pcVar7 != '\x02' ||
         (iVar10 = FUN_01009b7a(iVar8,uVar5,*(undefined4 *)(iVar11 + 0x4c)), iVar10 == 0)) &&
        (*pcVar7 == '\x02')))) {
      iVar4 = DAT_010411f8 + iVar4;
      FUN_010413fc(iVar4);
      iVar10 = FUN_01041414(iVar4,iVar11 + 0x80,*(undefined4 *)(DAT_0104126c + param_1 * 4));
      FUN_0100b594(iVar4);
    }
  }
  return iVar10;
}

