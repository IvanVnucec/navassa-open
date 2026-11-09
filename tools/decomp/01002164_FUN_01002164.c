
undefined8 FUN_01002164(void)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_r3;
  uint uVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  
  iVar9 = DAT_01002780;
  puVar7 = DAT_0100273c;
  pbVar6 = DAT_01002688;
  iVar5 = DAT_01002518;
  puVar4 = DAT_01002464;
  bVar3 = *(byte *)(DAT_01002780 + 0x22);
  bVar2 = *DAT_01002688;
  *DAT_01002464 = *DAT_010025fc;
  uVar17 = bVar3 & 0xf;
  puVar4[1] = *puVar7;
  if (bVar2 == 3) {
    uVar13 = 2;
  }
  else {
    uVar13 = 1;
  }
  FUN_010020ca(uVar13);
  puVar10 = DAT_01002784;
  uVar14 = *(uint *)(iVar5 + 0x2c) & 0xfffffffe;
  if (bVar2 < 2) {
    uVar14 = uVar14 | 4;
  }
  puVar1 = DAT_01002784 + 2;
  *DAT_01002784 = (uint)(byte)*DAT_01002784;
  puVar10[2] = (uint)(byte)*puVar1;
  if (pbVar6[1] == 2) {
    uVar15 = uVar14 | 0x408;
  }
  else {
    uVar15 = uVar14 | 0x40;
    if (pbVar6[1] == 1) {
      uVar15 = uVar14 | 0xc0;
    }
  }
  if (pbVar6[2] == 1) {
    uVar15 = uVar15 | 0xc00;
  }
  if (bVar2 == 0) {
    uVar15 = uVar15 | 2;
  }
  else if (bVar2 == 3) {
    uVar15 = uVar15 | 0x10000;
  }
  *(uint *)(iVar5 + 0x2c) = uVar15;
  bVar11 = 0;
  do {
    if ((int)((uVar17 >> (uint)bVar11) << 0x1f) < 0) {
      *(undefined1 *)(iVar5 + 0x791) = *(undefined1 *)((uint)bVar11 + DAT_01002788 + 0xbf);
      break;
    }
    bVar11 = bVar11 + 1;
  } while (bVar11 < 4);
  bVar18 = *(char *)(iVar9 + 0x780) == '\x02';
  if (bVar18) {
    *(uint *)(iVar5 + 0x2c) = *(uint *)(iVar5 + 0x2c) | 0x20000;
  }
  iVar16 = FUN_01003052(bVar2,bVar18);
  if (*(int *)(iVar5 + 0x2c) << 0x1e < 0) {
    if ((iVar16 != 0) ||
       ((*(int *)(iVar5 + 0x2c) << 0x13 < 0 && (iVar16 = FUN_01001750(0,puVar10), iVar16 != 0))))
    goto LAB_010022d0;
    if (*(int *)(iVar5 + 0x2c) << 0x12 < 0) {
      iVar16 = FUN_01001750(1,puVar10 + 2);
      goto LAB_01002270;
    }
  }
  else {
LAB_01002270:
    if (iVar16 != 0) goto LAB_010022d0;
  }
  iVar8 = DAT_01002754;
  uVar14 = 0;
  do {
    if ((int)((uVar17 >> (uVar14 & 0xff)) << 0x1f) < 0) {
      *(undefined1 *)(*(int *)(iVar8 + uVar14 * 4) + 0x2d) = 1;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 4);
  if (bVar2 < 2) {
    uVar14 = 0;
    do {
      if ((int)((uVar17 >> (uVar14 & 0xff)) << 0x1f) < 0) {
        *(undefined1 *)(*(int *)(iVar8 + uVar14 * 4) + 0x2c) = 1;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 4);
  }
  if (1 < *pbVar6) {
    uVar14 = 0;
    do {
      if (((uint)*(ushort *)(iVar9 + 0x22) & 1 << (uVar14 & 0xff)) != 0) {
        **(undefined1 **)(puVar4 + uVar14 * 4 + 0x34) = 3;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 4);
  }
LAB_010022d0:
  fVar19 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(DAT_0100278c + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  uVar14 = VectorFloatToUnsigned(DAT_01002564 / (fVar19 / DAT_01002560),3);
  if ((bVar3 & 10) != 0) {
    uVar14 = uVar14 << 1;
  }
  if ((*(uint *)(pbVar6 + 0x20) < uVar14) || (1 < *pbVar6)) {
    *DAT_01002790 = 0;
    if ((int)(uVar17 << 0x1d) < 0) {
      FUN_0100a506(0);
    }
    if ((int)(uVar17 << 0x1c) < 0) {
      FUN_0100a506(1,0);
    }
  }
  *(undefined1 *)(iVar5 + 0x6b5) = 0;
  *(undefined1 *)(iVar5 + 0x6b4) = 0;
  if (*pbVar6 == 3) {
    *(undefined1 *)(iVar5 + 0x765) = 2;
    *(undefined1 *)(iVar5 + 0x764) = 2;
  }
  if (*(char *)(iVar9 + 0x780) == '\0') {
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
  }
  *(undefined1 *)(iVar5 + 0x7de) = uVar12;
  bVar2 = pbVar6[0x24];
  *(uint *)(iVar5 + 0x6c0) = (uint)bVar2;
  *(byte *)(iVar5 + 0x790) = bVar2;
  *(undefined4 *)(iVar5 + 0x6dc) = 0;
  *(undefined4 *)(iVar5 + 0x78c) = 0;
  *(uint *)(iVar5 + 0x770) = (uint)*(byte *)(iVar5 + 0x790);
  return CONCAT44(in_r3,iVar16);
}

