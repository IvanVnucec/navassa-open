
void FUN_01030c32(void)

{
  int in_r3;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(*(undefined4 *)(in_r3 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0x10) = uVar1;
  return;
}

