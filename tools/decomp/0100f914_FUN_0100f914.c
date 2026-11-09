
undefined4 FUN_0100f914(void)

{
  undefined4 in_r3;
  byte unaff_r4;
  int unaff_r5;
  
  FUN_0100fe96(unaff_r4);
  FUN_01002842(unaff_r5 + 0xfd);
  *(undefined1 *)(unaff_r5 + 0x105) = (char)(1 << (uint)unaff_r4);
  *(undefined1 *)(unaff_r5 + 0x105) = 0;
  return in_r3;
}

