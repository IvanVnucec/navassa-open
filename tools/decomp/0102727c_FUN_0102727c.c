
void FUN_0102727c(int *param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float extraout_s0;
  float extraout_s0_00;
  float fVar6;
  float fVar7;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar8;
  float extraout_s2;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  pfVar3 = (float *)(param_1 + 0x21);
  fVar6 = (float)VectorUnsignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  param_1[0x1c] =
       (int)((float)param_1[0x1c] +
            (float)param_1[0x24] * (float)param_1[0x22] * (float)param_1[0x23] * fVar6);
  fVar6 = (float)VectorUnsignedToFloat(*param_1 * param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)param_1[0x24] * *pfVar3 * (float)param_1[0x23];
  uVar1 = 1;
  while (uVar1 < (uint)param_1[2]) {
    param_1[uVar1 + 0x1c] = (int)((float)param_1[uVar1 + 0x1c] + fVar6 * fVar7);
    uVar11 = FUN_010273f6(param_1,uVar1 + 1);
    param_1 = (int *)uVar11;
    fVar6 = extraout_s0;
    fVar7 = extraout_s1;
    uVar1 = (uint)((ulonglong)uVar11 >> 0x20);
  }
  fVar8 = (float)VectorUnsignedToFloat(param_1[1] * param_1[1],(byte)(in_fpscr >> 0x15) & 3);
  iVar2 = param_1[2];
  param_1[3] = (int)((float)param_1[3] + pfVar3[3] * pfVar3[1] * pfVar3[1] * fVar8);
  fVar7 = pfVar3[3];
  fVar9 = *pfVar3;
  fVar10 = pfVar3[1];
  fVar6 = (float)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * fVar8;
  for (uVar1 = 1; uVar4 = param_1[2], uVar1 < uVar4; uVar1 = uVar1 + 1) {
    fVar8 = fVar6 * fVar7 * fVar9 * fVar10;
    param_1[uVar1 + 3] = (int)((float)param_1[uVar1 + 3] + fVar8);
    param_1[iVar2 + 3] = (int)((float)param_1[iVar2 + 3] + fVar8);
    fVar8 = (float)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = param_1[2] + iVar2;
    fVar6 = fVar8 * fVar6;
  }
  fVar6 = *pfVar3;
  iVar2 = FUN_010273e8(fVar6,pfVar3[3] * fVar6 * fVar6);
  iVar5 = iVar2 + 0xc;
  uVar1 = 1;
  while (uVar1 < *(uint *)(iVar2 + 8)) {
    uVar11 = FUN_010273e8();
    uVar4 = uVar4 + 1;
    fVar6 = extraout_s2;
    fVar7 = extraout_s1_01;
    for (uVar1 = 1; iVar2 = (int)uVar11, uVar1 < *(uint *)(iVar2 + 8); uVar1 = uVar1 + 1) {
      *(float *)(iVar5 + uVar4 * 4) = *(float *)(iVar2 + 0xc + uVar4 * 4) + fVar6 * fVar7;
      uVar4 = uVar4 + 1;
      uVar11 = FUN_010273f6();
      fVar6 = extraout_s0_00;
      fVar7 = extraout_s1_00;
    }
    uVar1 = (int)((ulonglong)uVar11 >> 0x20) + 1;
  }
  return;
}

