
void FUN_0100f25c(void)

{
  int unaff_r5;
  int unaff_r7;
  
  nmi_signal_helper(-(uint)((*(byte *)(unaff_r5 + unaff_r7 * 4) & 3) == 0) >> 0x1f);
  return;
}

