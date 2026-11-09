
uint FUN_01025e1c(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  byte bVar18;
  bool bVar19;
  char cVar20;
  uint in_fpscr;
  float extraout_s0;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar24;
  float fVar25;
  float extraout_s1_01;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float fVar30;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 extraout_s5_01;
  float unaff_s16;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  
  *(undefined1 *)(param_1 + 0x8c) = 0;
  iVar16 = *(int *)(param_1 + 0x18) + 0x68;
  pfVar17 = (float *)(*(int *)(param_1 + 0x18) + 4);
  iVar14 = 1;
  do {
    iVar4 = *(int *)(param_1 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0x60 + iVar14 * 4);
    *(undefined4 *)(iVar4 + 0x60 + iVar14 * 4) = *(undefined4 *)(iVar4 + 0xc0 + iVar14 * -4);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc0 + iVar14 * -4) = uVar8;
    iVar4 = *(int *)(param_1 + 8) + 0x120;
    uVar8 = *(undefined4 *)(iVar4 + iVar14 * 4);
    *(undefined4 *)(iVar4 + iVar14 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 8) + iVar14 * -4 + 0x180);
    iVar4 = iVar14 + 1;
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar14 * -4 + 0x180) = uVar8;
    iVar14 = iVar4;
  } while (iVar4 < 0xc);
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  uVar5 = 1;
  iVar14 = param_1 + 0x8d;
  iVar4 = param_1 + 0x240;
  iVar15 = param_1 + 0x300;
  do {
    *(byte *)(iVar14 + uVar5) = (byte)(*(uint *)(param_1 + 0x14) >> (uVar5 & 0xff)) & 1;
    puVar1 = (undefined4 *)
             FUN_010264c0(DAT_01025ff4,iVar4 + uVar5 * 4,*(int *)(param_1 + 8),uVar5,
                          *(int *)(param_1 + 8) + uVar5 * 4);
    *puVar1 = extraout_s1;
    uVar38 = FUN_010264c0(puVar1,iVar15 + uVar5 * 4);
    puVar1 = (undefined4 *)((ulonglong)uVar38 >> 0x20);
    *puVar1 = extraout_s1_00;
    *(byte *)((param_1 + 0xbd) - uVar5) = (byte)(*(uint *)(param_1 + 0x10) >> (uVar5 & 0xff)) & 1;
    fVar24 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 8) + 0x60 + uVar5 * 4),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(float *)((int)uVar38 + 0x60) = fVar24 * extraout_s0;
    puVar10 = (undefined4 *)(*(int *)(param_1 + 8) + 0x120 + uVar5 * 4);
    uVar5 = uVar5 + 1;
    fVar24 = (float)VectorSignedToFloat(*puVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar24 = fVar24 * extraout_s0;
    puVar1[0x18] = fVar24;
  } while ((int)uVar5 < 0x18);
  iVar2 = 1;
  uVar5 = DAT_0102683c;
  uVar6 = DAT_0102683c;
  do {
    uVar5 = uVar5 >> 1;
    uVar6 = uVar6 >> 1;
    bVar19 = -1 < (int)(uVar5 << 0x1f);
    if (bVar19) {
      puVar10 = (undefined4 *)0x0;
    }
    if (bVar19) {
      *(char *)(iVar14 + iVar2) = (char)puVar10;
    }
    if (-1 < (int)(uVar6 << 0x1f)) {
      puVar10 = (undefined4 *)0x0;
      *(undefined1 *)((param_1 + 0xbd) - iVar2) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  iVar2 = 0;
  do {
    iVar3 = -1;
LAB_01025fe0:
    iVar13 = iVar3;
    iVar2 = iVar2 + 1;
    if (0x2f < iVar2) {
      uVar5 = 0;
      uVar9 = 0;
      uVar6 = 2;
      do {
        cVar20 = *(char *)(iVar14 + uVar6);
        bVar19 = cVar20 != '\0';
        if (bVar19) {
          cVar20 = *(char *)((param_1 + 0xbd) - uVar6);
        }
        if (bVar19 && cVar20 != '\0') {
          uVar9 = uVar9 | 1 << (uVar6 & 0xff);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x18);
      iVar3 = 0;
      uVar11 = 0x100;
      uVar6 = 0x80;
      iVar2 = 0x17;
      do {
        if ((uVar9 & uVar6) != 0) {
          uVar5 = uVar6 | uVar5;
          iVar3 = iVar3 + 1;
        }
        if (iVar3 != 0xc) {
          if ((uVar9 & uVar11) != 0) {
            uVar5 = uVar5 | uVar11;
            iVar3 = iVar3 + 1;
            if (iVar3 == 0xc) goto LAB_01026058;
          }
          uVar6 = (int)uVar6 >> 1;
          uVar11 = uVar11 << 1;
        }
LAB_01026058:
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (iVar3 < 4) {
        cVar20 = *(char *)(param_1 + 0x8e);
        bVar19 = cVar20 != '\0';
        if (bVar19) {
          cVar20 = *(char *)(param_1 + 0xbc);
        }
        if (bVar19 && cVar20 != '\0') {
          uVar5 = uVar5 | 1;
        }
      }
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 0x8c) = 2;
        return param_3;
      }
      uVar6 = 1;
      iVar2 = param_1;
      fVar25 = DAT_010261b4;
      fVar29 = DAT_010261b4;
      fVar26 = DAT_010261b4;
      fVar31 = DAT_010261b4;
      fVar32 = DAT_010261b4;
      fVar33 = DAT_010261b4;
      fVar37 = DAT_010261b4;
      fVar30 = DAT_010261b4;
      fVar24 = DAT_010261b4;
      fVar34 = DAT_010261b4;
      do {
        bVar19 = *(char *)(iVar14 + uVar6) == '\0';
        iVar3 = 0x30 - uVar6;
        if (!bVar19) {
          iVar2 = -uVar6;
          bVar19 = *(char *)(param_1 + 0xbd + iVar2) == '\0';
        }
        if (!bVar19) {
          fVar21 = *(float *)(iVar15 + iVar3 * 4);
          fVar27 = *(float *)(iVar4 + iVar3 * 4);
          iVar13 = param_1 + uVar6 * 4;
          fVar22 = (float)FUN_01038630(*(float *)(iVar13 + 0x300) / *(float *)(iVar13 + 0x240));
          fVar21 = (float)FUN_01038630(fVar21 / fVar27);
          fVar35 = *(float *)(iVar13 + 0x240) * *(float *)(iVar13 + 0x240) +
                   *(float *)(iVar13 + 0x300) * *(float *)(iVar13 + 0x300);
          fVar28 = *(float *)(iVar4 + iVar3 * 4);
          fVar27 = *(float *)(iVar15 + iVar3 * 4);
          fVar36 = fVar28 * fVar28 + fVar27 * fVar27;
          fVar27 = (float)FUN_01036d04(fVar35);
          fVar28 = (float)FUN_01036d04(fVar36);
          *(float *)(iVar16 + uVar6 * 4) = (fVar21 - fVar22) * 0.5;
          FUN_01036d04(fVar35 * fVar36);
          fVar23 = (float)FUN_01036d04();
          FUN_01036d04(fVar35);
          FUN_01036d04(fVar36);
          pfVar17[uVar6] = fVar23;
          *(float *)(iVar13 + 0xc0) = (fVar21 + fVar22) * 0.5;
          if ((int)((uVar5 >> (uVar6 & 0xff)) << 0x1f) < 0) {
            fVar24 = fVar24 + 1.0;
            fVar25 = fVar25 + DAT_010261b4;
            fVar28 = fVar28 / pfVar17[uVar6];
            fVar27 = fVar27 / pfVar17[uVar6];
            fVar31 = fVar21 + fVar22 + fVar31;
            fVar30 = fVar27 + fVar28 + fVar30;
            fVar23 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
            fVar35 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
            fVar37 = fVar23 * fVar27 + fVar35 * fVar28 + fVar37;
            fVar27 = (float)VectorSignedToFloat(uVar6 * uVar6 * 2,(byte)(in_fpscr >> 0x15) & 3);
            fVar28 = (float)VectorSignedToFloat(uVar6 << 1,(byte)(in_fpscr >> 0x15) & 3);
            fVar29 = fVar27 + fVar29;
            fVar26 = fVar28 + fVar26;
            fVar32 = fVar23 * fVar22 + fVar23 * fVar21 + fVar32;
            fVar33 = fVar27 + fVar33;
            fVar34 = fVar34 + 1.0;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 0x18);
      in_fpscr = in_fpscr & 0xfffffff;
      uVar5 = in_fpscr | (uint)(fVar24 == 0.0) << 0x1e;
      if (((byte)(uVar5 >> 0x1e) != 0) || (uVar5 = in_fpscr, fVar24 < 6.0)) {
        uVar8 = 1;
        in_fpscr = uVar5;
      }
      else {
        uVar8 = 0;
      }
      *(undefined4 *)(param_1 + 0x20) = uVar8;
      pfVar12 = (float *)(param_1 + 0x3c0);
      if (*(int *)(param_1 + 0x20) == 1) {
        FUN_010264a8(fVar30,0);
        uVar8 = extraout_s5;
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar34 * 2.0 == 0.0) << 0x1e;
        bVar18 = (byte)(in_fpscr >> 0x1e);
        uVar38 = FUN_010264a8(fVar30,0);
        fVar30 = (float)((ulonglong)uVar38 >> 0x20);
        uVar8 = extraout_s5_00;
        if (bVar18 == 0) {
          uVar38 = FUN_010264b6((int)uVar38,fVar30,fVar29 - (fVar25 * fVar25) / fVar30);
          fVar29 = (float)((ulonglong)uVar38 >> 0x20);
          if (bVar18 == 0) {
            *pfVar12 = (fVar37 - (fVar25 * (float)uVar38) / fVar29) / extraout_s2_01;
          }
          uVar38 = FUN_010264b6((float)uVar38,fVar29,fVar33 - (fVar26 * fVar26) / fVar29);
          fVar29 = (float)((ulonglong)uVar38 >> 0x20);
          if (bVar18 == 0) {
            *(float *)(param_1 + 0x3c4) = (fVar32 - (fVar26 * fVar31) / fVar29) / extraout_s2_02;
          }
          *(float *)(param_1 + 0x3c8) = ((float)uVar38 - *pfVar12 * fVar25) / fVar29;
          *(float *)(param_1 + 0x3cc) = (fVar31 - *(float *)(param_1 + 0x3c4) * fVar26) / fVar29;
          uVar8 = extraout_s5_01;
        }
      }
      iVar2 = param_1 + 0x3d0;
      if (*(char *)(param_1 + 5) == '\0') {
        **(undefined4 **)(param_1 + 0x18) = uVar8;
LAB_01026354:
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
      else {
        FUN_010264d0(uVar8,*pfVar12,*(undefined4 *)(param_1 + 0x3c4),
                     *(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3cc),
                     *(undefined4 **)(param_1 + 0x18),iVar2,*(undefined4 *)(param_1 + 0x20));
        iVar3 = FUN_01026684(iVar2,param_1 + 0x24);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x8c) = 1;
          goto LAB_01026354;
        }
      }
      **(undefined4 **)(param_1 + 0x18) = 0;
      iVar3 = 1;
      do {
        iVar13 = 0x30 - iVar3;
        if (*(char *)(iVar14 + iVar3) == '\0') {
          if (*(char *)(iVar14 + iVar13) != '\0') goto LAB_01026378;
        }
        else if (*(char *)(iVar14 + iVar13) == '\0') {
LAB_01026378:
          if (*(char *)(iVar14 + iVar3) == '\0') {
            if (*(char *)(iVar14 + iVar13) != '\0') {
              fVar24 = *(float *)(iVar4 + iVar13 * 4);
              fVar25 = *(float *)(iVar15 + iVar13 * 4);
            }
          }
          else {
            fVar24 = *(float *)(iVar4 + iVar3 * 4);
            fVar25 = -*(float *)(iVar15 + iVar3 * 4);
          }
          fVar29 = (float)FUN_01038630(fVar25 / fVar24);
          *(float *)(iVar16 + iVar3 * 4) = fVar29;
          fVar26 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
          bVar19 = *(char *)(iVar14 + iVar3) == '\0';
          if (bVar19) {
            fVar31 = 1.0 - fVar26 * *pfVar12;
          }
          else {
            fVar31 = fVar26 * *pfVar12 + 1.0;
          }
          fVar26 = *(float *)(param_1 + 0x3cc) + fVar26 * *(float *)(param_1 + 0x3c4);
          if (bVar19) {
            if (*(char *)(iVar14 + iVar13) != '\0') {
              fVar29 = fVar29 - fVar26;
              goto LAB_01026408;
            }
          }
          else {
            fVar29 = fVar29 + fVar26;
LAB_01026408:
            *(float *)(iVar16 + iVar3 * 4) = fVar29;
          }
          fVar29 = (float)FUN_01036d04(fVar24 * fVar24 + fVar25 * fVar25);
          pfVar17[iVar3] = fVar29 * (1.0 / fVar31);
        }
        iVar3 = iVar3 + 1;
        if (0x17 < iVar3) {
          FUN_01026854(*(undefined4 *)(param_1 + 0x18),iVar14,param_1 + 0xc0,param_1 + 0x180,iVar2,
                       *(undefined4 *)(param_1 + 0x1c));
          iVar14 = 0;
          do {
            pfVar12 = pfVar17 + iVar14;
            fVar25 = *pfVar12;
            fVar24 = 1.0;
            if (fVar25 != 0.0) {
              fVar24 = 1.0 / fVar25;
            }
            iVar14 = iVar14 + 1;
            *pfVar12 = fVar24;
          } while (iVar14 < 0x19);
          if ((param_3 & 0xff) == 0) {
            fVar24 = *pfVar17;
            iVar14 = 0;
            do {
              pfVar12 = pfVar17 + iVar14;
              pfVar7 = pfVar17 + iVar14;
              iVar14 = iVar14 + 1;
              *pfVar7 = *pfVar12 / fVar24;
            } while (iVar14 < 0x19);
          }
          return param_3;
        }
      } while( true );
    }
  } while (iVar2 == 0 || iVar2 == 0x18);
  iVar3 = iVar13;
  if (*(char *)(iVar14 + iVar2) != '\0') {
    iVar3 = param_1 + iVar2 * 4;
    cVar20 = iVar13 == 0;
    fVar29 = *(float *)(iVar3 + 0x240);
    fVar25 = *(float *)(iVar3 + 0x300);
    fVar25 = fVar29 * fVar29 + fVar25 * fVar25;
    iVar3 = iVar2;
    if (iVar13 < 0) {
      FUN_010264b6(fVar24);
      fVar24 = fVar25;
      unaff_s16 = DAT_01025ff8;
      if (cVar20 == '\0') {
        unaff_s16 = extraout_s1_01 / extraout_s2;
      }
    }
    else {
      uVar38 = FUN_010264b6(fVar24);
      fVar29 = DAT_01025ff8;
      if (cVar20 == '\0') {
        fVar29 = (float)((ulonglong)uVar38 >> 0x20) / extraout_s2_00;
      }
      fVar24 = (float)FUN_01036d04(fVar25 / (float)uVar38);
      fVar26 = (float)VectorSignedToFloat((iVar2 - iVar13) * (iVar2 - iVar13),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar26 = ((fVar24 + -1.0) * (fVar24 + -1.0) + (fVar29 - unaff_s16) * (fVar29 - unaff_s16)) /
               fVar26;
      uVar5 = in_fpscr & 0xfffffff | (uint)(fVar26 < DAT_01025ffc) << 0x1f;
      in_fpscr = uVar5 | (uint)(NAN(fVar26) || NAN(DAT_01025ffc)) << 0x1c;
      fVar24 = fVar25;
      unaff_s16 = fVar29;
      if ((byte)(uVar5 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        *(undefined1 *)(iVar14 + iVar13) = 0;
        *(undefined1 *)(iVar14 + iVar2) = 0;
      }
    }
  }
  goto LAB_01025fe0;
}

