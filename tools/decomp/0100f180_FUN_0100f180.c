
undefined8 FUN_0100f180(uint param_1,int param_2,int param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  nmi_signal_helper(param_1 == param_4);
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  for (uVar3 = 0; uVar3 < param_1; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_2 + (uint)*(ushort *)(param_3 + uVar3 * 2)) =
         *(undefined1 *)(param_5 + uVar3);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return CONCAT44(uVar2,param_4);
}

