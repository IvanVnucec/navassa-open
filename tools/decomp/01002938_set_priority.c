
void set_priority(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (param_1 & 0xf) << 4;
  uVar2 = uVar4;
  if ((param_1 & 0xf) != 0) {
    uVar2 = 1;
  }
  nmi_signal_helper(uVar2);
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  if (((uVar3 == 0) || (uVar4 < uVar3)) && (bVar1 = (bool)isCurrentModePrivileged(), bVar1)) {
    setBasePriority(uVar4);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return;
}

