
void FUN_01015e2c(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(DAT_01015e98 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(fVar1 * fVar3 * DAT_01015e80,3);
  do {
  } while ((uint)(*DAT_01015e9c - *DAT_01015e9c) < uVar2);
  return;
}

