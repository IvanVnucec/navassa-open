
undefined4 FUN_010242e8(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0;
  if ((int)((uint)(ABS(param_1) < 0.25) << 0x1f) < 0) {
    fVar2 = DAT_01024320;
    if ((int)((uint)(param_1 < 0.0) << 0x1f) < 0) {
      fVar2 = 2.0;
    }
    uVar1 = VectorFloatToUnsignedFixed(param_1 + fVar2,0x10,0xf);
  }
  return uVar1;
}

