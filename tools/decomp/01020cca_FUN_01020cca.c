
void FUN_01020cca(byte param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorUnsignedToFloat((uint)param_1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_01011240(0x40000000,uVar1);
  return;
}

