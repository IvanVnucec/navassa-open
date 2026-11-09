
undefined4 FUN_01022dc8(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x34);
  fVar1 = *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x30) - fVar2 * fVar2;
  if (ABS(fVar1) < DAT_01023134 == (NAN(ABS(fVar1)) || NAN(DAT_01023134))) {
    *param_2 = (*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x30) -
               *(float *)(param_1 + 0x40) * fVar2) / fVar1;
    param_2[1] = (*(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x30) -
                 *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x34)) / fVar1;
    param_2[2] = (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x2c) -
                 *(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x34)) / fVar1;
    param_2[3] = (*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x2c) -
                 *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x34)) / fVar1;
    param_2[4] = (((*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x30)) * 2.0) /
                 (*param_2 * *param_2 + param_2[1] * param_2[1])) / fVar1;
    return 0;
  }
  return 0x2002;
}

