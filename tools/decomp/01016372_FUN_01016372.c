
float FUN_01016372(undefined4 param_1,float *param_2)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return *param_2 + (param_2[1] + param_2[2] * fVar1) * fVar1;
}

