
void FUN_0100f26e(void)

{
  bool bVar1;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar2;
  uint uVar3;
  char in_ZR;
  
  FUN_0100f228();
  nmi_signal_helper(in_ZR != '\0');
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  for (uVar2 = 0; uVar2 < unaff_r4; uVar2 = uVar2 + 1) {
    FUN_0100f25c();
    **(undefined4 **)(unaff_r5 + uVar2 * 4) = *(undefined4 *)(unaff_r6 + uVar2 * 4);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar3 & 1) == 1);
  }
  return;
}

