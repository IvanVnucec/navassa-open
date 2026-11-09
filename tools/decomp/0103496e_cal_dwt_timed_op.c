
void cal_dwt_timed_op(void)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  uint *puVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 in_r3;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint unaff_r7;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  iVar11 = DAT_01034c30;
  *DAT_01034c2c = *DAT_01034c2c | 0x1000000;
  puVar7 = DAT_01034c34;
  iVar16 = 0;
  *DAT_01034c34 = *DAT_01034c34 | 1;
  bVar5 = true;
  uVar14 = puVar7[1];
  uStack_28 = in_r3;
  if ((*(char *)(iVar11 + 0x77f) != '\x01') && (iVar10 = thunk_EXT_FUN_20036204(7), iVar10 != 0)) {
    iVar16 = 0xd207;
  }
  pcVar8 = DAT_01034c38;
  pcVar6 = DAT_01034c24;
  if (DAT_01034c24[8] != '\0') {
    DAT_01034c24[8] = '\0';
    pcVar6[10] = *pcVar8;
    FUN_010348fc(pcVar8 + 4,iVar11 + 0x24);
    FUN_010348fc(pcVar8 + 0x14,iVar11 + 0xe0);
    FUN_01034c80();
    FUN_01034c78();
    FUN_01034c80();
    FUN_01034c78();
    FUN_01034908(pcVar8 + 0x44,iVar11 + 0x314);
    FUN_01034908(pcVar8 + 0x54,iVar11 + 0x3d0);
    FUN_01034908(pcVar8 + 100,iVar11 + 0x48c);
    FUN_01034908(pcVar8 + 0x74,iVar11 + 0x548);
    FUN_01034908(pcVar8 + 0x84,iVar11 + 0x604);
    FUN_01034908(pcVar8 + 0x94,iVar11 + 0x6c0);
    uVar3 = *(ushort *)(iVar11 + 0x22);
    uVar13 = ((uint)uVar3 << 0x1c) >> 0x1e;
    uVar18 = uVar3 & 3;
    if ((iVar16 == 0) && (iVar16 = FUN_01019c40((char)uVar3,auStack_40), iVar16 == 0)) {
      iVar16 = FUN_01018424(auStack_40);
    }
    unaff_r7 = 0;
    do {
      if ((int)((uVar18 >> (unaff_r7 & 0xff)) << 0x1f) < 0) {
        iVar17 = unaff_r7 * 0x54 + DAT_01034c3c + 0xdc;
        iVar10 = iVar11 + unaff_r7 * 0xbc;
        if ((iVar16 == 0) &&
           (iVar16 = FUN_01018f6c(unaff_r7 & 0xff,iVar10 + 0x228,iVar17,0), iVar16 == 0)) {
          iVar16 = FUN_01018f6c(unaff_r7 & 0xff,iVar10 + 0x3a0,iVar17,0);
        }
      }
      unaff_r7 = unaff_r7 + 1;
    } while ((int)unaff_r7 < 2);
    iVar11 = FUN_0101a310(0x3f);
    uVar15 = 0;
    do {
      iVar16 = DAT_01034c28;
      if (iVar11 == 0) {
        if ((int)((uVar18 >> (uVar15 & 0xff)) << 0x1f) < 0) {
          unaff_r7 = uVar15 & 0xff;
          iVar11 = *(int *)(DAT_01034c28 + unaff_r7 * 4);
          *(undefined4 *)(iVar11 + 4) = 0xffffffff;
          if (*(char *)(iVar11 + 0x10) != '\x02') {
            bVar5 = false;
          }
          iVar11 = stream_event_dispatcher(iVar11,*(undefined4 *)(iVar11 + 8),0,0,0,0,0,0,0);
          if ((iVar11 != 0) ||
             (iVar11 = FUN_01019830(uVar15 & 0xff,
                                    *(undefined4 *)(*(int *)(iVar16 + unaff_r7 * 4) + 8),2),
             iVar11 != 0)) goto LAB_01034b1c;
        }
        if (((int)((uVar13 >> (uVar15 & 0xff)) << 0x1f) < 0) &&
           (bVar4 = (char)uVar15 + 2, iVar11 = FUN_01019830(bVar4,5,2),
           *(char *)(*(int *)(DAT_01034c28 + (uint)bVar4 * 4) + 0x10) != '\x02')) {
          bVar5 = false;
        }
      }
LAB_01034b1c:
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 2);
  }
  if (*pcVar6 != '\0') {
    *pcVar6 = '\0';
    *DAT_01034c40 = pcVar6[4];
    FUN_01034c88();
    uVar19 = pin_update(DAT_01034c48,3,pcVar6[4]);
    FUN_01034c8c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),unaff_r7 & 4);
  }
  if (pcVar6[1] != '\0') {
    pcVar6[1] = '\0';
    *DAT_01034c4c = pcVar6[5];
    FUN_01034c88();
    uVar19 = pin_update(DAT_01034c54,3,pcVar6[5]);
    FUN_01034c8c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),unaff_r7 & 4);
  }
  puVar9 = DAT_01034c5c;
  if (pcVar6[2] != '\0') {
    pcVar6[2] = '\0';
    uVar1 = *puVar9;
    *puVar9 = 0;
    uVar12 = FUN_01034c8e(puVar9,3,pcVar6[6]);
    FUN_01034c8e(uVar12,0xc,((uint)(byte)pcVar6[6] << 0x1a) >> 0x18);
    *puVar9 = uVar1;
  }
  puVar9 = DAT_01034c60;
  if (pcVar6[3] != '\0') {
    cVar2 = pcVar6[7];
    pcVar6[3] = '\0';
    uVar1 = *puVar9;
    *puVar9 = 0;
    uVar12 = FUN_01034c8e(puVar9,0x30,(cVar2 + -2) * '\x10');
    FUN_01034c8e(uVar12,0xc0,(cVar2 + -2) * '@');
    *puVar9 = uVar1;
  }
  *(uint *)(pcVar6 + 0xc) = DAT_01034c34[1] - uVar14;
  iVar11 = DAT_01034c64;
  if (bVar5) {
    iVar16 = 0;
    do {
      if (*(int *)(*(int *)(iVar11 + 0x20) + 0x1c + iVar16 * 0x24) != 0) {
        FUN_01034c6c();
      }
      iVar10 = DAT_01034c68;
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0x18);
    iVar11 = 0;
    do {
      if (*(int *)(iVar10 + 0x1c + iVar11 * 0x24) != 0) {
        FUN_01034c6c();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x12);
  }
  return;
}

