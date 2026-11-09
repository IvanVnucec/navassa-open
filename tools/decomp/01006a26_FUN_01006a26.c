
undefined8 FUN_01006a26(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 in_r3;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  
  puVar5 = DAT_0100750c;
  uVar4 = DAT_0100735c;
  iVar3 = DAT_0100734c;
  iVar2 = DAT_010071b0;
  DAT_0100750c[2] = 1;
  *puVar5 = 1;
  puVar5[3] = 1;
  puVar5[1] = 1;
  puVar5[4] = 1;
  puVar6 = DAT_01007510;
  iVar17 = 0;
  *DAT_01007510 = 0;
  uVar14 = 0;
  puVar6[3] = *(undefined1 *)(iVar3 + 0xe);
  do {
    *(undefined1 *)(uVar14 * 0x60 + DAT_01007560 + 0x10) = 0;
    *(undefined1 *)(DAT_01007564 + uVar14 + 6) = 1;
    if (uVar14 == 0) {
      FUN_010070ba(1,0x10,0);
      FUN_01007028(DAT_01007720,extraout_r1_00,puVar5[2]);
      pin_update();
LAB_01006ad8:
      if ((*(char *)(iVar3 + 0x12) != '\x0f') || (*(char *)(iVar3 + 0x77d) == '\x01')) {
        uVar8 = 8;
        uVar13 = DAT_01007720;
        goto LAB_01006b06;
      }
    }
    else {
      if (uVar14 == 2) {
        pin_update(DAT_01007568,1,0);
        pin_update(DAT_0100755c,0x10,0x10);
        pin_update(DAT_0100755c,1,1);
        uVar19 = FUN_01007b4e(DAT_0100756c,extraout_r1,puVar5[4]);
        uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
        uVar13 = (undefined4)uVar19;
      }
      else {
        if (uVar14 < 2) {
          uVar19 = FUN_010074a4(1,0x10,0);
          FUN_01007028((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),puVar5[3]);
          FUN_010074a4();
        }
        else {
          if (uVar14 == 0) goto LAB_01006ad8;
          if (uVar14 != 1) goto LAB_01006b0a;
        }
        if ((*(char *)(iVar3 + 0x12) == '\0') && (*(char *)(iVar3 + 0x77d) != '\x01'))
        goto LAB_01006b0a;
        uVar8 = 8;
        uVar13 = uVar4;
      }
LAB_01006b06:
      pin_update(uVar13,uVar8);
    }
LAB_01006b0a:
    iVar16 = iVar2 + uVar14;
    cVar1 = *(char *)(iVar16 + 2);
    if (cVar1 == '\0') {
      if (uVar14 == 0) {
        FUN_010070ba(0,1,0);
        FUN_01007054(0,1);
      }
      else if (uVar14 == 1) {
        uVar12 = 0;
        FUN_010074a2();
        FUN_01007054(1,1);
        uVar15 = 0;
        do {
          if (iVar17 == 0) {
            uVar9 = 1 << (uVar15 & 0xff);
            bVar18 = (*(ushort *)(iVar3 + 0x22) & uVar9 & 0xf) != 0;
            if (bVar18) {
              uVar12 = (uint)*(byte *)(iVar3 + 0x12);
            }
            if ((bVar18 && (uVar12 & uVar9) != 0) && (iVar7 = FUN_01014354(0xe), iVar7 != 0)) {
              iVar17 = 0xce04;
            }
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 4);
      }
      else if (1 < uVar14) goto LAB_01006c1e;
      if (*(char *)(iVar16 + 7) == '\x01') {
        uVar13 = DAT_01007358;
        if ((uVar14 == 0) || (uVar13 = DAT_01007360, uVar14 == 1)) {
          pin_update(uVar13,4,0);
        }
        iVar17 = FUN_010071b8(uVar14,*(undefined4 *)(iVar2 + uVar14 * 4 + 0x18),0);
      }
      else {
        if (uVar14 == 0) {
          uVar13 = 4;
          uVar10 = 4;
          uVar8 = DAT_01007358;
        }
        else {
          if (uVar14 != 1) goto LAB_01006c1e;
          uVar13 = 4;
          uVar10 = 4;
          uVar8 = DAT_01007360;
        }
LAB_01006c1a:
        pin_update(uVar8,uVar10,uVar13);
      }
    }
    else if (cVar1 == '\x01') {
      if (uVar14 < 2) {
        iVar7 = uVar14 * 0xb + DAT_01007724;
        uVar11 = 7;
        *(undefined1 *)(iVar7 + 8) = 7;
        *(undefined1 *)(iVar7 + 7) = 7;
        if (*(char *)(iVar16 + 0x20) != '\0') {
          uVar11 = 0;
        }
        *(undefined1 *)(iVar7 + 10) = uVar11;
        *(undefined1 *)(iVar7 + 9) = uVar11;
        *(undefined1 *)(iVar7 + 6) = 7;
      }
      FUN_01006e78(uVar14);
      if (uVar14 == 0) {
        uVar13 = 0;
LAB_01006c06:
        uVar10 = 0x80;
        uVar8 = DAT_010077bc;
        goto LAB_01006c1a;
      }
      if (uVar14 == 1) {
        uVar13 = 0;
LAB_01006c14:
        uVar10 = 0x80;
        uVar8 = DAT_0100787c;
        goto LAB_01006c1a;
      }
    }
    else if (cVar1 == '\x02') {
      if (uVar14 == 0) {
        uVar13 = 0x80;
        goto LAB_01006c06;
      }
      if (uVar14 == 1) {
        uVar13 = 0x80;
        goto LAB_01006c14;
      }
    }
LAB_01006c1e:
    uVar14 = uVar14 + 1;
    if (2 < uVar14) {
      return CONCAT44(in_r3,iVar17);
    }
  } while( true );
}

