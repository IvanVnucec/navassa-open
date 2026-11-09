
void FUN_0100e532(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar1 = *(float *)(param_1 + 0x6c);
  if ((int)((uint)(fVar2 < *(float *)(param_1 + 0x6c)) << 0x1f) < 0) {
    fVar1 = fVar2;
  }
  if ((int)((uint)(fVar1 < -fVar2) << 0x1f) < 0) {
    fVar1 = -fVar2;
  }
  *(float *)(param_1 + 0x6c) = fVar1;
  fVar2 = *(float *)(param_1 + 0x98);
  fVar1 = *(float *)(param_1 + 0x70);
  if ((int)((uint)(fVar2 < *(float *)(param_1 + 0x70)) << 0x1f) < 0) {
    fVar1 = fVar2;
  }
  if ((int)((uint)(fVar1 < -fVar2) << 0x1f) < 0) {
    fVar1 = -fVar2;
  }
  *(float *)(param_1 + 0x70) = fVar1;
  return;
}

