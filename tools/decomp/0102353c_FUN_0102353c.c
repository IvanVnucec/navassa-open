
void FUN_0102353c(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0;
  bVar1 = false;
  if ((-1 < *(int *)(param_2 + 0x60) << 0x17) || (param_3 != 0)) {
    bVar1 = true;
  }
  if (param_2 == 0) {
    *DAT_01023f18 = s_scheduler_c_01023820;
    *DAT_01023f1c = 0x20d;
    boot_msg(1,0xff32,3);
  }
  crit_lock_check_B(2,*(undefined1 *)(param_2 + 4));
  mailbox_xfer(0x26,*(undefined1 *)(param_2 + 4));
  iVar3 = DAT_01023f14;
  iVar5 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
  iVar6 = DAT_01023f14 + 8;
  *(int *)(DAT_01023f14 + 8 + iVar5) = *(int *)(iVar6 + iVar5) + 1;
  iVar5 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
  bVar8 = *(int *)(iVar6 + iVar5) == -1;
  if (bVar8) {
    iVar3 = iVar3 + 8;
  }
  if (bVar8) {
    *(undefined4 *)(iVar3 + iVar5) = 0;
  }
  if (*(code **)(param_2 + 0x58) != (code *)0x0) {
    (**(code **)(param_2 + 0x58))(*(undefined4 *)(param_2 + 0x5c));
  }
  sched_set_state_then_pend(param_1,param_2,1);
  sched_vm_op(param_1,param_2);
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (((bVar1) || (-1 < *(int *)(param_2 + 0x60) << 0x16)) &&
     (iVar7 = stream_ctrl_event_dispatch(param_2), bVar1)) {
    sched_ss_helper4(param_2);
    *(undefined1 *)(param_2 + 100) = 0xff;
    *(undefined4 *)(param_2 + 0x60) = 0;
    uVar4 = 3;
  }
  else {
    sched_ss_helper2(param_2,1);
    uVar4 = 6;
  }
  sched_channel_set_state(param_2,uVar4);
  puVar2 = DAT_01023f1c;
  if (iVar7 != 0) {
    *DAT_01023f18 = s_scheduler_c_01023820;
    *puVar2 = 0x247;
    boot_msg(1,iVar7,3);
  }
  mailbox_xfer(0x26,0);
  return;
}

