
int * FUN_01026c4c(float *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_01026d60;
  fVar5 = *param_1;
  fVar6 = 1.0 - fVar5 * 0.5 * fVar5;
  uVar2 = FUN_01026c18((fVar5 / fVar6) * DAT_01026d60);
  *param_2 = uVar2;
  fVar5 = 1.0;
  iVar4 = 0;
  do {
    uVar2 = FUN_01026c18(((((1.0 - param_1[iVar4 + 0x1a] * 0.5 * param_1[iVar4 + 0x1a]) /
                           param_1[iVar4 + 1]) * fVar1) / fVar6) * fVar5);
    param_2[iVar4 + 1] = uVar2;
    uVar2 = FUN_01026c18(((((param_1[iVar4 + 0x1a] * -1.0) / param_1[iVar4 + 1]) * fVar1) / fVar6) *
                         fVar5);
    fVar5 = fVar5 * -1.0;
    param_2[iVar4 + 0x1a] = uVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x18);
  uVar2 = FUN_01026c18(DAT_01026d60 / (fVar6 * param_1[0x19]));
  param_2[0x19] = uVar2;
  param_2[0x32] = 0;
  if (*param_4 == 0) {
    piVar3 = (int *)FUN_01038abc(param_2 + 1,param_3,param_4);
    return piVar3;
  }
  return param_4;
}

