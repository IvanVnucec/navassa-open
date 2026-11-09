
void FUN_01023a70(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 200) == 0) {
    return;
  }
  crit_lock_check_A(7,0xb);
  FUN_0100ae0a(7,1);
  if (((int)((uint)*(byte *)(param_1 + 200) << 0x1e) < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    sched_channel_op_25(param_1,*(int *)(param_1 + 0xc4),1);
  }
  if (((int)((uint)*(byte *)(param_1 + 200) << 0x1d) < 0) && (*(int *)(param_1 + 8) != 0)) {
    do {
      sched_channel_op_25(param_1,*(undefined4 *)(param_1 + 0xc + uVar4 * 4),1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  if ((int)((uint)*(byte *)(param_1 + 200) << 0x1c) < 0) {
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar2 = *piVar5;
        if ((*(char *)(iVar2 + 0x1c) == '\a' || *(char *)(iVar2 + 0x1c) == '\b') &&
           ((int)((uint)*(byte *)(iVar2 + 0x60) << 0x19) < 0)) {
          sched_channel_op_25(param_1,iVar2,1);
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < *(uint *)(param_1 + 8));
    }
  }
  pbVar1 = DAT_01023f24;
  if ((int)((uint)*(byte *)(param_1 + 200) << 0x1a) < 0) {
    bVar3 = 1;
    do {
      iVar2 = FUN_0102b506(bVar3);
      if (((*(uint *)(iVar2 + 0x14) & (uint)*pbVar1) == 0) && (2 < *(byte *)(iVar2 + 0x1c))) {
        FUN_0102b58a(iVar2,0x20);
        sched_channel_op_25(param_1,iVar2,1);
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 0x14);
  }
  if ((int)((uint)*(byte *)(param_1 + 200) << 0x19) < 0) {
    bVar3 = 1;
    do {
      iVar2 = FUN_0102b506(bVar3);
      if (2 < *(byte *)(iVar2 + 0x1c)) {
        FUN_0102b58a(iVar2,0x20);
        sched_channel_op_25(param_1,iVar2,1);
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 0x14);
  }
  if ((int)((uint)*(byte *)(param_1 + 200) << 0x1f) < 0) {
    FUN_0102390c(param_1);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  FUN_0100ae0a(7);
  crit_lock_check_B(7,0xb);
  return;
}

