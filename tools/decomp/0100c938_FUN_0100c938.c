
void FUN_0100c938(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  iVar4 = *(int *)(param_1 + 0xc);
  fVar14 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(param_1 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = *(float *)(iVar4 + 0xbc);
  fVar9 = *(float *)(iVar4 + 0xac);
  fVar11 = *(float *)(iVar4 + 0xa8);
  fVar5 = *(float *)(iVar4 + 0xb4);
  fVar6 = *(float *)(iVar4 + 0xb0);
  fVar12 = (*(float *)(iVar4 + 0x24) - fVar11 * *(float *)(iVar4 + 0x1c)) -
           fVar6 * *(float *)(iVar4 + 0x20);
  fVar10 = (fVar9 * *(float *)(iVar4 + 0x1c) - *(float *)(iVar4 + 0x28)) +
           fVar5 * *(float *)(iVar4 + 0x20);
  fVar13 = ((fVar12 * fVar5 + fVar10 * fVar6) / (fVar14 * (fVar11 * fVar5 - fVar9 * fVar6))) * 0.25;
  FUN_01012c10();
  uVar17 = FUN_0100d14c();
  uVar18 = FUN_01012c10();
  FUN_0101f250((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
               (int)((ulonglong)uVar17 >> 0x20));
  fVar3 = (float)FUN_0101f3f4();
  fVar1 = DAT_0100cce4;
  fVar15 = fVar13 * fVar13;
  if ((((int)((uint)(fVar3 < fVar15) << 0x1f) < 0) && (fVar16 != 0.0)) &&
     (fVar15 < DAT_0100cce4 == (NAN(fVar15) || NAN(DAT_0100cce4)))) {
    fVar13 = fVar16;
  }
  fVar15 = *(float *)(iVar4 + 0xc0);
  fVar3 = ((fVar12 * fVar9 + fVar10 * fVar11) / (fVar14 * (fVar9 * fVar6 - fVar11 * fVar5))) * 0.25;
  FUN_01012c10(fVar15);
  uVar17 = FUN_0100d14c();
  uVar18 = FUN_01012c10(fVar15);
  FUN_0101f250((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar17,
               (int)((ulonglong)uVar17 >> 0x20));
  fVar5 = (float)FUN_0101f3f4();
  fVar6 = fVar3 * fVar3;
  if ((((int)((uint)(fVar5 < fVar6) << 0x1f) < 0) && (fVar15 != 0.0)) &&
     (fVar6 < fVar1 == (NAN(fVar6) || NAN(fVar1)))) {
    fVar3 = fVar15;
  }
  *(float *)(iVar4 + 0x68) = fVar13;
  *(float *)(iVar4 + 0x6c) = fVar3;
  *(float *)(iVar4 + 0xbc) = fVar13;
  *(float *)(iVar4 + 0xc0) = fVar3;
  uVar7 = *(undefined4 *)(iVar4 + 0x68);
  FUN_0101ee64(uVar7);
  uVar2 = FUN_0100cac8();
  *(undefined2 *)(iVar4 + 0x60) = uVar2;
  uVar8 = *(undefined4 *)(iVar4 + 0x6c);
  FUN_0101ee64(uVar8);
  uVar2 = FUN_0100cac8();
  *(undefined2 *)(iVar4 + 0x62) = uVar2;
  FUN_0101ee64(uVar7);
  uVar2 = FUN_0100cac8();
  *(undefined2 *)(iVar4 + 100) = uVar2;
  FUN_0101ee64(uVar8);
  uVar2 = FUN_0100cac8();
  *(undefined2 *)(iVar4 + 0x66) = uVar2;
  return;
}

