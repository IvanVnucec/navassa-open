
void sched_channel_op_25(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  if ((4 < *(byte *)(param_2 + 0x1c)) || (param_3 != 0)) {
    crit_lock_check_A(4,0xb);
    crit_lock_check_B(4,0xb);
    crit_lock_check_B(2,*(undefined1 *)(param_2 + 4));
    mailbox_xfer(0x25,*(undefined1 *)(param_2 + 4));
    iVar2 = DAT_01023f14;
    iVar3 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
    iVar4 = DAT_01023f14 + 0x1c;
    *(int *)(DAT_01023f14 + 0x1c + iVar3) = *(int *)(iVar4 + iVar3) + 1;
    iVar3 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
    bVar6 = *(int *)(iVar4 + iVar3) == -1;
    if (bVar6) {
      iVar2 = iVar2 + 0x1c;
    }
    if (bVar6) {
      *(undefined4 *)(iVar2 + iVar3) = 0;
    }
    if (4 < *(byte *)(param_2 + 0x1c)) {
      if (*(code **)(param_2 + 0x54) != (code *)0x0) {
        (**(code **)(param_2 + 0x54))(*(undefined4 *)(param_2 + 0x5c));
      }
      sched_ss_helper4(param_2);
      iVar5 = stream_ctrl_event_dispatch(param_2);
      sched_channel_set_state(param_2,3);
    }
    sched_vm_op(param_1,param_2);
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
    *(undefined4 *)(param_2 + 0x60) = 0;
    *(undefined1 *)(param_2 + 100) = 0xff;
    sched_set_state_then_pend(param_1,param_2,4);
    mailbox_xfer(0x25,0);
    puVar1 = DAT_01023f1c;
    if (iVar5 != 0) {
      *DAT_01023f18 = s_scheduler_c_01023820;
      *puVar1 = 0x1f2;
      boot_msg(1,iVar5,3);
      return;
    }
  }
  return;
}

