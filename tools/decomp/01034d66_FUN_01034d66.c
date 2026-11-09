
void FUN_01034d66(void)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  int unaff_r5;
  
  pbVar3 = (byte *)(unaff_r5 + 0x1c);
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  FUN_01034ccc(pbVar3,*pbVar3 & 0x1f,0,uVar2,pbVar3);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    enableIRQinterrupts((uVar2 & 1) == 1);
  }
  return;
}

