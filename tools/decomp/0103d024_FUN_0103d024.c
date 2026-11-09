
undefined4 FUN_0103d024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined2 *puVar2;
  int *piVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ushort uVar15;
  uint *puVar16;
  uint in_fpscr;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined8 uVar31;
  float local_b4 [25];
  
  puVar2 = DAT_0103d5e8;
  *DAT_0103d5e8 = 0x2090;
  puVar2[8] = 4;
  puVar4 = DAT_0103d604;
  piVar3 = DAT_0103d600;
  puVar14 = (ushort *)(param_1 + 0x4c);
  puVar2[9] = *(undefined2 *)(param_1 + 0x10);
  puVar2[5] = *(undefined2 *)(param_1 + 0x5e);
  fVar22 = *(float *)(param_1 + 0x40);
  iVar18 = VectorFloatToUnsigned(*(float *)(param_1 + 0x38) * 24.0,3);
  *piVar3 = (1 << (iVar18 + 1U & 0xff)) + -1;
  piVar3[1] = (1 << (iVar18 + 2U & 0xff)) - 1U | (int)(fVar22 * 24.0) << 0x18;
  *puVar4 = *(undefined2 *)(param_1 + 0x56);
  puVar4[1] = *(undefined2 *)(param_1 + 0x58);
  puVar4[2] = *(undefined2 *)(param_1 + 0x5a);
  puVar4[3] = *(undefined2 *)(param_1 + 0x5c);
  fVar27 = *(float *)(param_1 + 0x3c);
  fVar25 = *(float *)(param_1 + 8);
  fVar26 = 1.0 / fVar25;
  uVar31 = FUN_01012c10(fVar27);
  uVar13 = (undefined4)((ulonglong)DAT_0103d418 >> 0x20);
  uVar24 = (undefined4)DAT_0103d418;
  FUN_0101f250((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),uVar24,uVar13);
  FUN_0103d44e();
  FUN_0103d446();
  fVar22 = (float)FUN_0101f3f4();
  uVar17 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
  fVar28 = *(float *)(param_1 + 0xc);
  uVar31 = FUN_01012c10(uVar17);
  uVar17 = (undefined4)((ulonglong)DAT_0103d420 >> 0x20);
  uVar29 = (undefined4)DAT_0103d420;
  FUN_0101f250((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),uVar29,uVar17);
  FUN_0103d44e();
  FUN_0103d446();
  FUN_01012c10();
  FUN_0103d446();
  fVar6 = (float)FUN_0101f3f4();
  uVar19 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  uVar31 = FUN_01012c10(uVar19);
  FUN_0101f250((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),uVar29,uVar17);
  FUN_0103d452();
  FUN_0103d43e();
  FUN_01012c10(-fVar28);
  FUN_0103d43e();
  fVar28 = (float)FUN_0101f3f4();
  fVar30 = *(float *)(param_1 + 0x34);
  uVar31 = FUN_01012c10(fVar30);
  FUN_0101f250((int)uVar31,(int)((ulonglong)uVar31 >> 0x20),uVar24,uVar13);
  FUN_0103d44e();
  FUN_0103d446();
  fVar7 = (float)FUN_0101f3f4();
  *(int *)(puVar4 + 4) = (int)fVar7;
  *(uint *)(puVar4 + 6) = (int)fVar22 & 0xffffffU | (int)*(short *)(param_1 + 0x54) << 0x1c;
  *(int *)(puVar4 + 8) = (int)fVar6;
  *(int *)(puVar4 + 10) = (int)fVar28;
  uVar20 = (uint)(fVar25 / fVar30 + 0.5);
  uVar23 = (uint)(fVar25 / fVar27 + 0.5);
  puVar4[0xc] = *(ushort *)(param_1 + 0x24) | *(short *)(param_1 + 0x52) << 8;
  *(undefined4 *)(param_1 + 0x48) = 4;
  uVar11 = uVar20 & 0xffff;
  uVar12 = uVar23 & 0xffff;
  fVar22 = *(float *)(param_1 + 0x44);
  puVar4[0xd] = (*puVar14 & 1) << 0xd | (ushort)uVar20;
  puVar4[0xe] = (*(ushort *)(param_1 + 0x4e) & 1) << 0xd | (ushort)uVar23;
  uVar21 = (uint)(fVar25 / fVar22 + 0.5);
  puVar4[0xf] = (*(ushort *)(param_1 + 0x50) & 1) << 0xd | (ushort)uVar21;
  fVar22 = DAT_0103d4fc;
  uVar20 = FUN_0103d45a(uVar11,*puVar14);
  uVar23 = FUN_0103d45a(uVar12,*(undefined2 *)(param_1 + 0x4e));
  uVar8 = FUN_0103d45a(uVar21 & 0xffff,*(undefined2 *)(param_1 + 0x50));
  uVar9 = FUN_0103d46a(uVar11,*puVar14);
  uVar10 = FUN_0103d46a(uVar12,*(undefined2 *)(param_1 + 0x4e));
  uVar21 = FUN_0103d46a(uVar21 & 0xffff,*(undefined2 *)(param_1 + 0x50));
  uVar20 = uVar20 >> (uVar9 & 0xff);
  uVar23 = uVar23 >> (uVar10 & 0xff);
  *(uint *)(puVar4 + 0x10) = uVar20;
  uVar8 = uVar8 >> (uVar21 & 0xff);
  *(uint *)(puVar4 + 0x12) = uVar23;
  *(uint *)(puVar4 + 0x14) = uVar8;
  uVar21 = FUN_0103d4cc(uVar20);
  iVar18 = FUN_0103d4cc(uVar23);
  FUN_0103d4cc(uVar8);
  uVar5 = FUN_0103d4ec(uVar9,uVar21 & 0xffff,uVar9,uVar21 & 0xffff);
  puVar4[0x16] = uVar5;
  uVar5 = FUN_0103d4ec(uVar10,iVar18,uVar10,iVar18);
  puVar4[0x17] = uVar5;
  uVar5 = FUN_0103d436();
  puVar4[0x18] = uVar5;
  uVar5 = FUN_0103d436();
  *(undefined2 *)(param_1 + 0x60) = uVar5;
  piVar3 = DAT_0103d600;
  uVar15 = 0;
  do {
    fVar6 = DAT_0103d5d4;
    uVar13 = FUN_0103d428(uVar11,uVar21 + 1);
    uVar1 = *puVar14;
    fVar28 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar16 = (uint *)(piVar3 + 2);
    fVar7 = (float)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x15) & 3);
    while( true ) {
      fVar7 = (fVar28 * fVar6) / fVar7;
      local_b4[0] = fVar7 * fVar7;
      uVar31 = FUN_01012c10(fVar26 * DAT_0103d5d8);
      FUN_0102035c(DAT_0103d608,DAT_0103d60c,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
      fVar25 = (float)FUN_0101f3f4();
      uVar8 = 1;
      fVar28 = DAT_0103d5dc;
      do {
        fVar28 = fVar28 + fVar25;
        fVar27 = (float)FUN_01038854(fVar28);
        fVar30 = (float)FUN_01038854(fVar28 * fVar26);
        fVar30 = (fVar26 * fVar27) / fVar30;
        fVar27 = fVar30 * fVar30 * fVar30;
        if (uVar1 == 4) {
          fVar27 = fVar27 * fVar30;
        }
        fVar27 = fVar7 * fVar27;
        local_b4[uVar8] = fVar27;
        fVar27 = fVar27 * fVar27;
        uVar9 = in_fpscr & 0xfffffff | (uint)(fVar27 < DAT_0103d5e0) << 0x1f;
        in_fpscr = uVar9 | (uint)(NAN(fVar27) || NAN(DAT_0103d5e0)) << 0x1c;
        local_b4[uVar8] = fVar27;
        if ((byte)(uVar9 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
          local_b4[uVar8] = DAT_0103d610;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x18);
      uVar8 = 0;
      do {
        uVar9 = uVar8 + 2;
        *puVar16 = (int)(local_b4[uVar8] * fVar22) & 0xffffU |
                   (int)(local_b4[uVar8 + 1] * fVar22) << 0x10;
        uVar8 = uVar9;
        puVar16 = puVar16 + 1;
      } while (uVar9 < 0x18);
      uVar15 = uVar15 + 1;
      if (1 < uVar15) {
        return param_4;
      }
      if (uVar15 == 0) break;
      uVar13 = FUN_0103d428(uVar12,iVar18 + 1);
      uVar1 = *(ushort *)(param_1 + 0x4e);
      fVar28 = (float)VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
      puVar16 = (uint *)(piVar3 + 0xe);
      fVar7 = (float)VectorUnsignedToFloat(uVar23,(byte)(in_fpscr >> 0x15) & 3);
    }
  } while( true );
}

