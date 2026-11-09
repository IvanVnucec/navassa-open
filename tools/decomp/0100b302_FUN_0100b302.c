
void FUN_0100b302(void)

{
  int unaff_r5;
  
  FUN_0100b4f2();
  FUN_0100b280((*(byte *)(unaff_r5 + 0x23) & 0x7f) << 0x10 | (uint)*(byte *)(unaff_r5 + 0x22) << 8 |
               (uint)*(byte *)(unaff_r5 + 0x21));
  pin_update(unaff_r5 + 0x4f,1,1);
  FUN_0100b4b2();
  FUN_0100b4c2();
  pin_update(unaff_r5 + 0x52,0xf0,0x90);
  *(undefined1 *)(unaff_r5 + 0x51) = 0x60;
  pin_update(unaff_r5 + 0x52,0xf,0xb);
  FUN_0100b2c4();
  return;
}

