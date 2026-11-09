
void FUN_010025b4(void)

{
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  
  FUN_01002600(DAT_0100279c,*(undefined4 *)(DAT_0100279c + 8));
  do {
    if ((int)((unaff_r7 >> (unaff_r6 & 0xff)) << 0x1f) < 0) {
      *(undefined4 *)(unaff_r6 * 0xbc + unaff_r5 + 0x1a8) =
           *(undefined4 *)(unaff_r8 + unaff_r6 * 4 + 8);
      FUN_0100a880((int)unaff_r6 % 2 & 0xff,0);
      FUN_01002620();
    }
    unaff_r6 = unaff_r6 + 1;
  } while ((int)unaff_r6 < 2);
  return;
}

