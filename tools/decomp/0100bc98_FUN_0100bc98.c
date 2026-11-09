
undefined4 FUN_0100bc98(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(DAT_0100bce4 + param_1 * 4);
  uVar2 = FUN_0100bce8(param_1,4,4);
  FUN_0100bce8(uVar2,1,0);
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  *puVar4 = *puVar4 | 0x10000;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar3 & 1) == 1);
  }
  return param_4;
}

