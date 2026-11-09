
int FUN_010320c8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint extraout_r1;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  bVar2 = *(byte *)(param_1 + 2);
  uVar11 = (uint)bVar2;
  uVar3 = *(undefined1 *)(DAT_01032754 + uVar11);
  iVar10 = *(int *)(DAT_0103276c + (uint)*(byte *)(param_1 + 1) * 4);
  FUN_01006dfc(0,0);
  iVar4 = FUN_010324be(*(undefined1 *)(param_1 + 2));
  iVar5 = (short)(ushort)bVar2 * 0x14;
  if (((((iVar4 == 0) && (iVar4 = FUN_01032488(DAT_01032770,2,DAT_01032770 + iVar5), iVar4 == 0)) &&
       (iVar4 = FUN_01032488(DAT_01032774,3,DAT_01032774 + iVar5), iVar4 == 0)) &&
      ((iVar4 = FUN_0103248e(DAT_01032778,iVar5), iVar4 == 0 &&
       (iVar4 = FUN_0103248e(DAT_0103277c,iVar5), iVar4 == 0)))) &&
     (iVar4 = FUN_0103248e(DAT_01032780,iVar5), iVar4 == 0)) {
    iVar4 = FUN_0103248e(DAT_01032784,iVar5);
  }
  FUN_0102dae6(uVar11,0,1,2);
  if (*(char *)(param_1 + 0x2d) == '\0' && iVar4 == 0) {
    iVar4 = FUN_01032486(DAT_01032788,iVar5,DAT_01032788 + iVar5);
  }
  if (iVar4 == 0) {
    iVar4 = FUN_01032478();
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') && (iVar4 == 0)) {
    FUN_010324a6();
    iVar4 = FUN_01032478();
    if (iVar4 == 0) {
      FUN_010324b2();
    }
  }
  iVar12 = DAT_01032790;
  iVar9 = DAT_0103278c;
  uVar13 = CONCAT44(param_1 + 0x2c,iVar4);
  if (*(char *)(param_1 + 0x2d) != '\0') {
    if ((iVar4 == 0) &&
       (iVar4 = (uint)*(byte *)(param_1 + 1) * 0x14 + DAT_01032790,
       uVar13 = FUN_01032474(iVar4,0,DAT_01032798,0,iVar4,
                             (short)(ushort)*(byte *)(param_1 + 1) * 0x60 + DAT_01032794,0),
       (int)uVar13 == 0)) {
      FUN_01032440();
      uVar13 = FUN_0103245a();
      uVar13 = FUN_01032474((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_0103279c);
      if ((int)uVar13 == 0) {
        FUN_01032440();
        uVar13 = FUN_0103245a();
        uVar13 = FUN_01032474((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_010327a0);
      }
    }
    iVar4 = (int)uVar13;
    if ((iVar4 == 0) &&
       (iVar4 = (uint)*(byte *)(param_1 + 1) * 0x14,
       iVar4 = FUN_01032474(iVar4,(int)((ulonglong)uVar13 >> 0x20),DAT_01032798,0,iVar9 + iVar4,
                            (short)(ushort)*(byte *)(param_1 + 1) * 0x60 + DAT_010327a4,1),
       iVar4 == 0)) {
      FUN_01032498();
      uVar13 = FUN_0103244c();
      iVar4 = FUN_01031e42((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_0103279c,0);
      if (iVar4 == 0) {
        FUN_01032498();
        uVar13 = FUN_0103244c();
        iVar4 = FUN_01031e42((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_010327a0,0);
      }
    }
  }
  iVar6 = iVar5 + DAT_010327a8;
  if (iVar4 == 0) {
    FUN_0100b698(iVar6,uVar3,DAT_010327ac + (short)(ushort)bVar2 * 0x30,0xc);
    iVar4 = FUN_010070c2(iVar10,1,iVar6);
    FUN_01009152(iVar10,1,iVar6);
  }
  iVar8 = (short)(ushort)bVar2 * 0x28;
  iVar5 = DAT_010327b0 + iVar5;
  if (iVar4 == 0) {
    FUN_0103246c(DAT_010327b4,uVar3,DAT_010327b4 + iVar8);
    if (iVar10 == 0) {
      FUN_010140ac(0xd,0,iVar5);
      uVar7 = 0xc;
LAB_010322fe:
      iVar4 = FUN_010140ac(uVar7,0,iVar5);
    }
    else if (iVar10 == 1) {
      FUN_010140ac(0xf,0,iVar5);
      uVar7 = 0xe;
      goto LAB_010322fe;
    }
    if (uVar11 == 0) {
      uVar7 = 3;
      iVar4 = DAT_010327b0;
LAB_01032320:
      iVar4 = FUN_010140ac(uVar7,0,iVar4);
    }
    else if (uVar11 == 1) {
      uVar7 = 6;
      iVar4 = iVar5;
      goto LAB_01032320;
    }
    FUN_0100b594(iVar5);
  }
  lVar14 = CONCAT44(param_1 + 0x2c,iVar4);
  cVar1 = *(char *)(param_1 + 0x2d);
  if (iVar4 == 0) {
    lVar14 = FUN_01032480(cVar1,uVar3,1,cVar1 == '\0');
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') && ((int)lVar14 == 0)) {
    uVar7 = FUN_010324a6();
    lVar14 = FUN_01032480(uVar7,uVar3,1,cVar1 == '\0');
    if ((int)lVar14 == 0) {
      FUN_010324b2();
      lVar14 = (ulonglong)extraout_r1 << 0x20;
    }
  }
  iVar4 = (int)lVar14;
  if (((*(char *)(param_1 + 0x2d) != '\0') && (iVar4 == 0)) &&
     (iVar4 = (uint)*(byte *)(param_1 + 1) * 0x14,
     iVar4 = FUN_01032486(iVar4,(int)((ulonglong)lVar14 >> 0x20),iVar12 + iVar4), iVar4 == 0)) {
    iVar4 = (uint)*(byte *)(param_1 + 1) * 0x14;
    iVar4 = FUN_01032488(iVar4,5,iVar9 + iVar4);
  }
  iVar9 = DAT_010327b8 + iVar8;
  cVar1 = *(char *)(param_1 + 0x2c);
  iVar12 = iVar9 + iVar10 * 0x14;
  if (cVar1 == '\0') {
    if (iVar4 != 0) goto LAB_010323e4;
    iVar4 = FUN_01032486(0,iVar8,iVar12);
    iVar9 = iVar12;
  }
  else {
    if (iVar4 != 0) goto LAB_010323e4;
    iVar4 = FUN_01032486(cVar1,iVar8,iVar9 + 0x14);
  }
  if (((iVar4 == 0) && (iVar4 = FUN_01032488(0,5,iVar9), iVar4 == 0)) &&
     (iVar4 = FUN_01032488(0,4,iVar6), iVar4 == 0)) {
    iVar4 = FUN_01032488(0,4,iVar5);
  }
LAB_010323e4:
  cVar1 = *(char *)(param_1 + 0x2c);
  iVar8 = DAT_010327bc + iVar8;
  if (cVar1 == '\0') {
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar5 = FUN_01032488(0,4,iVar8 + iVar10 * 0x14);
    iVar8 = iVar12;
  }
  else {
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar5 = FUN_01032488(cVar1,4,iVar8 + 0x14);
  }
  if ((iVar5 == 0) && (iVar5 = FUN_01032488(0,6,iVar8), iVar5 == 0)) {
    FUN_0102db6a(uVar11,1,0);
    FUN_0102db6a(uVar11,1,1);
  }
  return iVar5;
}

