
int FUN_01005760(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint unaff_r10;
  uint unaff_r11;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  uint uVar17;
  int local_38;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  
  iVar6 = DAT_01005e50;
  iVar11 = DAT_01005e50 + param_3 * 0x2a0;
  iVar10 = 0;
  iVar4 = DAT_01005e4c + (param_3 & 0xff) * 0xbc;
  puVar8 = (undefined4 *)(DAT_01005e50 + 0x1500);
  local_28 = param_3;
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 0:
    *(undefined1 *)(param_4 + 0x10) = 0;
    *(undefined4 *)(param_4 + 8) = 0;
    *(int *)(param_4 + 0xc) = iVar4 + 0x19c;
    FUN_01005a40(*puVar8);
    FUN_01005a36(0x1508);
    iVar4 = iVar11;
    break;
  case 1:
    *(undefined1 *)(param_4 + 0x10) = 1;
    *(undefined4 *)(param_4 + 8) = 1;
    *(int *)(param_4 + 0xc) = iVar4 + 0x314;
    bVar2 = (byte)*(undefined4 *)(iVar6 + 0x1590);
    *(byte *)(param_4 + 0x12) = bVar2 & 8;
    *(byte *)(param_4 + 0x11) = bVar2 & 4;
    FUN_01005a36(0x1598);
    iVar10 = 2;
    iVar4 = iVar11 + 0xfc0;
    break;
  case 2:
    *(int *)(param_4 + 0xc) = iVar4 + 0x48c;
    *(undefined1 *)(param_4 + 0x10) = 2;
    *(undefined4 *)(param_4 + 8) = 2;
    iVar4 = iVar11 + 0x540;
    FUN_01005a40(*(undefined4 *)(iVar6 + 0x1530));
    *(int *)(param_4 + 0x14) = extraout_r1 + 0x1538;
    goto LAB_01005804;
  case 3:
    *(int *)(param_4 + 0xc) = iVar4 + 0x604;
    *(undefined1 *)(param_4 + 0x10) = 3;
    *(undefined4 *)(param_4 + 8) = 3;
    FUN_01005a40(*(undefined4 *)(iVar6 + 0x1560));
    FUN_01005a36(0x1568);
    iVar10 = 4;
    iVar4 = iVar11 + 0xa80;
    break;
  default:
    return 0;
  }
  iVar10 = (short)iVar10 * 0x600;
