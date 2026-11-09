
void FUN_01023e16(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_01023e86();
  uVar3 = FUN_010232b8();
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & ~(1 << *(sbyte *)(iVar2 + 4));
  mailbox_xfer(*(undefined1 *)(param_1 + 0xb7));
  crit_lock_check_B(0,*(undefined1 *)(iVar2 + 4));
  thunk_FUN_01015350(*(undefined1 *)(iVar2 + 4),1);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  sched_channel_set_state(iVar2,2);
  restore_priority(uVar3);
  uVar3 = heap_block_probe();
  iVar1 = DAT_01023f14;
  *(undefined4 *)((uint)*(byte *)(iVar2 + 4) * 0x4c + DAT_01023f14 + 0x34) = uVar3;
  uVar3 = heap_block_probe();
  *(undefined4 *)(iVar1 + (short)(ushort)*(byte *)(iVar2 + 4) * 0x4c + 0x38) = uVar3;
  return;
}

