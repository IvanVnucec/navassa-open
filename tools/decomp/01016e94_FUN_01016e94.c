
void FUN_01016e94(byte *param_1,uint param_2,byte param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  *param_1 = (byte)(param_4 << (param_2 & 0xff)) & param_3 | *param_1 & ~param_3;
  FUN_01017320();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return;
}

