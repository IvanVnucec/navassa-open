
undefined8 FUN_010004ec(byte *param_1,byte *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  byte *local_30;
  undefined4 local_2c;
  
  puVar12 = DAT_01000ff0;
  uVar6 = DAT_01000ff0[7];
  uVar13 = DAT_01000ff0[3];
  if ((uVar6 < uVar13) ||
     (uVar5 = DAT_01000ff0[2], uVar6 <= uVar13 && DAT_01000ff0[6] <= DAT_01000ff0[2])) {
    uVar5 = DAT_01000ff0[6];
    uVar13 = uVar6;
  }
  uVar7 = DAT_01000ff0[5];
  uVar6 = DAT_01000ff0[1];
  if ((uVar6 < uVar7) ||
     (uVar14 = *DAT_01000ff0, uVar6 <= uVar7 && *DAT_01000ff0 <= DAT_01000ff0[4])) {
    uVar14 = DAT_01000ff0[4];
    uVar6 = uVar7;
  }
  uVar7 = FUN_01001950(uVar5,uVar13);
  uVar4 = FUN_01001950(uVar14,uVar6);
  iVar1 = DAT_01000ff8;
  pcVar3 = DAT_01000ff4;
  local_30 = param_2;
  local_2c = param_3;
  if ((DAT_01000ff4[0x790] != '\0') || ((char)puVar12[8] == '\0')) goto LAB_010006de;
  local_2c = 0x9c000;
  if (uVar7 == uVar4) {
    puVar12 = (uint *)(DAT_01000ff8 + (uint)*param_1 * 8);
    uVar10 = *puVar12;
    uVar11 = puVar12[1];
    bVar16 = uVar11 <= uVar6;
    bVar15 = uVar6 == uVar11;
    bVar17 = bVar16;
    local_30 = param_1;
    if (bVar16 && !bVar15) {
LAB_0100057e:
      if (bVar17 && !bVar15) goto LAB_01000678;
      if (bVar17) {
        bVar17 = uVar5 <= uVar10;
      }
    }
    else {
      bVar17 = bVar16 && uVar10 <= uVar14;
      if (!bVar16 || uVar10 > uVar14) {
        uVar10 = *(uint *)(DAT_010011f0 + 0x10);
        bVar17 = uVar13 <= *(uint *)(DAT_010011f0 + 0x14);
        bVar15 = *(uint *)(DAT_010011f0 + 0x14) == uVar13;
        goto LAB_0100057e;
      }
    }
    if (bVar17) goto LAB_01000678;
    for (uVar4 = 0x2c; pcVar9 = pcVar3 + uVar4 * 8, uVar7 < uVar4; uVar4 = uVar4 - 1) {
      *(undefined4 *)(pcVar9 + 8) = *(undefined4 *)pcVar9;
      *(undefined4 *)(pcVar9 + 0xc) = *(undefined4 *)(pcVar9 + 4);
      puVar8 = (undefined4 *)(iVar1 + uVar4 * 8);
      *puVar8 = puVar8[-2];
      puVar8[1] = puVar8[-1];
    }
    uVar7 = *(uint *)(pcVar9 + 8);
    uVar10 = *(uint *)(pcVar9 + 0xc);
    if ((uVar10 < uVar6) || ((uVar10 <= uVar6 && (uVar7 < uVar14)))) {
      if ((uVar13 < uVar10) || ((uVar13 <= uVar10 && (uVar5 < uVar7)))) {
        puVar12 = (uint *)(iVar1 + uVar4 * 8);
        *puVar12 = uVar7;
        puVar12[1] = uVar10;
        *(uint *)(pcVar9 + 8) = uVar5;
        *(uint *)(pcVar9 + 0xc) = uVar13;
      }
      else {
        puVar12 = (uint *)(iVar1 + uVar4 * 8);
        *puVar12 = uVar5;
        puVar12[1] = uVar13;
      }
      *(uint *)(pcVar9 + 0x10) = uVar14;
      *(uint *)(pcVar9 + 0x14) = uVar6;
    }
    else {
      puVar12 = (uint *)(iVar1 + uVar4 * 8);
      *puVar12 = uVar14;
      puVar12[1] = uVar6;
      *(uint *)(pcVar9 + 8) = uVar5;
      *(uint *)(pcVar9 + 0xc) = uVar13;
    }
    uVar13 = 0;
    do {
      uVar18 = FUN_010029e4(1,0,uVar4 + 1);
      uVar7 = (int)uVar18 - 1;
      uVar14 = (int)((ulonglong)uVar18 >> 0x20) - (uint)((int)uVar18 == 0);
      uVar6 = *(uint *)(pcVar3 + uVar13 * 8 + 0x610);
      uVar5 = uVar6 & ~uVar7;
      *(uint *)(pcVar3 + uVar13 * 8 + 0x610) =
           uVar6 & uVar7 | uVar5 << 1 | (0x9c000U >> (uVar13 & 0xff) & 1) << (uVar4 + 1 & 0xff);
      *(uint *)(pcVar3 + uVar13 * 8 + 0x614) =
           (*(uint *)(pcVar3 + uVar13 * 8 + 0x614) & ~uVar14) << 1 | uVar5 >> 0x1f |
           *(uint *)(pcVar3 + uVar13 * 8 + 0x614) & uVar14;
      uVar6 = uVar13 + 1;
      uVar5 = *(uint *)(pcVar3 + uVar13 * 8 + 0x6d0) & ~uVar7;
      *(uint *)(pcVar3 + uVar13 * 8 + 0x6d0) =
           *(uint *)(pcVar3 + uVar13 * 8 + 0x6d0) & uVar7 | uVar5 << 1;
      *(uint *)(pcVar3 + uVar13 * 8 + 0x6d4) =
           (*(uint *)(pcVar3 + uVar13 * 8 + 0x6d4) & ~uVar14) << 1 | uVar5 >> 0x1f |
           *(uint *)(pcVar3 + uVar13 * 8 + 0x6d4) & uVar14;
      uVar13 = uVar6;
    } while ((int)uVar6 < 0x18);
    *pcVar3 = *pcVar3 + '\x01';
    *param_1 = *param_1 + 1;
  }
  else {
LAB_01000678:
    uVar10 = *(uint *)((int)(DAT_01000ff4 + uVar7 * 8 + 8) + 4);
    if ((uVar13 <= uVar10) && (uVar13 < uVar10 || uVar5 < *(uint *)(DAT_01000ff4 + uVar7 * 8 + 8)))
    {
      puVar12 = (uint *)(DAT_01000ff4 + uVar7 * 8 + 8);
      *puVar12 = uVar5;
      puVar12[1] = uVar13;
    }
    puVar12 = (uint *)(pcVar3 + uVar4 * 8 + 8);
    if ((puVar12[1] <= uVar6) && (puVar12[1] < uVar6 || *puVar12 < uVar14)) {
      *puVar12 = uVar14;
      puVar12[1] = uVar6;
    }
    uVar13 = 0;
    do {
      iVar1 = uVar13 * 8;
      uVar5 = *(uint *)((int)(pcVar3 + iVar1 + 0x610) + 4);
      uVar6 = uVar13 & 0xff;
      iVar2 = uVar13 * 8;
      uVar13 = uVar13 + 1;
      *(uint *)(pcVar3 + iVar2 + 0x610) =
           *(uint *)(pcVar3 + iVar1 + 0x610) | (0x9c000U >> uVar6 & 1) << (uVar4 & 0xff);
      *(uint *)((int)(pcVar3 + iVar2 + 0x610) + 4) = uVar5;
    } while ((int)uVar13 < 0x18);
  }
  pcVar3[0x790] = '\x01';
LAB_010006de:
  return CONCAT44(local_2c,local_30);
}

