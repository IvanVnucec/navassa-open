
void sched_channel_op_22(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_18 [4];
  
  iVar4 = DAT_01023f14;
  local_18[0] = '\0';
  crit_lock_check_A(2,*(undefined1 *)(param_2 + 4));
  mailbox_xfer(0x22,*(undefined1 *)(param_2 + 4));
  iVar2 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
  *(int *)(iVar4 + 4 + iVar2) = *(int *)(iVar4 + 4 + iVar2) + 1;
  iVar2 = (short)(ushort)*(byte *)(param_2 + 4) * 0x4c;
  if (*(int *)(iVar4 + 4 + iVar2) == -1) {
    *(undefined4 *)(iVar4 + 4 + iVar2) = 0;
  }
  uVar3 = heap_block_probe();
  *(undefined4 *)(iVar4 + (short)(ushort)*(byte *)(param_2 + 4) * 0x4c + 0x2c) = uVar3;
  iVar4 = sched_ss_helper1(param_2,local_18);
  puVar1 = DAT_01023f1c;
  if (local_18[0] == '\0') {
    if (iVar4 == 0) {
      sched_ss_helper2(param_2);
      if (*(code **)(param_2 + 0x44) != (code *)0x0) {
        (**(code **)(param_2 + 0x44))(*(undefined4 *)(param_2 + 0x5c));
      }
      if (*(code **)(param_2 + 0x48) != (code *)0x0) {
        (**(code **)(param_2 + 0x48))(*(undefined4 *)(param_2 + 0x5c));
      }
      if (*(code **)(param_2 + 0x4c) != (code *)0x0) {
        (**(code **)(param_2 + 0x4c))(*(undefined4 *)(param_2 + 0x5c));
      }
    }
    else {
      *DAT_01023f18 = s_scheduler_c_01023820;
      *puVar1 = 0x139;
      boot_msg(1,iVar4,3);
    }
    sched_channel_set_state(param_2,5);
    sched_set_state_then_pend(param_1,param_2,2);
  }
  mailbox_xfer(0x22,0);
  return;
}

