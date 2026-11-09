
undefined4 FUN_01026d28(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  uVar3 = VectorFloatToUnsigned((fVar1 * 24.0) / fVar2 + 1.0,3);
  return uVar3;
}

