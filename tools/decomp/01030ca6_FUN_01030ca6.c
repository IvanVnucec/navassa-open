
void FUN_01030ca6(void)

{
  undefined4 *in_r3;
  undefined1 unaff_r4;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = *in_r3;
  *(undefined1 *)(unaff_r7 + 0x14) = unaff_r4;
  VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  return;
}

