
void FUN_010264c0(void)

{
  undefined4 *in_r3;
  uint in_fpscr;
  
  VectorSignedToFloat(*in_r3,(byte)(in_fpscr >> 0x15) & 3);
  return;
}

