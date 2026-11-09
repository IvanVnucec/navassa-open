
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x01030308 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

longlong FUN_0102fd34(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined1 extraout_r1;
  undefined1 uVar14;
  undefined2 extraout_r1_00;
  undefined2 extraout_r1_01;
  float *pfVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  byte bVar20;
  undefined1 uVar21;
  uint in_fpscr;
  uint uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined2 extraout_s2;
  undefined1 extraout_s3;
  undefined8 uVar25;
  float local_150 [9];
  float local_12c [7];
  undefined4 local_110 [4];
  undefined4 local_100 [4];
  float local_f0 [6];
  undefined1 local_d8 [12];
  float local_cc;
  float local_c8 [4];
  float local_b8 [7];
  undefined4 local_9c [7];
  float local_80 [6];
  float local_68;
  undefined4 local_64 [3];
  
  iVar17 = 0x10304c4;
  local_64[0] = DAT_010304ac;
  local_64[1] = DAT_010304b0;
  local_64[2] = DAT_010304b4;
  local_150[6] = DAT_010304b8;
  local_150[7] = DAT_010304bc;
  local_150[8] = DAT_010304c0;
  FUN_01030688(local_80 + 3);
  iVar18 = 0;
  local_150[3] = 0.0;
  local_150[4] = 0.0;
  local_150[5] = 0.0;
  local_150[0] = 0.0;
  local_150[1] = 0.0;
  local_150[2] = 0.0;
  FUN_01030688(local_c8);
  local_80[0] = DAT_01030544;
  local_80[1] = (float)DAT_01030548;
  local_80[2] = (float)DAT_0103054c;
  spi_notify_thunk(local_9c + 3,0x10);
  local_9c[0] = DAT_01030550;
  local_9c[1] = DAT_01030554;
  local_9c[2] = DAT_01030558;
  FUN_0101206c(local_d8,&DAT_0103055c,0x10);
  local_12c[0] = 0.0;
  local_12c[1] = 0.0;
  local_12c[2] = 0.0;
  FUN_01030688(local_b8 + 3);
  uVar23 = FUN_01030688(local_150 + 0xc);
  fVar11 = (float)uVar23;
  fVar24 = (float)((ulonglong)uVar23 >> 0x20);
  local_f0[3] = local_150[0] * -1.0;
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_f0[0] = 0.0;
  local_f0[1] = 0.0;
  local_f0[2] = 0.0;
  local_f0[4] = local_150[1] * -1.0;
  local_f0[5] = local_150[2] * -1.0;
  FUN_01030688(local_100);
  FUN_01030688(local_110);
  uVar23 = FUN_01012c10(fVar24);
  uVar25 = FUN_01012c10(fVar11);
  uVar25 = FUN_0101f250(0,0x40000000,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
  FUN_0102035c((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
               (int)((ulonglong)uVar25 >> 0x20));
  fVar9 = (float)FUN_0101f3f4();
  in_fpscr = in_fpscr & 0xfffffff;
  if (NAN(fVar9)) {
    iVar17 = 0x103056c;
  }
  FUN_01030658(iVar17 + 4);
  FUN_01030658(iVar17 + 0x14);
  FUN_01030658(iVar17 + 0x34);
  FUN_01030658(iVar17 + 0x24);
  FUN_01030658(iVar17 + 0x44);
  local_80[3] = fVar11;
  FUN_01030658(iVar17 + 0x54);
  local_80[4] = fVar11;
  FUN_01030658(iVar17 + 100);
  local_80[5] = fVar11;
  FUN_01030658(iVar17 + 0x74);
  fVar9 = fVar11 * DAT_010301b8 * 0.5;
  local_80[4] = fVar11 + (fVar24 * DAT_010301bc + -1.0) * fVar9 * fVar11;
  iVar17 = 0;
  do {
    iVar1 = iVar17 + 3;
    iVar2 = iVar17 + 6;
    pfVar15 = local_150 + iVar17;
    iVar17 = iVar17 + 1;
    *pfVar15 = local_80[iVar1] * local_150[iVar2] * fVar24;
  } while (iVar17 < 3);
  local_68 = fVar11;
  uVar23 = FUN_01012c10(local_150[1]);
  FUN_0101f250((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_01030bf4,DAT_01030bf8);
  fVar3 = DAT_010301c0;
  local_150[1] = (float)FUN_0101f3f4();
  fVar6 = DAT_010301d4;
  fVar5 = DAT_010301d0;
  fVar4 = DAT_010301cc;
  in_fpscr = in_fpscr & 0xfffffff;
  do {
    uVar23 = FUN_0103066a(local_64[iVar18]);
    fVar10 = (float)FUN_0101f3f4((int)uVar23,(uint)((ulonglong)uVar23 >> 0x20) & 0x7fffffff);
    local_150[iVar18 + 3] = fVar10;
    iVar18 = iVar18 + 1;
  } while (iVar18 < 3);
  uVar22 = in_fpscr & 0xfffffff | (uint)NAN(local_150[5]) << 0x1c;
  bVar20 = (byte)(uVar22 >> 0x1c);
  iVar17 = 0;
  uVar21 = 1;
  bVar19 = 0;
  local_150[5] = fVar11;
  do {
    iVar17 = FUN_01030622(iVar17,local_150 + iVar17);
  } while ((bool)uVar21 || bVar19 != bVar20);
  iVar17 = 0;
  uVar21 = 1;
  bVar19 = 0;
  do {
    iVar17 = FUN_01030622(iVar17,local_150 + iVar17 + 6);
  } while ((bool)uVar21 || bVar19 != bVar20);
  local_c8[0] = (fVar11 * 16.0 * fVar24 * local_150[6]) / DAT_010301c8;
  local_c8[1] = fVar11 * fVar24 * local_150[7];
  local_c8[3] = fVar11 * fVar24 * local_150[7];
  local_c8[2] = fVar11 * fVar24 * local_150[8];
  fVar9 = fVar11 * fVar9 * local_150[8];
  uVar23 = FUN_01012c10(DAT_010301dc / (DAT_010301d8 / local_c8[0]));
  uVar25 = FUN_01012c10(local_150[0]);
  uVar25 = FUN_0101f250((int)uVar25,(uint)((ulonglong)uVar25 >> 0x20) & 0x7fffffff,0,DAT_01030e00);
  uVar25 = FUN_0101f250((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0,DAT_01030e04);
  uVar25 = FUN_0102035c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),0x80000000,DAT_01030e08);
  FUN_010200e0((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),(int)uVar25,
               (int)((ulonglong)uVar25 >> 0x20));
  FUN_0103063c();
  FUN_01030644();
  iVar17 = 0;
  do {
    iVar18 = iVar17 + 6;
    pfVar15 = local_80 + iVar17;
    iVar1 = iVar17 + 9;
    iVar17 = iVar17 + 1;
    local_150[iVar1] = local_150[iVar18] - *pfVar15;
  } while (iVar17 < 3);
  iVar17 = 0;
  do {
    local_b8[iVar17 + 3] = 1.0 / local_c8[iVar17];
    uVar23 = FUN_01030680();
    uVar25 = FUN_01012c10(local_9c[iVar17 + 3]);
    uVar23 = FUN_01020278((int)uVar23,(uint)((ulonglong)uVar23 >> 0x20) & 0x7fffffff,(int)uVar25,
                          (int)((ulonglong)uVar25 >> 0x20));
    FUN_0102035c(0,DAT_01030e14,(int)uVar23,(int)((ulonglong)uVar23 >> 0x20));
    fVar11 = (float)FUN_0101f3f4();
    local_150[iVar17 + 0xc] = fVar11;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 4);
  iVar17 = 0;
  do {
    pfVar15 = local_150 + iVar17;
    iVar18 = iVar17 + 3;
    iVar17 = iVar17 + 1;
    local_f0[iVar18] = *pfVar15 * -1.0;
    fVar11 = local_f0[5];
  } while (iVar17 < 3);
  uVar12 = FUN_01030680(local_f0[5] / DAT_0103049c);
  FUN_0103b9b0(uVar12);
  fVar10 = (float)FUN_01030644();
  fVar11 = (fVar10 * DAT_0103049c) / fVar11;
  local_12c[2] = local_12c[2] * fVar11;
  local_12c[5] = local_12c[5] * fVar11;
  FUN_01012c10((-fVar9 * fVar11) / DAT_010304a0);
  uVar23 = FUN_0103063c();
  FUN_0101f250((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xa0000000,DAT_01030e18);
  uVar12 = FUN_0101f3f4();
  FUN_0103066a(uVar12);
  FUN_0103063c();
  fVar9 = (float)FUN_01030644();
  iVar17 = 0;
  do {
    uVar12 = FUN_0103065e(local_9c + iVar17);
    FUN_01030676(uVar12,local_150 + iVar17 + 9);
    FUN_0103063c();
    FUN_0103064c();
    fVar11 = (float)FUN_0101f3f4();
    local_b8[iVar17] = fVar11;
    FUN_0103067c(local_b8[iVar17]);
    FUN_0103063c();
    fVar11 = (float)FUN_01030644();
    local_f0[iVar17] = fVar11;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 3);
  iVar17 = 0;
  do {
    uVar12 = FUN_0103065e(local_d8 + iVar17 * 4);
    FUN_01030676(uVar12,local_150 + iVar17 + 0xc);
    FUN_0103063c();
    FUN_0103064c();
    uVar12 = FUN_0101f3f4();
    local_100[iVar17] = uVar12;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 4);
  FUN_01030662();
  uVar12 = FUN_01030680(local_12c[6] / local_cc);
  FUN_0102fbe0(uVar12);
  FUN_0103064c();
  local_100[3] = FUN_0101f3f4();
  iVar17 = 0;
  do {
    uVar23 = FUN_0103066a(local_100[iVar17]);
    FUN_0103063c((int)uVar23,(uint)((ulonglong)uVar23 >> 0x20) & 0x7fffffff);
    uVar12 = FUN_01030644();
    local_110[iVar17] = uVar12;
    iVar17 = iVar17 + 1;
  } while (iVar17 < 4);
  uVar7 = FUN_01030602(local_110[0]);
  *param_1 = uVar7;
  uVar23 = FUN_0103ba18((int)DAT_010304a4);
  uVar25 = FUN_01012c10(local_110[0]);
  FUN_0102035c((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),(int)uVar23,
               (int)((ulonglong)uVar23 >> 0x20));
  uVar23 = FUN_0103063c();
  uVar12 = (undefined4)((ulonglong)uVar23 >> 0x20);
  uVar7 = FUN_01020608((int)uVar23,uVar12);
  param_1[1] = uVar7;
  uVar7 = FUN_01030602(local_110[1],uVar12,(int)fVar9);
  param_1[2] = uVar7;
  uVar7 = extraout_s2;
  FUN_010305f8();
  param_1[3] = extraout_r1_00;
  uVar21 = FUN_01030602(local_110[3]);
  *(undefined1 *)(param_1 + 4) = uVar21;
  uVar21 = extraout_s3;
  FUN_010305f8();
  param_1[5] = extraout_r1_01;
  uVar22 = uVar22 & 0xfffffff | (uint)(fVar24 < fVar4) << 0x1f | (uint)(fVar24 == fVar4) << 0x1e |
           (uint)(fVar4 <= fVar24) << 0x1d | (uint)(NAN(fVar24) || NAN(fVar4)) << 0x1c;
  uVar8 = FUN_01030602(local_f0[1]);
  param_1[6] = uVar8;
  *(char *)((int)param_1 + 0xf) = (char)(int)fVar10;
  FUN_010305f8();
  *(undefined1 *)(param_1 + 7) = extraout_r1;
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 10) = 10;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[8] = uVar7;
  puVar13 = (undefined1 *)((int)param_1 + 0x21);
  *(undefined1 *)(param_1 + 9) = uVar21;
  *(undefined1 *)((int)param_1 + 0x1b) = 0x80;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0xc;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if ((int)uVar22 < 0) {
    uVar23 = FUN_0103060c();
    puVar13 = (undefined1 *)FUN_0103068e((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xc);
    uVar16 = 0xb;
    uVar14 = uVar16;
  }
  else {
    bVar20 = (byte)((uVar22 & 0xfffffff) >> 0x18);
    if ((char)(bVar20 | (byte)(((uint)(fVar24 < fVar5) << 0x1f) >> 0x18) |
               (byte)(((uint)(fVar24 == fVar5) << 0x1e) >> 0x18) |
              (byte)(((uint)(fVar5 <= fVar24) << 0x1d) >> 0x18)) < '\0') {
      uVar23 = FUN_0103060c();
      puVar13 = (undefined1 *)FUN_0103068e((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xd);
      uVar16 = 0xc;
      uVar14 = uVar16;
    }
    else if ((char)(bVar20 | (byte)(((uint)(fVar24 < fVar6) << 0x1f) >> 0x18) |
                    (byte)(((uint)(fVar24 == fVar6) << 0x1e) >> 0x18) |
                   (byte)(((uint)(fVar6 <= fVar24) << 0x1d) >> 0x18)) < '\0') {
      uVar23 = FUN_0103060c();
      puVar13 = (undefined1 *)FUN_010305ec((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),0xe);
      *(undefined1 *)((int)param_1 + 0x1f) = 5;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *puVar13 = 0xf;
      puVar13[2] = 0xc;
      puVar13[3] = 0xc;
      puVar13[1] = 1;
      puVar13[4] = 2;
      puVar13[5] = 0;
      uVar16 = 0xd;
      uVar21 = 0;
      uVar14 = uVar16;
    }
    else if ((int)(uVar22 & 0xfffffff | (uint)(fVar24 < fVar3) << 0x1f |
                   (uint)(fVar24 == fVar3) << 0x1e | (uint)(fVar3 <= fVar24) << 0x1d) < 0) {
      *(undefined1 *)((int)param_1 + 0x15) = 0x20;
      *(undefined1 *)(param_1 + 0xb) = 0x12;
      *(undefined1 *)(param_1 + 0x16) = 7;
      *(undefined1 *)((int)param_1 + 0x2d) = 7;
      *(undefined1 *)(param_1 + 0xc) = 0x12;
      *(undefined1 *)((int)param_1 + 0x17) = 0x18;
      puVar13 = (undefined1 *)FUN_010305ec(puVar13,0x18,0xf);
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)((int)param_1 + 0x1f) = 5;
      *(undefined1 *)(param_1 + 0x10) = 0;
      puVar13[2] = 0xd;
      puVar13[3] = 0xd;
      uVar21 = 0;
      puVar13[4] = 2;
      *puVar13 = 0xf;
      puVar13[1] = 0;
      puVar13[5] = 0;
      uVar16 = 0xe;
      uVar14 = uVar16;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x15) = 0xf;
      *(undefined1 *)(param_1 + 0xb) = 0x13;
      *(undefined1 *)(param_1 + 0x16) = 7;
      *(undefined1 *)((int)param_1 + 0x2d) = 7;
      *(undefined1 *)((int)param_1 + 0x17) = 0x10;
      *(undefined1 *)(param_1 + 0xc) = 0x14;
      *(undefined1 *)(param_1 + 0x17) = 7;
      *(undefined1 *)((int)param_1 + 0x2f) = 7;
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)((int)param_1 + 0x1d) = 2;
      *(undefined1 *)((int)param_1 + 0x1f) = 5;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      *(undefined1 *)((int)param_1 + 0x23) = 0xf;
      *puVar13 = 2;
      *(undefined1 *)(param_1 + 0x11) = 1;
      *(undefined1 *)(param_1 + 0x12) = 1;
      *(undefined1 *)((int)param_1 + 0x25) = 2;
      *(undefined1 *)(param_1 + 0x13) = 0;
      uVar21 = 4;
      uVar16 = 0;
      uVar14 = 4;
    }
  }
  puVar13[10] = uVar21;
  puVar13[6] = 0xf;
  puVar13[9] = 0;
  puVar13[8] = uVar16;
  puVar13[7] = uVar14;
  *(undefined1 *)(param_1 + 0xd) = uVar16;
  return ZEXT48(param_1) << 0x20;
}

