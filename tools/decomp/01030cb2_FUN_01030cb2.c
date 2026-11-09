
void FUN_01030cb2(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = *param_4;
  *(undefined1 *)(unaff_r7 + 0x14) = param_1;
  uVar1 = VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(unaff_r7 + 0xc) = uVar1;
  return;
}

