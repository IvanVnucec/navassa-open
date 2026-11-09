
undefined4 FUN_010278dc(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  char cVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar17;
  undefined4 extraout_s1;
  undefined8 uVar16;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar13 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(param_1[1] + 0x328),(byte)(in_fpscr >> 0x15) & 3);
  fVar18 = fVar13 * DAT_01027ba8;
  fVar13 = fVar13 * DAT_01027bac;
  uVar7 = 0;
  pfVar9 = (float *)(param_1 + 0xb5);
  do {
    puVar10 = (undefined4 *)(param_1[1] + uVar7 * 8);
    fVar2 = (float)FUN_01014570(*puVar10,puVar10[1]);
    pfVar9[uVar7] = fVar2 / fVar18;
    puVar10 = (undefined4 *)(param_1[1] + 200 + uVar7 * 8);
    fVar2 = (float)FUN_01014570(*puVar10,puVar10[1]);
    (pfVar9 + uVar7)[0x19] = fVar2 / fVar18;
    puVar10 = (undefined4 *)(param_1[1] + 400 + uVar7 * 8);
    iVar3 = uVar7 + 0xe7;
    fVar2 = (float)FUN_0101f1f8(*puVar10,puVar10[1]);
    param_1[iVar3] = (int)(fVar2 / fVar13);
    iVar5 = param_1[1] + uVar7 * 8;
    uVar7 = uVar7 + 1;
    fVar2 = (float)FUN_0101f1f8(*(undefined4 *)(iVar5 + 600),*(undefined4 *)(iVar5 + 0x25c));
    (param_1 + iVar3)[0x19] = (int)(fVar2 / fVar13);
  } while (uVar7 < 0x19);
  fVar13 = (float)FUN_01014570(*(undefined4 *)(param_1[1] + 800),*(undefined4 *)(param_1[1] + 0x324)
                              );
  param_1[0x119] = (int)(fVar13 * DAT_01027bb0);
  uVar7 = 1;
  fVar13 = *pfVar9;
  do {
    fVar18 = (float)param_1[uVar7 + 0xb5] + (float)param_1[uVar7 + 0xce] +
             (float)param_1[uVar7 + 0xe7] * 2.0;
    if ((int)((uint)(fVar13 < fVar18) << 0x1f) < 0) {
      fVar13 = fVar18;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x17);
  puVar8 = param_2 + 100;
  *puVar8 = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x6a] = 0;
  param_2[0x69] = 0;
  param_2[0x6b] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  fVar18 = (float)param_1[0x119] * DAT_01027bb4;
  uVar7 = 1;
  do {
    fVar20 = pfVar9[uVar7];
    fVar21 = (pfVar9 + uVar7)[0x19];
    fVar17 = fVar20 + fVar21;
    fVar2 = (float)param_1[uVar7 + 0xe7] * 2.0;
    fVar19 = fVar17 + fVar2;
    param_2[uVar7 + 0x4b] = (param_1 + uVar7 + 0xe7)[0x19];
    fVar14 = 1.0;
    if ((fVar19 != 0.0) && (fVar14 = (fVar17 - fVar2) / fVar19, fVar14 < 0.0 != NAN(fVar14))) {
      fVar14 = fVar14 * -1.0;
    }
    uVar15 = FUN_01036d04(fVar14);
    fVar20 = fVar20 - fVar21;
    param_2[uVar7] = uVar15;
    param_2[uVar7 + 0x19] = fVar20 * 0.5;
    fVar2 = (float)param_2[uVar7 + 0x19];
    cVar11 = fVar2 < 0.0;
    param_2[uVar7 + 0x32] = fVar19 * -0.5;
    if (fVar2 == 0.0 || (bool)cVar11 != NAN(fVar2)) {
      fVar2 = fVar2 * -1.0;
    }
    iVar3 = FUN_01027de6(fVar2,fVar20,param_2[0x70]);
    uVar15 = extraout_s0;
    if (cVar11 != '\0') {
      uVar15 = extraout_s2;
    }
    param_2[0x70] = uVar15;
    uVar16 = FUN_01027ddc(*(undefined4 *)(iVar3 + 100),extraout_s1,param_2[0x6f]);
    uVar15 = (undefined4)uVar16;
    if (cVar11 != '\0') {
      uVar15 = extraout_s2_00;
    }
    param_2[0x6f] = uVar15;
    iVar3 = *param_1;
    iVar5 = param_1[2];
    FUN_01027ddc(fVar19 / fVar13,(int)((ulonglong)uVar16 >> 0x20),*(undefined4 *)(iVar3 + 0xc));
    if (cVar11 != '\0') {
      cVar11 = *(float *)(iVar3 + 8) < fVar19;
    }
    uVar4 = (uint)(cVar11 != '\0');
    if ((((*(int *)(iVar5 + 0x210) == 0) && (cVar11 = param_3 + -2 < 0, param_3 != 2)) ||
        (fVar2 = extraout_s1_00, *(int *)(iVar3 + 0x8c) != 0)) &&
       (uVar4 = FUN_01027ddc(fVar18 * *(float *)(iVar3 + uVar7 * 4 + 0x28),extraout_s1_00,
                             fVar19 * DAT_01027dcc), fVar2 = extraout_s1_01, cVar11 != '\0')) {
LAB_01027b7c:
      uVar4 = 0;
    }
    else {
      uVar1 = uVar4;
      if (uVar4 != 0) {
        uVar1 = param_3 - 1;
      }
      cVar11 = (int)uVar1 < 0;
      if (uVar4 != 0 && param_3 != 1) {
        FUN_01027de6((((float)param_2[uVar7] + -1.0) * ((float)param_2[uVar7] + -1.0) +
                     ((float)param_2[uVar7 + 0x4b] / fVar19) *
                     ((float)param_2[uVar7 + 0x4b] / fVar19)) * 0.25,fVar2,
                     *(undefined4 *)(iVar3 + 0xa0));
        fVar2 = extraout_s1_02;
        if (cVar11 == '\0') goto LAB_01027b7c;
        uVar4 = 1;
      }
    }
    param_2[0x68] = uVar4 + param_2[0x68];
    uVar4 = *puVar8 | uVar4 << (uVar7 & 0xff);
    cVar11 = (int)uVar4 < 0;
    *puVar8 = uVar4;
    iVar3 = FUN_0102898c(fVar2 / fVar19,*(undefined4 *)(*param_1 + 0x10));
    if (cVar11 == '\0') {
      iVar3 = FUN_0102898c(extraout_s0_00 * -1.0);
      if (cVar11 == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = -1;
      }
      iVar6 = 0;
    }
    else {
      iVar5 = 1;
      iVar6 = iVar3;
      if (iVar3 != 0) {
        iVar6 = 1;
      }
    }
    param_2[0x6a] = iVar6 + param_2[0x6a];
    param_2[0x65] = iVar6 << (uVar7 & 0xff) | param_2[0x65];
    if ((iVar3 == 0) || (iVar5 != -1)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    param_2[0x66] = iVar3 << (uVar7 & 0xff) | param_2[0x66];
    param_2[0x69] = iVar3 + param_2[0x69];
    iVar3 = -((int)-(uint)(iVar5 == 0) >> 0x1f);
    uVar4 = uVar7 & 0xff;
    uVar7 = uVar7 + 1;
    param_2[0x6b] = iVar3 + param_2[0x6b];
    param_2[0x67] = iVar3 << uVar4 | param_2[0x67];
    if (0x16 < uVar7) {
      *param_2 = 0x3f800000;
      param_2[0x4b] = 0;
      param_2[0x32] = 0;
      param_2[0x19] = 0;
      uVar7 = 0x17;
      do {
        puVar10 = param_2 + uVar7;
        *puVar10 = 0x3f800000;
        puVar10[0x4b] = 0;
        uVar7 = uVar7 + 1;
        puVar10[0x32] = 0;
        puVar10[0x19] = 0;
      } while (uVar7 < 0x19);
      if (param_3 == 1) {
        uVar7 = 1;
        do {
          if ((int)((uint)(((float)param_1[uVar7 + 0xb5] + (float)param_1[uVar7 + 0xce] +
                           (float)param_1[uVar7 + 0xe7] * 2.0) / ((float)param_2[0x6f] * -2.0) <
                          DAT_01027dd0) << 0x1f) < 0) {
            *puVar8 = *puVar8 & ~(1 << (uVar7 & 0xff));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x18);
      }
      fVar13 = *(float *)(*param_1 + 0x20);
      fVar18 = (float)param_2[0x70] * *(float *)(*param_1 + 0x24);
      uVar7 = 1;
      do {
        bVar12 = (int)((*puVar8 >> (uVar7 & 0xff)) << 0x1f) < 0;
        if (bVar12) {
          bVar12 = (float)param_2[uVar7 + 0x32] < (float)param_2[0x6f] * fVar13;
        }
        param_2[0x6c] = (uint)bVar12 << (uVar7 & 0xff) | param_2[0x6c];
        bVar12 = (int)(((uint)param_2[0x65] >> (uVar7 & 0xff)) << 0x1f) < 0;
        if (bVar12) {
          bVar12 = fVar18 < (float)param_2[uVar7 + 0x19];
        }
        param_2[0x6d] = (uint)bVar12 << (uVar7 & 0xff) | param_2[0x6d];
        bVar12 = (int)(((uint)param_2[0x66] >> (uVar7 & 0xff)) << 0x1f) < 0;
        if (bVar12) {
          bVar12 = (float)param_2[uVar7 + 0x19] < fVar18 * -1.0;
        }
        uVar4 = uVar7 & 0xff;
        uVar7 = uVar7 + 1;
        param_2[0x6e] = (uint)bVar12 << uVar4 | param_2[0x6e];
      } while (uVar7 < 0x18);
      uVar7 = 2;
      fVar13 = DAT_01027dd4;
      do {
        uVar4 = uVar7 + 1;
        fVar13 = fVar13 + (float)param_1[uVar7 + 0xb5] + (float)param_1[uVar7 + 0xce] +
                 (float)param_1[uVar7 + 0xe7] + (float)param_1[uVar7 + 0xe7];
        uVar7 = uVar4;
      } while (uVar4 < 0x18);
      iVar5 = param_1[2];
      iVar3 = (uint)(*pfVar9 + (float)param_1[0xb6] + (float)param_1[0xcf] + (float)param_1[0xe8] +
                     (float)param_1[0xe8] < fVar13 * DAT_01027dd8) << 0x1f;
      if (iVar3 < 0) {
        *(undefined1 *)(iVar5 + 0x510) = 1;
      }
      if (-1 < iVar3) {
        *(undefined1 *)(iVar5 + 0x510) = 0;
      }
      *(uint *)(param_1[3] + 4) = *puVar8;
      *(undefined4 *)(param_1[3] + 8) = param_2[0x65];
      *(undefined4 *)(param_1[3] + 0xc) = param_2[0x66];
      *(undefined4 *)(param_1[3] + 0x10) = param_2[0x67];
      *(undefined4 *)(param_1[3] + 0x14) = param_2[0x6c];
      *(undefined4 *)(param_1[3] + 0x18) = param_2[0x6d];
      *(undefined4 *)(param_1[3] + 0x1c) = param_2[0x6e];
      return param_4;
    }
  } while( true );
}

