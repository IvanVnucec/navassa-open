
uint FUN_01002806(byte *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar4 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  for (; param_2 != 0; param_2 = param_2 >> 8) {
    uVar2 = uVar2 | (*param_1 & param_2) << (uVar3 & 0xff);
    uVar3 = uVar3 + 8;
    param_1 = param_1 + 1;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar4 & 1) == 1);
  }
  return uVar2;
}

