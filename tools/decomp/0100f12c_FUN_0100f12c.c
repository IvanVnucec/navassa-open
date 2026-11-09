
void FUN_0100f12c(void)

{
  uint uVar1;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char in_ZR;
  
  FUN_0100f228();
  nmi_signal_helper(in_ZR != '\0');
  for (uVar1 = 0; uVar1 < unaff_r4; uVar1 = uVar1 + 1) {
    *(undefined1 *)(unaff_r6 + uVar1) = **(undefined1 **)(unaff_r5 + uVar1 * 4);
  }
  return;
}

