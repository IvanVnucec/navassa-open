
void FUN_01027842(float *param_1)

{
  float *pfVar1;
  uint uVar2;
  
  uVar2 = 0;
  pfVar1 = param_1 + 0x33;
  do {
    param_1[uVar2 + 1] = param_1[uVar2 + 1] * *pfVar1;
    if ((int)(((uint)param_1[0x81] >> (uVar2 & 0xff)) << 0x1f) < 0) {
      param_1[uVar2 + 0x35] = param_1[uVar2 + 0x35] * *pfVar1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x18);
  *pfVar1 = 1.0;
  *param_1 = *param_1 + param_1[0x34];
  uVar2 = 0;
  do {
    if ((int)(((uint)param_1[0x82] >> (uVar2 & 0xff)) << 0x1f) < 0) {
      param_1[uVar2 + 0x4e] = param_1[uVar2 + 0x4e] - param_1[0x34];
    }
    if ((int)(((uint)param_1[0x83] >> (uVar2 & 0xff)) << 0x1f) < 0) {
      param_1[uVar2 + 0x67] = param_1[uVar2 + 0x67] - param_1[0x34];
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x18);
  param_1[0x34] = 0.0;
  return;
}

