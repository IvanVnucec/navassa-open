
void FUN_01030c5e(undefined1 param_1)

{
  undefined4 *unaff_r6;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(unaff_r6[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0x28) = uVar1;
  uVar1 = *unaff_r6;
  *(undefined1 *)(unaff_r7 + 0x2c) = param_1;
  uVar1 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0x24) = uVar1;
  return;
}

