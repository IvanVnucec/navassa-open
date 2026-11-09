
undefined4 FUN_0100f232(void)

{
  undefined4 in_r3;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar1;
  char in_ZR;
  
  FUN_0100f228();
  nmi_signal_helper(in_ZR != '\0');
  for (uVar1 = 0; uVar1 < unaff_r4; uVar1 = uVar1 + 1) {
    FUN_0100f25c();
    *(undefined4 *)(unaff_r6 + uVar1 * 4) = **(undefined4 **)(unaff_r5 + uVar1 * 4);
  }
  return in_r3;
}

