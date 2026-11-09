
uint FUN_0100f1b6(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char in_ZR;
  
  FUN_0100f228();
  nmi_signal_helper(in_ZR != '\0');
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  for (uVar3 = 0; uVar3 < unaff_r4; uVar3 = uVar3 + 1) {
    **(undefined1 **)(unaff_r5 + uVar3 * 4) = *(undefined1 *)(unaff_r6 + uVar3);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return uVar2;
}

