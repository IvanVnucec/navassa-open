
void FUN_01010218(void)

{
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_0101023e();
  do {
    if (((uint)*(ushort *)(unaff_r6 + 0x22) & 1 << (unaff_r4 & 0xff)) != 0) {
      FUN_01010366(unaff_r4 & 0xff,unaff_r5 + unaff_r4 * 0xe,0);
    }
    unaff_r4 = unaff_r4 + 1;
  } while ((int)unaff_r4 < 2);
  return;
}

