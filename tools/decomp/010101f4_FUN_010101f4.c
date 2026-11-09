
void FUN_010101f4(void)

{
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_0101023e();
  do {
    if (((uint)*(ushort *)(unaff_r6 + 0x22) & 1 << (unaff_r4 & 0xff)) != 0) {
      FUN_010102be(unaff_r4 & 0xff,unaff_r5 + unaff_r4 * 0xe);
    }
    unaff_r4 = unaff_r4 + 1;
  } while ((int)unaff_r4 < 3);
  return;
}

