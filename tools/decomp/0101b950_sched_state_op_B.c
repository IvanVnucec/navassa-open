
void sched_state_op_B(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r8;
  char cVar5;
  
  nmi_signal_helper();
  vPortValidateInterruptPriority();
  basepri_raise_0x30();
  cVar5 = *(char *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x50) = 2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  uVar3 = DAT_0101ba48;
  iVar2 = DAT_0101ba44;
  if (cVar5 == '\x01') {
    cVar5 = '\x01';
    nmi_signal_helper(*(int *)(param_1 + 0x28) == 0);
    if (*(int *)(iVar2 + 0x6c) == 0) {
      FUN_0101b570();
      iVar4 = *(int *)(param_1 + 0x2c);
      FUN_0101b9c6();
      param_1 = param_1 + 4;
      cVar5 = CARRY4(uVar3,iVar4 * 0x14);
      iVar4 = uVar3 + iVar4 * 0x14;
    }
    else {
      param_1 = param_1 + 0x18;
      iVar4 = iVar2;
    }
    vListInsert(iVar4,param_1);
    FUN_0101b568(*(undefined4 *)(uVar3 + 0x78));
    if (cVar5 == '\0') {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
      *(undefined4 *)(iVar2 + 0x58) = 1;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(unaff_r8);
  }
  return;
}

