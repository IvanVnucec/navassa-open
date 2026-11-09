
undefined4
FUN_010264d0(float param_1,float param_2,float param_3,undefined4 param_4,float param_5,
            float *param_6,undefined4 *param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s20;
  uint uVar8;
  
  fVar3 = DAT_01026820;
  param_2 = param_2 * DAT_01026820;
  *param_7 = 0x3f800000;
  param_7[0xd] = 0x3f800000;
  uVar4 = 1;
  do {
    fVar10 = 1.0;
    if (param_8 == 0) {
      if (uVar4 < 7) {
        fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar10 * param_2 + 1.0;
      }
      else {
        fVar10 = (float)VectorUnsignedToFloat(0xd - uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = 1.0 - fVar10 * param_2;
      }
    }
    pfVar5 = (float *)(param_7 + uVar4);
    iVar1 = uVar4 + 0xd;
    uVar4 = uVar4 + 1;
    *pfVar5 = fVar10;
    param_7[iVar1] = fVar10;
  } while (uVar4 < 0xd);
  uVar6 = FUN_01036d04((float)param_7[4] * (float)param_7[6]);
  param_7[5] = uVar6;
  param_7[0x12] = uVar6;
  uVar6 = FUN_01036d04((float)param_7[7] * (float)param_7[9]);
  param_7[8] = uVar6;
  param_7[0x15] = uVar6;
  fVar10 = ((float)param_7[5] + 1.0) * 0.5;
  param_7[6] = fVar10;
  param_7[0x13] = fVar10;
  fVar10 = ((float)param_7[8] + 1.0) * 0.5;
  param_7[7] = fVar10;
  param_7[0x14] = fVar10;
  uVar4 = 0;
  do {
    param_7[uVar4] = (float)param_7[uVar4] * (float)(&DAT_01026bb0)[uVar4];
    iVar1 = uVar4 + 0xd;
    pfVar5 = (float *)(&DAT_01026be4 + uVar4);
    iVar2 = uVar4 + 0xd;
    uVar4 = uVar4 + 1;
    param_7[iVar2] = (float)param_7[iVar1] * *pfVar5;
  } while (uVar4 < 0xd);
  *param_6 = param_1;
  uVar4 = 0;
  do {
    if (param_8 == 1 || uVar4 == 0) {
      unaff_s20 = param_5 - param_1;
    }
    fVar10 = (float)param_7[uVar4];
    fVar11 = (float)param_7[uVar4 + 0xd];
    if (param_8 != 1 && uVar4 != 0) {
      uVar8 = uVar4;
      if (6 < uVar4) {
        uVar8 = 0xd - uVar4;
      }
      fVar7 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      unaff_s20 = (param_5 - param_1) + fVar7 * param_3 * fVar3;
    }
    fVar7 = (float)FUN_01038850(unaff_s20);
    fVar9 = (float)FUN_01038854(unaff_s20);
    pfVar5 = (float *)(param_7 + uVar4);
    iVar1 = uVar4 + 0xd;
    uVar4 = uVar4 + 1;
    *pfVar5 = fVar10 * fVar7 - fVar11 * fVar9;
    param_7[iVar1] = fVar10 * fVar9 + fVar11 * fVar7;
  } while (uVar4 < 0xd);
  return param_9;
}

