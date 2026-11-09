
undefined8 FUN_0102b928(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char cVar8;
  byte bVar9;
  undefined4 in_r3;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined8 uVar22;
  uint uVar18;
  
  iVar4 = DAT_0102bc14;
  pcVar3 = DAT_0102bc10;
  iVar2 = DAT_0102bbec;
  uVar15 = *(ushort *)(DAT_0102bbec + 0x22) & 3;
  uVar19 = ((uint)*(ushort *)(DAT_0102bbec + 0x22) << 0x1c) >> 0x1e;
  bVar14 = DAT_0102bc10[1];
  iVar10 = 0;
  iVar16 = DAT_0102bc18;
  if (*(char *)(DAT_0102bbec + 0x10) == '\0') {
    iVar16 = DAT_0102bc1c;
  }
  iVar11 = iVar10;
  if (bVar14 < 3) {
    bVar1 = *(byte *)(iVar16 + 0x47);
    bVar9 = bVar1 & 0x1f;
    if (bVar9 == DAT_0102bc10[2]) goto LAB_0102bb96;
    DAT_0102bc10[2] = bVar9;
    uVar12 = 0;
    do {
      if ((*(char *)(DAT_0102bc20 + uVar12 + 0x18) != '\0') &&
         ((*(byte *)(*(int *)(DAT_0102bc00 + uVar12 * 4) + 0x47) & 0x1f) != bVar9)) {
        iVar11 = 0xff07;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 2);
    if (iVar11 != 0) goto LAB_0102bb7c;
    if ((bVar1 & 0x1f) == 0) {
      if (*pcVar3 == '\0') goto LAB_0102bb96;
    }
    else if (bVar9 == 0x10) {
      if ((*pcVar3 != '\x02') && ((*pcVar3 != '\x01' || (bVar14 == 0)))) {
        *pcVar3 = '\x01';
        periph_init_f(1);
        pcVar3[1] = '\0';
        cVar8 = '\0';
LAB_0102baac:
        periph_init_e(cVar8);
        goto LAB_0102bb96;
      }
    }
    else if (bVar9 == 0x18) {
      if ((*pcVar3 == '\x01') && (bVar14 < 2)) {
        cVar8 = '\x01';
        goto LAB_0102baaa;
      }
    }
    else {
      if (bVar9 != 0x1e) {
        if (bVar9 != 0x1f) goto LAB_0102bb7c;
        cVar8 = '\x03';
LAB_0102baaa:
        pcVar3[1] = cVar8;
        goto LAB_0102baac;
      }
      if (*pcVar3 == '\x01') {
        if ((int)(uVar19 << 0x1f) < 0) {
          FUN_0101e07c(0);
        }
        if ((int)(uVar19 << 0x1e) < 0) {
          FUN_0101e07c(1);
        }
        uVar22 = pin_update(DAT_0102bc24,0x40,0x40);
        FUN_0102bba0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x20);
        uVar22 = pin_update(iVar16 + 0xe4,1,1);
        FUN_0102bba0((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0);
        pin_update(iVar4,1,1);
        puVar5 = DAT_0102bc30;
        pin_update(DAT_0102bc2c,1,0);
        *puVar5 = 0x33;
        *puVar5 = 0;
        pcVar3[1] = '\x02';
        periph_init_e();
        if ((int)(uVar15 << 0x1f) < 0) {
          FUN_0102bba2(uVar15 << 0x1f,0x40,0x40);
          uVar6 = DAT_0102bc34;
          pin_update(DAT_0102bc34,1,0);
          pin_update(uVar6,1,1);
        }
        if ((int)(uVar15 << 0x1e) < 0) {
          FUN_0102bba2(uVar15 << 0x1e,0x80,0x80);
          uVar22 = FUN_0102bba8();
          FUN_0102bbaa((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),1);
        }
        *DAT_0102bc3c = 1;
        FUN_01018076();
        goto LAB_0102bb96;
      }
    }
LAB_0102b9ba:
    iVar11 = 0xff08;
  }
  else {
    uVar20 = *(byte *)(DAT_0102bc14 + 1) & 1;
    uVar12 = (uint)*(byte *)(DAT_0102bc14 + 1);
    uVar17 = uVar12 << 0x1e;
    uVar18 = uVar17 >> 0x1f;
    if (uVar20 == (byte)DAT_0102bc10[3]) {
      uVar12 = (uint)(byte)DAT_0102bc10[4];
    }
    if (uVar20 == (byte)DAT_0102bc10[3] && uVar18 == uVar12) goto LAB_0102bb96;
    DAT_0102bc10[3] = (char)uVar20;
    pcVar3[4] = (byte)(uVar17 >> 0x1f);
    uVar12 = 0;
    do {
      if (((int)((uVar15 >> (uVar12 & 0xff)) << 0x1f) < 0) &&
         (*(char *)(uVar12 * 0xbc + iVar2 + 0x228) == '\x02')) {
        if (uVar12 == 0) {
          uVar17 = *(byte *)(iVar4 + 2) & 1;
          uVar13 = (uint)*(byte *)(iVar4 + 2) << 0x1b;
        }
        else {
          uVar17 = ((uint)*(byte *)(iVar4 + 2) << 0x1e) >> 0x1f;
          uVar13 = (uint)*(byte *)(iVar4 + 2) << 0x1a;
        }
        iVar11 = 0xff07;
        if (uVar20 != uVar17 || uVar18 != uVar13 >> 0x1f) break;
      }
      uVar12 = uVar12 + 1;
      iVar11 = iVar10;
    } while ((int)uVar12 < 2);
    if (bVar14 == 3) {
      bVar21 = (uVar20 & (uVar18 ^ 1)) == 0;
      if (!bVar21) {
        pin_update(DAT_0102bc40,1,0);
        bVar14 = 0;
        do {
          if ((int)((uVar19 >> (uint)bVar14) << 0x1f) < 0) {
            FUN_0101e0c2(bVar14);
            FUN_0102bbbe(bVar14);
          }
          if ((int)((uVar15 >> (uint)bVar14) << 0x1f) < 0) {
            FUN_0102bbb2(bVar14);
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < 2);
        pcVar3[1] = '\x04';
        periph_init_e(4);
        goto LAB_0102bb7c;
      }
    }
    else {
      if (bVar14 != 4) goto LAB_0102b9ba;
      bVar21 = (uVar20 & uVar18) == 0;
    }
    if (bVar21) goto LAB_0102b9ba;
    *pcVar3 = '\x02';
    periph_init_f(2);
LAB_0102bb7c:
    if (iVar11 == 0) goto LAB_0102bb96;
  }
  puVar7 = DAT_0102bc48;
  *DAT_0102bc44 = s_mcs_c_0102bc50;
  *puVar7 = 0x195;
  boot_msg(0,iVar11,1);
LAB_0102bb96:
  return CONCAT44(in_r3,iVar11);
}

