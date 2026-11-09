
void FUN_01030c1a(undefined4 param_1,undefined4 param_2)

{
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0x18) = uVar1;
  return;
}

