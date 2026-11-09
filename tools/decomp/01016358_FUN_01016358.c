
void FUN_01016358(void)

{
  int unaff_r5;
  char unaff_r6;
  int unaff_r7;
  uint in_fpscr;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = VectorSignedToFloat((int)unaff_r6,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = VectorSignedToFloat((int)*(short *)(unaff_r5 + unaff_r7 * 2),(byte)(in_fpscr >> 0x15) & 3)
  ;
  FUN_01011240(uVar1,uVar2);
  return;
}

