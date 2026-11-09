
void FUN_0100c7a2(float param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float unaff_s16;
  float unaff_s17;
  
  fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0101ee64(param_1 * unaff_s17 + fVar1 * unaff_s16);
  return;
}

