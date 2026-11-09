
int FUN_0104070c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_r1;
  uint extraout_r1_00;
  int iVar13;
  int iVar14;
  undefined4 extraout_r1_01;
  uint extraout_r1_02;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  char cVar20;
  bool bVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 uVar24;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  bVar1 = *(byte *)(param_1 + 2);
  uVar17 = (uint)bVar1;
  bVar2 = *(byte *)(param_1 + 1);
  uVar19 = (uint)bVar2;
  uVar3 = *(undefined1 *)(DAT_010411bc + uVar17);
  iVar16 = *(int *)(DAT_01040f58 + uVar19 * 4 + 0x34);
  uStack_28 = param_4;
  FUN_01006dfc(0,5,uVar19);
  iVar11 = (short)(ushort)bVar2 * 0x14;
  iVar18 = DAT_010411c0 + iVar11;
  iVar15 = (short)(ushort)bVar2 * 0x28;
  FUN_0100b698(iVar18,uVar3,DAT_010411c4 + iVar15,10);
  iVar12 = iVar11 + DAT_010411c8;
  FUN_0100b698(iVar12,uVar3,DAT_010411cc + iVar15,10);
  uVar6 = FUN_01040ce2(*(undefined1 *)(param_1 + 2));
  iVar15 = (short)(ushort)bVar1 * 0x14;
  if (uVar6 == 0) {
    uVar6 = FUN_01040c9a(DAT_010411d0,2,DAT_010411d0 + iVar15);
    if (uVar6 != 0) goto LAB_0104080e;
    uVar6 = FUN_01040c9a(DAT_010411d4,3,DAT_010411d4 + iVar15);
    if (((((uVar6 == 0) && (uVar6 = FUN_01040cae(DAT_010411d8), uVar6 == 0)) &&
         (uVar6 = FUN_01040cae(DAT_010411dc), uVar6 == 0)) &&
        ((uVar6 = FUN_01040cae(DAT_010411e0), uVar6 == 0 &&
         (uVar6 = FUN_01040c9a(DAT_010411e4,2,DAT_010411e4 + iVar15), uVar6 == 0)))) &&
       (uVar6 = FUN_01040c9a(DAT_010411e8,3,DAT_010411e8 + iVar15), uVar6 == 0)) {
      uVar6 = FUN_01040cae(DAT_010411ec);
      goto LAB_01040802;
    }
  }
  else {
LAB_01040802:
    if (uVar6 == 0) {
      uVar6 = FUN_01040cae(DAT_010411f0);
LAB_0104080e:
      if (uVar6 == 0) {
        uVar6 = FUN_01040cae(DAT_010411f4);
      }
    }
  }
  FUN_0102dae6(uVar17,0,1,5);
  uVar7 = (uint)*(byte *)(param_1 + 0x2d);
  cVar20 = uVar7 == 0 && uVar6 == 0;
  if (uVar7 == 0 && uVar6 == 0) {
    cVar20 = DAT_010411f8 + iVar15 == 0;
    uVar7 = FUN_01040cb8();
    uVar6 = uVar7;
  }
  iVar4 = DAT_01040f5c;
  FUN_01040c88(uVar7,*(undefined1 *)(param_1 + 1));
  if ((cVar20 != '\0') && (uVar6 == 0)) {
    uVar6 = FUN_01009c88(iVar16,extraout_r1,1,iVar18);
    uVar22 = FUN_0100b594(iVar18);
    if (uVar6 == 0) {
      uVar6 = FUN_01040cb8((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),iVar18);
    }
  }
  if (uVar6 == 0) {
    uVar6 = FUN_01040cc0();
  }
  local_30 = (short)(ushort)bVar1 * 0x28;
  iVar18 = DAT_010411fc + local_30;
  local_2c = iVar16 * 0x14;
  local_34 = local_2c + iVar18;
  lVar23 = CONCAT44(local_34,uVar6);
  cVar20 = *(char *)(param_1 + 0x2c);
  if (cVar20 == '\0') {
LAB_010408c8:
    piVar8 = (int *)lVar23;
    if (piVar8 == (int *)0x0) {
      uVar22 = FUN_01040cb8(cVar20,(int)((ulonglong)lVar23 >> 0x20),local_34);
      uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
      piVar8 = (int *)uVar22;
      iVar18 = local_34;
      if (piVar8 == (int *)0x0) goto LAB_010408d6;
    }
  }
  else {
    if (uVar6 == 0) {
      FUN_01040cd6();
      lVar23 = FUN_01040cc0();
      if ((int)lVar23 == 0) {
        FUN_01040cda(0,(int)((ulonglong)lVar23 >> 0x20),*(undefined1 *)(param_1 + 1),0);
        lVar23 = (ulonglong)extraout_r1_00 << 0x20;
      }
    }
    piVar8 = (int *)lVar23;
    cVar20 = *(char *)(param_1 + 0x2c);
    if (cVar20 == '\0') goto LAB_010408c8;
    if (piVar8 == (int *)0x0) {
      uVar22 = FUN_01040cb8(iVar18,(int)((ulonglong)lVar23 >> 0x20),iVar18 + 0x14);
      uVar10 = (undefined4)((ulonglong)uVar22 >> 0x20);
      piVar8 = (int *)uVar22;
      if (piVar8 != (int *)0x0) goto LAB_010408dc;
LAB_010408d6:
      piVar8 = (int *)FUN_01040cce(0,uVar10,iVar18);
    }
  }
