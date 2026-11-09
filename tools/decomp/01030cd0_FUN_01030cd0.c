
void FUN_01030cd0(void)

{
  undefined4 *unaff_r5;
  undefined4 *unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(unaff_r5[2],(byte)(in_fpscr >> 0x15) & 3);
  unaff_r7[1] = uVar1;
  uVar1 = *unaff_r5;
  *(undefined1 *)(unaff_r7 + 2) = 0;
  uVar1 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  *unaff_r7 = uVar1;
  return;
}

