
void FUN_0102ccba(uint param_1,undefined1 param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  if (*(byte *)(DAT_0102ce48 + 1) == param_1) {
    *(undefined1 *)(DAT_0102ce48 + 1) = param_2;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return;
}

