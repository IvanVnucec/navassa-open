
int FUN_01007cd8(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar6 = (uint)*DAT_01007f74;
  if (param_1 == 0) {
    uVar6 = ~uVar6;
  }
  uVar6 = param_2 & uVar6 & 0xf;
  bVar3 = false;
  if (uVar6 == 0) {
    return 0;
  }
  uVar10 = 0x1fU - LZCOUNT(~uVar6 + 1 & uVar6) & 0xff;
  cVar2 = *(char *)(DAT_01007fc4 + (uint)*(byte *)(DAT_01007fc0 + uVar10));
  lVar12 = FUN_010067b6(uVar10);
  iVar7 = FUN_0100678c(uVar10);
  for (uVar10 = uVar10 + 1 & 0xff; (int)uVar10 < 4; uVar10 = uVar10 + 1) {
    if ((int)((uVar6 >> (uVar10 & 0xff)) << 0x1f) < 0) {
      iVar8 = FUN_0100678c(uVar10 & 0xff);
      lVar13 = FUN_010067b6(uVar10 & 0xff);
      bVar11 = lVar12 == lVar13;
      if (lVar13 == lVar12) {
        bVar11 = iVar8 == iVar7;
      }
      if (!bVar11) {
        bVar3 = true;
        break;
      }
    }
  }
  pbVar4 = DAT_01007f74;
  if ((DAT_01007f74[param_1 + 2] == 0) &&
     (FUN_01008f08(param_1,DAT_01007f74[param_1 + 0xbc]), bVar3)) {
    FUN_01006748(1,uVar6);
  }
  else {
    FUN_01006748(0,uVar6);
  }
  iVar8 = 0;
  if (pbVar4[param_1 + 2] != 0 || cVar2 != '\0') {
    return 0;
  }
  if (param_1 == 0) {
    bVar1 = *DAT_01007fc8;
  }
  else {
    bVar1 = DAT_01007fc8[9];
  }
  if ((((pbVar4[param_1 + 0xc2] == 1) || (lVar12 != *(longlong *)(DAT_01007fcc + param_1 * 0x60)))
      || (-1 < (int)((uint)bVar1 << 0x1d))) ||
     ((iVar7 == 1 && (*(char *)(DAT_01007fcc + param_1 * 0x60 + 0x59) != '\x02')))) {
    pbVar4[param_1 + 0xc2] = 0;
    if (iVar7 != 0) {
      FUN_01009c88(param_1,0,0,0);
      FUN_01007f12();
      FUN_01007f06();
    }
    iVar8 = FUN_01009cf0(param_1);
    if (iVar8 == 0) {
      iVar8 = FUN_01009784((int)lVar12,(int)((ulonglong)lVar12 >> 0x20),param_1,
                           pbVar4[param_1 + 0xbc]);
    }
    iVar5 = DAT_01007fd0;
    if (iVar8 == 0) {
      if (iVar7 == 0) goto LAB_01007e7a;
      if (*(char *)(DAT_01007fd0 + 0x3c) == '\x02') {
        FUN_01009b7a(param_1,0,*(undefined4 *)(DAT_01007fd0 + 0x4c));
        FUN_01012fb2(2,iVar5 + 0x80);
      }
      if (*(char *)(iVar5 + 0xf8) == '\x02') {
        FUN_01009b7a(param_1,1,*(undefined4 *)(iVar5 + 0x108));
        FUN_01012fb2(3,iVar5 + 0x13c);
      }
    }
    else if (iVar7 == 0) goto LAB_01007e7a;
    FUN_01009c88(param_1,0,0,0);
    FUN_01007f12();
    FUN_01007f06();
    iVar8 = FUN_01009cf0(param_1);
  }
LAB_01007e7a:
  uVar10 = 0;
  do {
    if ((int)((uVar6 >> (uVar10 & 0xff)) << 0x1f) < 0) {
      iVar7 = DAT_01007fd4 + uVar10 * 0x14;
      FUN_0100b260(iVar7);
      uVar9 = FUN_0100b1da();
      FUN_01009a04(param_1,uVar9,iVar7);
      iVar7 = uVar10 * 0x14 + DAT_01007fd8;
      FUN_0100b260(iVar7);
      FUN_01009914(param_1,iVar7);
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 4);
  return iVar8;
}

