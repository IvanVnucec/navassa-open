
float FUN_010273f6(float param_1,undefined4 *param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat(*param_2,(byte)(in_fpscr >> 0x15) & 3);
  return fVar1 * param_1;
}

