
void FUN_01030cc2(void)

{
  int unaff_r5;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(*(undefined4 *)(unaff_r5 + 8),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 4) = uVar1;
  return;
}