LAB_01005804:
  *(undefined1 *)(param_4 + 4) = (undefined1)local_28;
  *(int *)(param_4 + 0x18) = param_4 + 0x380;
  *(undefined4 *)(param_4 + 0x1c) = 0;
  uVar3 = FUN_010117d2(local_28 & 0xff,*(undefined4 *)(param_2 + 0x18));
  iVar6 = *(int *)(param_4 + 0x14);
  *(undefined2 *)(iVar6 + 0x14) = uVar3;
  *(undefined2 *)(iVar6 + 0x14) = 0x60;
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(uint *)(*(int *)(param_4 + 0xc) + 0x20);
  uVar17 = uVar7 >> 1;
  if (*(char *)(*(int *)(param_4 + 0xc) + 0x12) != '\x01') {
    fVar16 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar17 = VectorFloatToUnsigned(fVar16 / DAT_01005ad4,3);
  }
  local_38 = DAT_01005e5c + uVar17;
  iVar6 = FUN_0100929c(&local_30,*(undefined4 *)(param_2 + 0x20));
  uVar17 = *(uint *)(param_2 + 0x20);
  if (((uVar17 == 0) || (uVar17 == 1)) || (uVar17 == 2)) {
    unaff_r11 = 0;
    unaff_r10 = DAT_01005e60 + local_38;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  bVar15 = unaff_r11 <= uStack_2c;
  if (bVar15) {
    if (uStack_2c <= unaff_r11) {
      bVar15 = unaff_r10 <= local_30;
      goto LAB_010058c2;
    }
  }
  else {
LAB_010058c2:
    if (!bVar15) {
      return 0;
    }
  }
  uVar1 = *(ushort *)(DAT_01005e64 + (uVar17 & 0xff) * 2);
  iVar6 = 0;
  bVar15 = true;
  *(undefined1 *)(param_4 + 0x2f9) = 0;
  iVar13 = 0;
  uVar17 = ((uint)uVar1 << 0x11) >> 0x10;
  *(undefined1 *)(param_4 + 0x2fa) = 0;
  bVar14 = uVar17 == 2;
  if (bVar14) {
    iVar6 = *(int *)(param_2 + 0x20);
    uVar17 = (uint)*(byte *)(iVar4 + 10 + iVar6);
  }
  iVar5 = 0;
  if ((!bVar14 || uVar17 != 0) || (uVar17 = *(uint *)(param_2 + 0x18), 1 < uVar17 && uVar17 != 3))
  goto LAB_010059c4;
  if (*(char *)(iVar4 + 0x29c) != '\0') {
    iVar13 = 6;
  }
  if (uVar17 == 1) {
    if (*(char *)(iVar11 + iVar6 + 0xa8a) != '\0') {
      iVar6 = iVar11 + iVar13 + iVar6 * 2;
      bVar15 = false;
      *(undefined1 *)(iVar6 + 0x1250) = *(undefined1 *)(iVar6 + 0xd10);
      iVar6 = iVar11 + iVar13 + *(int *)(param_2 + 0x20) * 2;
      *(undefined1 *)(iVar6 + 0x1251) = *(undefined1 *)(iVar6 + 0xd11);
      *(undefined1 *)(iVar4 + 10 + *(int *)(param_2 + 0x20)) = 1;
      goto LAB_01005950;
    }
  }
  else {
LAB_01005950:
    if ((*(int *)(param_2 + 0x18) == 3) &&
       (*(char *)(iVar11 + *(int *)(param_2 + 0x20) + 0xfca) != '\0')) {
      iVar6 = iVar11 + iVar13 + *(int *)(param_2 + 0x20) * 2;
      *(undefined1 *)(iVar6 + 0xd10) = *(undefined1 *)(iVar6 + 0x1250);
      iVar6 = iVar11 + iVar13 + *(int *)(param_2 + 0x20) * 2;
      *(undefined1 *)(iVar6 + 0xd11) = *(undefined1 *)(iVar6 + 0x1251);
      *(undefined1 *)(iVar4 + 10 + *(int *)(param_2 + 0x20)) = 1;
      goto LAB_010059c4;
    }
    if (!bVar15) goto LAB_010059c4;
  }
  FUN_01005c28(param_4,iVar4,param_2);
  uVar9 = **(undefined4 **)(param_4 + 0x14);
  uVar12 = (*(undefined4 **)(param_4 + 0x14))[1];
  FUN_01011db4(param_4);
  puVar8 = *(undefined4 **)(param_4 + 0x14);
  *puVar8 = uVar9;
  puVar8[1] = uVar12;
  iVar5 = FUN_01005c3c(param_4,iVar4);
  *(char *)(iVar4 + 0x29c) = (char)*(undefined4 *)(param_2 + 0x10);
  if (iVar5 != 0) {
    return iVar5;
  }
LAB_010059c4:
  iVar6 = FUN_01011708(*(undefined4 *)(param_2 + 0x18),local_28 & 0xff);
  if ((iVar6 == 0) && (*(char *)(iVar4 + 8 + (uint)*(byte *)(iVar4 + 0x29d)) == '\0')) {
    FUN_01005b60(param_4,iVar4,param_2);
    FUN_01011e42(param_4);
    iVar6 = DAT_01005e68;
    if (*(int *)(param_2 + 0x18) != 2) {
      FUN_0101204c(DAT_01005e68 + 8 + iVar10,param_4 + 0x20,0xcc);
      FUN_0101204c(iVar6 + iVar10 + 0xe8,*(undefined4 *)(param_4 + 0x18),0xcc);
      FUN_01012124(iVar6 + iVar10,*(undefined1 *)(param_4 + 0x158),*(undefined4 *)(param_4 + 0x164),
                   *(undefined4 *)(param_4 + 0x160));
    }
    iVar5 = FUN_01005bbe(param_4,iVar4);
  }
  return iVar5;
}

