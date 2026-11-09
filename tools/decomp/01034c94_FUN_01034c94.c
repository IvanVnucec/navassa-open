
void FUN_01034c94(byte *param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  FUN_01034ccc(param_1,param_4 << (param_2 & 0xff) & param_3 | (uint)*param_1 & ~param_3);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return;
}

