
undefined4 FUN_0100fe6a(void)

{
  undefined4 in_r3;
  uint unaff_r4;
  int unaff_r5;
  
  FUN_0100fe96();
  FUN_01002842(unaff_r5 + 0x101);
  *(undefined1 *)(unaff_r5 + 0x105) = (char)(1 << (unaff_r4 & 0xff));
  *(undefined1 *)(unaff_r5 + 0x105) = 0;
  return in_r3;
}

