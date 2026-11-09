
void FUN_01043238(undefined4 param_1,float param_2)

{
  uint in_fpscr;
  float fVar1;
  float unaff_s16;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  VectorFloatToUnsigned((unaff_s16 * fVar1) / param_2,3);
  return;
}

