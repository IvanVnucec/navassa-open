
int FUN_0103d428(undefined4 param_1,uint param_2)

{
  int unaff_r7;
  uint in_fpscr;
  
  VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return unaff_r7 << (param_2 & 0xff);
}

