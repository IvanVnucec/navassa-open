
float FUN_01033024(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float unaff_s16;
  
  fVar1 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  return fVar1 * unaff_s16;
}

