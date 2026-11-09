
void FUN_0100f1e4(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = DAT_0100f224;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  pin_update(DAT_0100f224,0x20,0x20);
  for (uVar3 = 0; uVar3 < param_1; uVar3 = uVar3 + 1) {
    *(undefined1 *)(param_2 + uVar3) = *(undefined1 *)(param_3 + uVar3);
  }
  pin_update(uVar2,0x20,0);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar4 & 1) == 1);
  }
  return;
}

