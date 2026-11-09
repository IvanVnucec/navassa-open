
int FUN_0103c830(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  if (param_1 == 0) {
    uVar1 = *DAT_0103cd98;
  }
  else {
    uVar1 = DAT_0103cd98[2];
  }
  fVar7 = (float)VectorUnsignedToFloat((uint)(uVar1 >> 2),(byte)(in_fpscr >> 0x15) & 3);
  param_3 = param_3 + param_1 * 0x40;
  puVar5 = (undefined4 *)(param_2 + param_1 * 0x10);
  *(short *)(param_3 + 0x3c) = (short)(int)(fVar7 * *(float *)(param_4 + 0x18));
  fVar7 = DAT_0103ca10;
  fVar8 = (float)VectorUnsignedToFloat(puVar5[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)FUN_0101edc0(fVar8 * DAT_0103ca10);
  fVar11 = (float)VectorUnsignedToFloat(*puVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)FUN_0101edc0(fVar11 * fVar7);
  fVar11 = (fVar8 * 10.0) / -0.75;
  fVar8 = (float)FUN_010145b8(fVar11);
  fVar8 = fVar11 - fVar8;
  uVar9 = FUN_010145b8(fVar11);
  uVar12 = VectorFloatToUnsigned(uVar9,3);
  uVar9 = FUN_010145b8((fVar7 * DAT_0103ca14) / -0.75);
  uVar10 = VectorFloatToUnsigned(uVar9,3);
  if (0x7f < (uVar10 & 0xffff)) {
    uVar10 = DAT_0103ca18;
  }
  uVar1 = (ushort)uVar12;
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_0103ca1c) << 0x1f;
  if (SUB41(uVar6 >> 0x1f,0) == (NAN(fVar8) || NAN(DAT_0103ca1c))) {
    *(ushort *)(param_3 + 0x38) = uVar1 + 1;
    *(ushort *)(param_3 + 0x3a) = uVar1;
  }
  else {
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 < DAT_0103ca20) << 0x1f;
    uVar2 = uVar1 + 1;
    if (SUB41(uVar6 >> 0x1f,0) != (NAN(fVar8) || NAN(DAT_0103ca20))) {
      uVar2 = uVar1;
    }
    *(ushort *)(param_3 + 0x38) = uVar2;
    *(ushort *)(param_3 + 0x3a) = uVar1 - 1;
  }
  fVar7 = (float)VectorSignedToFloat(puVar5[2] << 7,(byte)(uVar6 >> 0x15) & 3);
  fVar11 = (float)VectorUnsignedToFloat(puVar5[1],(byte)(uVar6 >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(puVar5[3] << 7,(byte)(uVar6 >> 0x15) & 3);
  *(ushort *)(param_3 + 8) = uVar1 | (ushort)(uVar10 << 8);
  uVar13 = FUN_01012c10(fVar7 / fVar11);
  uVar9 = (undefined4)((ulonglong)DAT_0103ca24 >> 0x20);
  uVar12 = (undefined4)DAT_0103ca24;
  FUN_0101f250((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar12,uVar9);
  uVar3 = FUN_01020608();
  uVar13 = FUN_01012c10(fVar8 / fVar11);
  FUN_0101f250((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar12,uVar9);
  uVar4 = FUN_01020608();
  *(uint *)(param_3 + 0x24) = CONCAT22(uVar3,uVar4);
  return param_4;
}

