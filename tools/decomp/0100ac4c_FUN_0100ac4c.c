
void FUN_0100ac4c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = DAT_0100acb8;
  *DAT_0100acb8 = -0x11111112;
  uVar3 = getMainStackPointer();
  *DAT_0100acb4 = uVar3;
  if (DAT_0100acbc <= uVar3) {
    param_3 = DAT_0100acc0;
  }
  uVar4 = DAT_0100acbc;
  if (DAT_0100acbc > uVar3 || param_3 < uVar3) {
    uVar4 = DAT_0100acbc + DAT_0100acc4 >> 1;
    bVar1 = (bool)isCurrentModePrivileged();
    uVar3 = DAT_0100acc4;
    if (bVar1) {
      setMainStackPointer(uVar4);
    }
  }
  FUN_0100ac14(uVar3,uVar4);
  *piVar2 = -1;
  FUN_010027dc(DAT_0100acc8,1,1);
  FUN_0101ba9e();
  FUN_0100adea(0x3d);
  do {
  } while (*piVar2 != 0);
  return;
}

