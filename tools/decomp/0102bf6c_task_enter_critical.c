
void task_enter_critical(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x30);
  }
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  iVar2 = *(int *)(DAT_0102c018 + 4) + 1;
  *(int *)(DAT_0102c018 + 4) = iVar2;
  if (iVar2 == 1) {
    nmi_signal_helper(-(uint)((*DAT_0102c030 & 0xff) == 0) >> 0x1f);
    return;
  }
  return;
}

