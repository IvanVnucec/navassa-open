
void FUN_0101b418(void)

{
  int unaff_r4;
  int unaff_r5;
  
  *(uint *)(unaff_r4 + 0x7c) = *(uint *)(unaff_r4 + 0x7c) | 1 << (*(uint *)(unaff_r5 + 0x2c) & 0xff)
  ;
  return;
}

