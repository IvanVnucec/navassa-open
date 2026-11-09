
undefined4 FUN_01030c0a(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int unaff_r7;
  uint in_fpscr;
  
  *(undefined1 *)(unaff_r7 + 0x20) = param_3;
  VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  return *(undefined4 *)(unaff_r7 + 0x1c);
}

