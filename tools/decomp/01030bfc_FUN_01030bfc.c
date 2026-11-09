
void FUN_01030bfc(void)

{
  int unaff_r6;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(*(undefined4 *)(unaff_r6 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0x28) = uVar1;
  return;
}