LAB_010408dc:
  piVar9 = (int *)(uint)*(byte *)(param_1 + 0x2d);
  cVar20 = piVar9 == (int *)0x0;
  if (!(bool)cVar20) {
    iVar18 = uVar19 * 0x14;
    local_38 = DAT_01041200 + iVar18;
    FUN_0100b698(local_38,uVar3,DAT_01041204 + uVar19 * 8,2);
    local_3c = iVar18 + DAT_01041208;
    FUN_0100b698(local_3c,uVar3,DAT_0104120c + uVar19 * 8,2);
    if ((piVar8 == (int *)0x0) &&
       (piVar8 = (int *)FUN_0101dcb0(uVar19,0,1,local_38), piVar8 == (int *)0x0)) {
      piVar8 = (int *)FUN_0101dcb0(uVar19,0,0,local_3c);
    }
    iVar13 = iVar18 + DAT_01041210;
    local_40 = uVar19 << 5;
    FUN_01040c80(DAT_01041214,local_40);
    FUN_0100b698(iVar13);
    iVar18 = iVar18 + DAT_01041218;
    FUN_01040c80(DAT_0104121c,local_40);
    FUN_0100b698(iVar18);
    piVar9 = *(int **)(DAT_01041220 + uVar19 * 4);
    local_40 = *piVar9;
    cVar20 = piVar8 == (int *)0x0;
    if ((bool)cVar20) {
      cVar20 = '\0';
      piVar9 = (int *)FUN_0100babe(uVar19,&local_40,1,iVar13);
      piVar8 = piVar9;
      if (piVar9 == (int *)0x0) {
        cVar20 = '\x01';
        piVar9 = (int *)FUN_0100babe(uVar19,&local_40,0,iVar18);
        piVar8 = piVar9;
        if (piVar9 == (int *)0x0) {
          FUN_010413fc(iVar13);
          FUN_010413fc(iVar18);
          iVar14 = *(int *)(DAT_01041224 + uVar19 * 4) + 0xf9;
          piVar9 = (int *)FUN_0100b704(iVar13,iVar14,4,4);
          cVar20 = piVar9 == (int *)0x0;
          if ((bool)cVar20) {
            cVar20 = '\0';
            piVar9 = (int *)FUN_0100b704(iVar18,iVar14,4,4);
          }
          piVar8 = piVar9;
          if (piVar9 == (int *)0x0) {
            FUN_0100b594(iVar13);
            uVar22 = FUN_0100b594(iVar18);
            uVar22 = FUN_01040cb8((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),local_38);
            cVar20 = (int)uVar22 == 0;
            if ((bool)cVar20) {
              uVar22 = FUN_01040cb8(0,(int)((ulonglong)uVar22 >> 0x20),iVar13);
            }
            piVar9 = (int *)uVar22;
            piVar8 = piVar9;
            if (piVar9 == (int *)0x0) {
              uVar22 = FUN_01040cce(0,(int)((ulonglong)uVar22 >> 0x20),local_3c);
              piVar9 = (int *)uVar22;
              piVar8 = piVar9;
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)FUN_01040cce(0,(int)((ulonglong)uVar22 >> 0x20),iVar18);
                piVar8 = piVar9;
              }
            }
          }
        }
      }
    }
  }
  FUN_01040c88(piVar9,*(undefined1 *)(param_1 + 1));
  uVar22 = CONCAT44(extraout_r1_01,piVar8);
  if ((cVar20 != '\0') && (uVar22 = CONCAT44(extraout_r1_01,piVar8), piVar8 == (int *)0x0)) {
    iVar18 = FUN_01009c88(iVar16,extraout_r1_01,0,iVar12);
    uVar24 = FUN_0100b594(iVar12);
    uVar10 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar22 = CONCAT44(uVar10,iVar18);
    if (iVar18 == 0) {
      uVar22 = FUN_01040c98((int)uVar24,uVar10,iVar12);
    }
  }
  iVar12 = DAT_01041228 + iVar15;
  if ((int)uVar22 == 0) {
    FUN_01040c80(DAT_0104122c,(short)(ushort)bVar1 * 0x30);
    FUN_0100b698(iVar12);
    iVar18 = FUN_010070c2(iVar16,1,iVar12);
    uVar24 = FUN_01009152(iVar16,1,iVar12);
    uVar10 = (undefined4)((ulonglong)uVar24 >> 0x20);
    uVar22 = CONCAT44(uVar10,iVar18);
    if (iVar18 == 0) {
      uVar22 = FUN_01040c98((int)uVar24,uVar10,iVar12);
    }
  }
  iVar15 = DAT_01041230 + iVar15;
  iVar12 = DAT_01041230;
  if ((int)uVar22 == 0) {
    FUN_01040c80(DAT_01041234,local_30);
    FUN_01041068();
    if (iVar16 == 0) {
      FUN_010140ac(0xd,0,iVar15);
      uVar10 = 0xc;
LAB_01040ad6:
      uVar10 = FUN_010140ac(uVar10,0,iVar15);
    }
    else {
      uVar10 = 0;
      if (iVar16 == 1) {
        FUN_010140ac(0xf,0,iVar15);
        uVar10 = 0xe;
        goto LAB_01040ad6;
      }
    }
    if (uVar17 == 2) {
      uVar10 = 4;
LAB_01040af6:
      uVar10 = FUN_010140ac(uVar10,0,iVar15);
    }
    else if (uVar17 == 3) {
      uVar10 = 7;
      goto LAB_01040af6;
    }
    uVar24 = FUN_0100b594(iVar15);
    uVar22 = CONCAT44((int)((ulonglong)uVar24 >> 0x20),uVar10);
    iVar12 = (int)uVar24;
  }
  iVar18 = (int)uVar22;
  if (iVar18 == 0) {
    iVar18 = FUN_01040c98(iVar12,(int)((ulonglong)uVar22 >> 0x20),iVar15);
  }
  if (iVar18 == 0) {
    iVar18 = FUN_01040ca0();
  }
  lVar23 = CONCAT44(local_30,iVar18);
  iVar12 = DAT_01041238 + local_30;
  if (*(char *)(param_1 + 0x2c) == '\0') {
LAB_01040b5c:
    iVar15 = (int)lVar23;
    if (iVar15 != 0) goto LAB_01040b74;
    iVar15 = FUN_01040c98(local_2c,(int)((ulonglong)lVar23 >> 0x20),iVar12 + local_2c);
    iVar12 = local_34;
  }
  else {
    if (iVar18 == 0) {
      FUN_01040cd6();
      lVar23 = FUN_01040ca0();
      if ((int)lVar23 == 0) {
        FUN_01040cda(0,(int)((ulonglong)lVar23 >> 0x20),*(undefined1 *)(param_1 + 1),0);
        lVar23 = (ulonglong)extraout_r1_02 << 0x20;
      }
    }
    iVar15 = (int)lVar23;
    if (*(char *)(param_1 + 0x2c) == '\0') goto LAB_01040b5c;
    if (iVar15 != 0) goto LAB_01040b74;
    iVar15 = FUN_01040c98(*(char *)(param_1 + 0x2c),(int)((ulonglong)lVar23 >> 0x20),iVar12 + 0x14);
  }
  if (iVar15 == 0) {
    iVar15 = FUN_01040c9a(0,6,iVar12);
  }
