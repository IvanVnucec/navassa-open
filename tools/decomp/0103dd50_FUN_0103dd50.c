
void FUN_0103dd50(undefined4 param_1)

{
  undefined4 unaff_r11;
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float unaff_s16;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorUnsignedToFloat(unaff_r11,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0101ee64(fVar1 - fVar2 * unaff_s16);
  return;
}

