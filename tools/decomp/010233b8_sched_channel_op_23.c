
void sched_channel_op_23(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_2 + 0x1c) == '\a' || *(char *)(param_2 + 0x1c) == '\x05') {
    crit_lock_check_A(5,0xb);
    crit_lock_check_B(5,0xb);
    mailbox_xfer(0x23,*(undefined1 *)(param_2 + 4));
    iVar2 = DAT_01023f14;
    iVar3 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
    iVar4 = DAT_01023f14 + 0x14;
    *(int *)(DAT_01023f14 + 0x14 + iVar3) = *(int *)(iVar4 + iVar3) + 1;
    iVar3 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
    if (*(int *)(iVar4 + iVar3) == -1) {
      *(undefined4 *)(iVar2 + 0x14 + iVar3) = 0;
    }
    if (*(code **)(param_2 + 0x50) != (code *)0x0) {
      (**(code **)(param_2 + 0x50))(*(undefined4 *)(param_2 + 0x5c));
    }
    iVar2 = stream_ctrl_event_dispatch(param_2);
    sched_ss_helper3(param_2);
    sched_channel_set_state(param_2,8);
    mailbox_xfer(0x23,0);
    puVar1 = DAT_01023f1c;
    if (iVar2 != 0) {
      *DAT_01023f18 = s_scheduler_c_01023820;
      *puVar1 = 0x1a2;
      boot_msg(1,iVar2,3);
      return;
    }
  }
  return;
}

