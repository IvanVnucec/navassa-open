
/* WARNING: Removing unreachable block (ram,0x0101b17c) */
/* WARNING: Removing unreachable block (ram,0x0101b188) */

void FUN_01023dac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = (int *)FUN_01023e86();
  uVar5 = FUN_010232b8();
  crit_lock_check_A(0,(char)piVar4[1]);
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 1 << (sbyte)piVar4[1];
  mailbox_xfer(*(undefined1 *)(param_1 + 0xb7));
  thunk_FUN_01015350((char)piVar4[1],3);
  thunk_FUN_01015350((char)piVar4[1],0);
  piVar4[8] = 0;
  piVar4[0xc] = 1;
  piVar4[0xf] = 3;
  sched_channel_set_state(piVar4);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  restore_priority(uVar5);
  iVar6 = *piVar4;
  bVar1 = false;
  nmi_signal_helper(1);
  task_enter_critical();
  iVar2 = DAT_0101ba48;
  if (iVar6 == 0) {
    iVar6 = *(int *)(DAT_0101ba48 + 0x78);
  }
  uVar7 = *(uint *)(iVar6 + 0x2c);
  if (uVar7 == 3) goto LAB_0101b202;
  if (uVar7 < 3) {
    if ((iVar6 != *(int *)(DAT_0101ba48 + 0x78)) &&
       (*(uint *)(*(int *)(DAT_0101ba48 + 0x78) + 0x2c) < 4)) {
LAB_0101b1b4:
      bVar1 = true;
    }
  }
  else if (iVar6 == *(int *)(DAT_0101ba48 + 0x78)) goto LAB_0101b1b4;
  *(undefined4 *)(iVar6 + 0x2c) = 3;
  if (-1 < *(int *)(iVar6 + 0x18)) {
    *(undefined4 *)(iVar6 + 0x18) = 3;
  }
  if (*(int *)(iVar6 + 0x14) == uVar7 * 0x14 + iVar2) {
    iVar3 = FUN_0101b570();
    if (iVar3 == 0) {
      *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) & ~(1 << (uVar7 & 0xff));
    }
    uVar7 = *(uint *)(iVar6 + 0x2c);
    *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) | 1 << (uVar7 & 0xff);
    vListInsert(iVar2 + uVar7 * 0x14,iVar6 + 4);
  }
  if (bVar1) {
    FUN_0101b20a();
  }
LAB_0101b202:
  FUN_0102bf96(param_4);
  return;
}

