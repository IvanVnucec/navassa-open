
uint FUN_01026684(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  undefined8 uVar15;
  undefined8 uVar16;
  
  iVar9 = 0;
  do {
    iVar8 = param_2 + iVar9 * 4;
    *(undefined4 *)(iVar8 + 0x34) = 0;
    iVar10 = 0;
    *(undefined4 *)(param_2 + iVar9 * 4) = 0;
    do {
      uVar15 = FUN_010200bc(iVar9);
      uVar15 = FUN_0101f250((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_01026ba0,DAT_01026ba4);
      uVar16 = FUN_010200bc(iVar10);
      uVar15 = FUN_0101f250((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                            (int)((ulonglong)uVar15 >> 0x20));
      FUN_0102035c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0,DAT_01026ba8);
      uVar2 = FUN_0101f3f4();
      fVar13 = (float)FUN_01038850(uVar2);
      fVar14 = (float)FUN_01038854(uVar2);
      pfVar3 = (float *)(param_1 + iVar10 * 4);
      pfVar7 = (float *)(param_1 + 0x34 + iVar10 * 4);
      *(float *)(iVar8 + 0x34) = (*pfVar3 * fVar13 - *pfVar7 * fVar14) + *(float *)(iVar8 + 0x34);
      pfVar6 = (float *)(param_2 + iVar9 * 4);
      pfVar4 = (float *)(param_2 + iVar9 * 4);
      iVar10 = iVar10 + 1;
      *pfVar6 = *pfVar3 * fVar14 + *pfVar7 * fVar13 + *pfVar4;
    } while (iVar10 < 0xd);
    *(float *)(iVar8 + 0x34) = *(float *)(iVar8 + 0x34) / 13.0;
    iVar9 = iVar9 + 1;
    *pfVar6 = *pfVar4 / 13.0;
  } while (iVar9 < 0xd);
  iVar9 = 0;
  fVar13 = DAT_01026824;
  fVar14 = DAT_01026828;
  do {
    cVar12 = SBORROW4(iVar9 - 3U,7);
    cVar11 = iVar9 + -10 < 0;
    if (iVar9 - 3U < 7) {
      FUN_01026848(fVar13,fVar14,0);
      if (cVar11 == cVar12) {
LAB_01026798:
        cVar11 = false;
      }
      else {
        cVar11 = extraout_s3 < extraout_s2;
        cVar12 = NAN(extraout_s3) || NAN(extraout_s2);
        if ((bool)cVar11) goto LAB_01026798;
      }
      uVar15 = FUN_01026840();
      if (cVar11 == cVar12) {
LAB_010267aa:
        uVar5 = 1;
LAB_010267ac:
        return uVar5 ^ 1;
      }
      bVar1 = extraout_s3_00 < extraout_s2_00;
      fVar13 = extraout_s0;
      fVar14 = extraout_s1;
    }
    else {
      FUN_01026848(fVar13,fVar14,0);
      if (cVar11 == cVar12) {
LAB_01026806:
        cVar11 = false;
      }
      else {
        cVar11 = extraout_s3_03 < extraout_s1_01;
        cVar12 = NAN(extraout_s3_03) || NAN(extraout_s1_01);
        if ((bool)cVar11) goto LAB_01026806;
      }
      uVar15 = FUN_01026840();
      if (cVar11 == cVar12) goto LAB_010267aa;
      bVar1 = extraout_s3_04 < extraout_s1_02;
      fVar13 = extraout_s0_01;
      fVar14 = extraout_s1_02;
    }
    while( true ) {
      if ((int)((uint)bVar1 << 0x1f) < 0) goto LAB_010267aa;
      iVar8 = (int)((ulonglong)uVar15 >> 0x20);
      uVar5 = (uint)uVar15;
      if ((uVar5 != 0) || (iVar9 = iVar8 + 1, 0xc < iVar9)) goto LAB_010267ac;
      cVar12 = SBORROW4(iVar9,6);
      cVar11 = iVar8 + -5 < 0;
      if (iVar9 != 6) break;
      fVar13 = (float)FUN_01026848();
      if (cVar11 == cVar12) {
LAB_010267da:
        cVar11 = false;
      }
      else {
        cVar11 = extraout_s3_01 < fVar13;
        cVar12 = NAN(extraout_s3_01) || NAN(fVar13);
        if ((bool)cVar11) goto LAB_010267da;
      }
      uVar15 = FUN_01026848();
      if (cVar11 == cVar12) goto LAB_010267aa;
      bVar1 = extraout_s3_02 < extraout_s0_00;
      fVar13 = extraout_s0_00;
      fVar14 = extraout_s1_00;
    }
  } while( true );
}

