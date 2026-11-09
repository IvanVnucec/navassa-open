
void FUN_01041c54(void)

{
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  
  uVar1 = VectorSignedToFloat(*(undefined4 *)(unaff_r7 + 4),(byte)(in_fpscr >> 0x15) & 3);
  FUN_01041d84(uVar1);
  return;
}

