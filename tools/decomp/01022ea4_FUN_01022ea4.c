
void FUN_01022ea4(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_28 [8];
  
  FUN_0100929c(auStack_28,0);
  fVar2 = (float)*param_2;
  fVar4 = (float)param_2[1];
  fVar3 = (float)((ulonglong)*param_2 >> 0x20);
  fVar5 = (float)((ulonglong)param_2[1] >> 0x20);
  fVar1 = (float)FUN_01036d04((fVar2 * fVar2 + fVar3 * fVar3) / (fVar4 * fVar4 + fVar5 * fVar5));
  fVar3 = -((fVar2 * fVar4 + fVar3 * fVar5) / (fVar2 * fVar5 - fVar3 * fVar4));
  fVar2 = fVar1 + -1.0;
  if ((int)((uint)(ABS(fVar1 + -1.0) < DAT_01023170) << 0x1f) < 0) {
    fVar2 = DAT_01023174;
  }
  if ((int)((uint)(ABS(fVar3) < DAT_01023170) << 0x1f) < 0) {
    fVar3 = DAT_01023174;
  }
  param_3[1] = fVar2 * *(float *)(DAT_01023178 + param_1 * 4);
  *param_3 = 0;
  param_3[2] = fVar3;
  return;
}

