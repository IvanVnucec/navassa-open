
undefined2 FUN_010434fc(void)

{
  uint unaff_r4;
  int unaff_r5;
  
  return *(undefined2 *)
          ((unaff_r4 & 0xff) * 0xd00 + DAT_0100f0b8 + *(int *)(unaff_r5 + 8) * 0x40 +
           (uint)*(byte *)(unaff_r5 + 5) * 2 + 0xc00);
}

