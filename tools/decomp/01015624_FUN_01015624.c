
undefined4 FUN_01015624(uint param_1,int param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  int unaff_r5;
  int unaff_r7;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 unaff_d8;
  float fVar13;
  
  fVar13 = *(float *)(param_2 + 0x38);
  fVar2 = (float)FUN_01014570(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
  fVar5 = DAT_010159e4;
  fVar7 = DAT_010159e0;
  fVar6 = DAT_010159dc;
  fVar11 = DAT_010159d4;
  fVar9 = (float)((ulonglong)unaff_d8 >> 0x20);
  fVar12 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(param_2 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar2 / fVar12;
  if (param_1 < 2) {
    unaff_r7 = 0;
  }
  fVar2 = fVar2 / DAT_010159c4;
  if (param_1 >= 2) {
    if (param_1 == 3 || param_1 == 2) {
      unaff_r7 = 1;
    }
    else if (param_1 == 4) {
      unaff_r7 = 2;
    }
  }
  cVar1 = *(char *)(param_2 + 0x45);
  if (cVar1 == '\x06') {
    unaff_r5 = 0;
  }
  else if (cVar1 == '\b') {
    unaff_r5 = 1;
  }
  else if (cVar1 == '\n') {
    unaff_r5 = 2;
  }
  pfVar3 = (float *)(&DAT_01015a3c + unaff_r5 * 0xc + unaff_r7 * 0x48);
  if (*(char *)(param_2 + 0x22) == '\x01') {
    fVar9 = fVar2 * fVar2 * *pfVar3 + pfVar3[1] * fVar2;
    fVar2 = pfVar3[2];
  }
  else {
    if (*(char *)(param_2 + 0x22) != '\a') goto LAB_010156e8;
    fVar9 = fVar2 * fVar2 * pfVar3[9] + pfVar3[10] * fVar2;
    fVar2 = pfVar3[0xb];
  }
  fVar9 = (fVar9 + fVar2) * DAT_010159c8;
LAB_010156e8:
  fVar4 = (fVar13 / DAT_010159d0) * DAT_010159d4;
  fVar2 = 1.0 / (fVar4 * (fVar13 / (fVar9 * DAT_010159cc)) * fVar12);
  fVar10 = DAT_010159dc / ((fVar13 * DAT_010159d8) / DAT_010159d0);
  if (fVar10 < DAT_010159e0 == (NAN(fVar10) || NAN(DAT_010159e0))) {
    fVar10 = DAT_010159dc;
  }
  if ((int)((uint)(fVar10 < fVar2) << 0x1f) < 0) {
    fVar2 = fVar10;
  }
  fVar2 = (fVar13 / ((1.0 / (fVar4 * fVar2)) * fVar9)) * fVar12 * DAT_010159d4;
  if ((int)((uint)(fVar2 < DAT_010159e4) << 0x1f) < 0) {
    fVar2 = DAT_010159e4;
  }
  fVar10 = (float)FUN_0101ee64((fVar2 + DAT_010159e8) / DAT_010159e4);
  if ((int)((uint)(fVar2 * DAT_010159ec < (fVar10 + 1.0) * fVar5) << 0x1f) < 0) {
    fVar10 = fVar10 + -1.0;
  }
  if ((int)((uint)(fVar10 < 0.0) << 0x1f) < 0) {
    fVar10 = DAT_010159f0;
  }
  fVar4 = ((fVar10 + 1.0) * fVar5) / DAT_010159d4;
  fVar13 = (fVar13 / (fVar4 * fVar9)) * fVar12;
  fVar2 = DAT_010159f4 / fVar13;
  fVar5 = (float)FUN_010145b8(fVar2);
  fVar5 = DAT_010159f8 - fVar5;
  fVar2 = (float)FUN_010145f4(fVar2);
  if (-1 < (int)((uint)((DAT_010159f4 / (DAT_010159f8 - fVar5) +
                        DAT_010159f4 / (DAT_010159f8 - (DAT_010159f8 - fVar2))) * 0.5 < fVar13) <<
                0x1f)) {
    fVar5 = DAT_010159f8 - fVar2;
  }
  fVar2 = DAT_01015a00;
  if ((fVar5 < DAT_010159fc != (NAN(fVar5) || NAN(DAT_010159fc))) &&
     (fVar2 = fVar5, (int)((uint)(fVar5 < 0.0) << 0x1f) < 0)) {
    fVar2 = DAT_010159f0;
  }
  fVar13 = DAT_010159f4 / (DAT_010159f8 - fVar2);
  fVar12 = (fVar4 * fVar13 * fVar9) / fVar12;
  fVar9 = fVar12 * DAT_010159d0;
  fVar5 = 1.0 / ((fVar12 / DAT_010159d0) * fVar11 * fVar13);
  fVar11 = 1.0 / (fVar9 * fVar11 * fVar13);
  fVar11 = (fVar11 * fVar5) / (fVar5 - fVar11);
  fVar12 = 1.0 / (fVar9 * DAT_01015a04 * fVar13);
  if ((fVar5 < fVar7 != (NAN(fVar5) || NAN(fVar7))) &&
     (fVar6 = fVar5, (int)((uint)(fVar5 < DAT_01015a08) << 0x1f) < 0)) {
    fVar6 = DAT_01015a08;
  }
  fVar7 = DAT_01015a10;
  if ((fVar11 < DAT_01015a0c != (NAN(fVar11) || NAN(DAT_01015a0c))) &&
     (fVar7 = fVar11, (int)((uint)(fVar11 < DAT_01015a14) << 0x1f) < 0)) {
    fVar7 = DAT_01015a14;
  }
  fVar11 = DAT_01015a1c;
  if ((fVar12 < DAT_01015a18 != (NAN(fVar12) || NAN(DAT_01015a18))) &&
     (fVar11 = fVar12, (int)((uint)(fVar12 < DAT_01015a20) << 0x1f) < 0)) {
    fVar11 = DAT_01015a20;
  }
  fVar6 = (float)FUN_0101ee64(fVar6 / DAT_01015a08 + -1.0);
  fVar7 = (float)FUN_01015a30(fVar7 / DAT_01015a14);
  fVar11 = (float)FUN_01015a30(fVar11 / DAT_01015a20);
  *param_3 = (char)(int)fVar6;
  param_3[1] = (char)(int)fVar7;
  param_3[2] = (char)(int)fVar11;
  param_3[3] = (char)(int)fVar2;
  param_3[4] = (char)(int)fVar2;
  param_3[5] = (char)(int)fVar10;
  uVar8 = VectorFloatToUnsigned(*(float *)(param_2 + 0x38),3);
  *(undefined4 *)(param_3 + 8) = uVar8;
  return param_4;
}

