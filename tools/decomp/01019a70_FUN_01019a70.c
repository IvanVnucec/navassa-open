
void FUN_01019a70(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0101ee64(fVar1 / fVar2);
  return;
}

