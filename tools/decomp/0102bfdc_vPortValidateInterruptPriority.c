
void vPortValidateInterruptPriority(void)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = DAT_0102c018;
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getCurrentExceptionNumber();
    uVar3 = uVar3 & 0x1f;
  }
  if (0xf < uVar3) {
    nmi_signal_helper(~-(uint)(*(byte *)(DAT_0102c034 + uVar3) < *DAT_0102c018) >> 0x1f);
  }
  nmi_signal_helper(~-(uint)(*(uint *)(pbVar2 + 8) < (*DAT_0102c038 & 0x700)) >> 0x1f);
  return;
}

