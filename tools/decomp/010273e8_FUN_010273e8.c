
undefined4 FUN_010273e8(undefined4 *param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
  return uVar1;
}

