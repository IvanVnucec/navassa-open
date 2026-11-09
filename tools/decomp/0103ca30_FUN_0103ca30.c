
undefined8 FUN_0103ca30(int param_1,int param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ushort uVar19;
  uint uVar20;
  byte bVar21;
  int iVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  
  iVar9 = 0;
  do {
    iVar5 = param_2 + param_1 * 0x40;
    uVar4 = *(ushort *)(iVar5 + iVar9 * 2);
    uVar6 = uVar4 & 0x7f;
    if ((uVar4 & 0x8080) != 0) {
LAB_0103ccb6:
      uVar4 = 1;
      break;
    }
    uVar15 = (uint)*(ushort *)(iVar5 + 0x3a);
    bVar23 = SBORROW4(uVar6,uVar15);
    iVar8 = uVar6 - uVar15;
    if (uVar15 <= uVar6) {
      bVar23 = SBORROW4((uint)*(ushort *)(iVar5 + 0x38),uVar6);
      iVar8 = *(ushort *)(iVar5 + 0x38) - uVar6;
    }
    if (iVar8 < 0 != bVar23) goto LAB_0103ccb6;
    iVar9 = iVar9 + 1;
    uVar4 = 0;
  } while (iVar9 < 5);
  uVar6 = (uint)*(byte *)((int)param_4 + 3);
  if (uVar4 != 0) {
    param_4[10] = 0xffff;
    param_4[0xb] = 0xffff;
    *(ushort *)(DAT_0103cd94 + 0x12) = *(ushort *)(DAT_0103cd94 + 0x12) | 0x2000;
    *(undefined1 *)((int)param_4 + 3) = 0x12;
  }
  iVar18 = 0;
  uVar7 = (uint)(byte)param_4[1];
  iVar13 = param_2 + param_1 * 0x40;
  uVar15 = 0;
  iVar5 = 0;
  iVar8 = 0;
  iVar22 = 0;
  uVar20 = 0;
  while (((int)uVar20 < iVar9 + -1 &&
         (uVar16 = (uint)*(ushort *)(iVar13 + uVar20 * 2) << 0x12, 7 < uVar16 >> 0x1a))) {
    uVar16 = uVar16 >> 0x1c;
    iVar10 = *(int *)(iVar13 + uVar20 * 4 + 0x14);
    iVar5 = iVar5 + ((int)(short)iVar10 << uVar16);
    iVar18 = ((iVar10 >> 0x10) << uVar16) + iVar18;
    uVar11 = (uint)*param_4 << uVar16;
    bVar23 = CARRY4(uVar15,uVar11);
    uVar15 = uVar15 + uVar11;
    iVar8 = iVar8 + ((int)uVar11 >> 0x1f) + (uint)bVar23;
    iVar22 = iVar22 + (1 << uVar16);
    uVar20 = uVar20 + 1 & 0xff;
  }
  iVar10 = uVar7 * 0x18 + uVar6 * 0x18;
  uVar19 = 0;
  iVar18 = iVar18 + *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0x10);
  *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0x10) = iVar18;
  iVar5 = *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0xe) + iVar5;
  *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0xe) = iVar5;
  iVar12 = *(uint *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0x12) + uVar15;
  iVar14 = iVar8 + (uint)param_4[uVar6 * 0xc + uVar7 * 0xc + 0x14] +
           (uint)CARRY4(*(uint *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0x12),uVar15);
  *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0x12) = iVar12;
  param_4[uVar6 * 0xc + uVar7 * 0xc + 0x14] = (ushort)iVar14;
  iVar17 = *(int *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0xc);
  uVar16 = iVar22 + iVar17;
  *(uint *)(param_4 + uVar6 * 0xc + uVar7 * 0xc + 0xc) = uVar16;
  iVar8 = DAT_0103cd88;
  uVar20 = LZCOUNT(uVar16);
  uVar15 = 0x10 - *(ushort *)(param_3 + 0x62);
  if (((1 < iVar9) && (uVar20 < (uint)LZCOUNT(iVar17))) && (uVar20 < (uVar15 & 0xffff))) {
    uVar1 = (short)uVar15 - (short)uVar20;
    uVar15 = (uint)uVar1;
    iVar9 = iVar18;
    if (iVar18 < 1) {
      iVar9 = -iVar18;
    }
    iVar22 = iVar5;
    if (iVar5 < 1) {
      iVar22 = -iVar5;
    }
    uVar20 = LZCOUNT(iVar9);
    if (2 < (uint)LZCOUNT(iVar9)) {
      uVar20 = LZCOUNT(iVar22);
    }
    if (((uVar20 < 3) || (0xefffffff < uVar16)) ||
       ((int)((uint)*(ushort *)(param_3 + 100) - (uint)*(ushort *)(param_3 + 0x62)) <= (int)uVar15))
    {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (uVar15 < *(byte *)((int)param_4 + iVar10 + 0x2f) >> 1) goto LAB_0103cd56;
    }
    uVar19 = uVar2;
    uVar1 = uVar1 * 0x100;
    *(ushort *)(DAT_0103cd94 + 0x12) = uVar1;
    iVar8 = iVar8 + param_1 * 0x14;
    uVar11 = (uint)uVar1;
    uVar20 = (uVar11 << 0x14) >> 0x1c;
    *(uint *)(iVar8 + 8) = uVar20;
    fVar24 = (float)VectorUnsignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
    if (7 < uVar20) {
      uVar11 = 7;
    }
    if (7 < uVar20) {
      *(uint *)(iVar8 + 8) = uVar11;
    }
    fVar24 = 1.0 / fVar24;
    fVar25 = (float)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
    fVar25 = fVar25 * fVar24;
    fVar26 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar26 = fVar26 * fVar24;
    fVar27 = (float)FUN_0101edc0(fVar26 * fVar26 + fVar25 * fVar25);
    fVar27 = DAT_0103cd68 + fVar27 * 10.0;
    if ((int)((uint)(fVar27 < DAT_0103cd6c) << 0x1f) < 0) {
      fVar27 = DAT_0103cd6c;
    }
    fVar27 = fVar27 * DAT_0103cd70;
    uVar28 = FUN_0103df8c(fVar25,fVar26);
    uVar29 = FUN_01012c10(uVar28);
    FUN_0101f250((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),DAT_0103cda0,DAT_0103cda4);
    uVar3 = FUN_01020608();
    fVar25 = (float)FUN_01014570(iVar12,iVar14);
    *(uint *)(param_4 + 10) = 0x80000000U >> uVar6;
    *(uint *)(param_4 + 2) = 0x80000000U >> uVar6 | *(uint *)(param_4 + 2);
    uVar20 = uVar6;
    if ((uVar6 != 0) && (*(char *)((int)param_4 + iVar10 + 0x17) == '\0')) {
      uVar20 = uVar6 - 1;
    }
    uVar20 = uVar20 & 0xffff;
    while (((int)uVar20 < 0x12 && ((uVar15 & 0xffff) != 0))) {
      iVar9 = uVar20 * 0x18 + uVar7 * 0x18;
      if (((int)uVar6 < (int)uVar20) &&
         ((int)((uint)*(byte *)((int)param_4 + iVar9 + 0x2f) << 0x1f) < 0)) break;
      if ((int)uVar20 < (int)uVar6) {
        bVar21 = 2;
      }
      else {
        bVar21 = (byte)(uVar15 << 1);
        if (uVar20 == uVar6) {
          bVar21 = bVar21 | 1;
        }
      }
      *(byte *)((int)param_4 + iVar9 + 0x2f) = bVar21;
      param_4[uVar7 * 0xc + uVar20 * 0xc + 0x16] = (ushort)(int)fVar27;
      if ((int)uVar6 <= (int)uVar20) {
        uVar15 = uVar15 - 1;
      }
      *(undefined1 *)(param_4 + uVar7 * 0xc + uVar20 * 0xc + 0x17) = uVar3;
      param_4[uVar7 * 0xc + uVar20 * 0xc + 0x15] = (ushort)(int)(fVar25 * fVar24);
      if ((int)uVar6 < (int)uVar20) {
        *(uint *)(param_4 + 4) = 0x80000000U >> (uVar20 & 0xff) | *(uint *)(param_4 + 4);
      }
      uVar20 = uVar20 + 1;
    }
    if (uVar19 != 0) {
      FUN_0103c2f8(uVar6,uVar7,param_4);
    }
  }
LAB_0103cd56:
  if ((char)param_1 == '\0') {
    uVar1 = *DAT_0103cd98;
  }
  else {
    uVar1 = DAT_0103cd98[2];
  }
  if (*(ushort *)(iVar13 + 0x3c) < uVar1 >> 2) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = (uVar19 | uVar4) ^ 1;
  }
  return CONCAT44(param_2,(int)(short)uVar4);
}