LAB_01040b74:
  if (iVar15 == 0) {
    bVar21 = *(char *)(iVar4 + 0x3c + (uint)*(byte *)(param_1 + 1) * 0xbc) == '\x02';
    FUN_0102db6a(uVar17,1,bVar21);
    FUN_0102db6a(uVar17,1,bVar21 + '\x01');
    puVar5 = DAT_01041240;
    iVar12 = DAT_0104123c;
    iVar18 = *(int *)(DAT_0104123c + uVar19 * 4);
    uVar10 = *(undefined4 *)(iVar18 + 4);
    *(undefined4 *)(iVar18 + 4) = 1;
    if (((uint)*puVar5 & 1 << (uVar19 + 4 & 0xff)) != 0) {
      iVar18 = DAT_01041244 + iVar11;
      FUN_0100b698(iVar18,*(undefined1 *)(DAT_010411bc + uVar19),
                   (short)(ushort)bVar2 * 0x104 + DAT_01041248,0x41);
      iVar15 = FUN_01031a30(*(undefined4 *)(iVar12 + uVar19 * 4),1,0,iVar18);
      FUN_0100b594(iVar18);
      iVar11 = DAT_0104124c + iVar11;
      if (iVar15 == 0) {
        FUN_01040c80(DAT_01041250,(short)(ushort)bVar2 * 0x120);
        FUN_01041068();
        iVar15 = *(int *)(iVar12 + uVar19 * 4);
        FUN_01031a30(iVar15,*(undefined4 *)(iVar15 + 8),
                     -(uint)(*(char *)(iVar15 + 0x26) == '\0') >> 0x1f,iVar11);
        FUN_0104106e();
        iVar15 = dma_channel_cleanup(uVar19,7,iVar18);
        if (iVar15 == 0) {
          iVar15 = dma_channel_cleanup(uVar19,8,iVar11);
        }
      }
      *(char *)(*(int *)(DAT_01041254 + uVar19 * 4) + 0x1bc) = (char)iVar16;
    }
    *(undefined4 *)(*(int *)(iVar12 + uVar19 * 4) + 4) = uVar10;
  }
  return iVar15;
}

