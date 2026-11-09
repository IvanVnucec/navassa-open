
void FUN_0102a058(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  float unaff_s16;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  VectorFloatToUnsigned((unaff_s16 * fVar1) / DAT_0102a2bc,3);
  return;
}

