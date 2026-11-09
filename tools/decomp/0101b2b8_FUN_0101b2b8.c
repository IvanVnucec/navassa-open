
undefined8 FUN_0101b2b8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  piVar1 = DAT_0101ba44;
  nmi_signal_helper(DAT_0101ba44[0x1b]);
  task_enter_critical();
  piVar1[0x1b] = piVar1[0x1b] + -1;
  iVar3 = DAT_0101ba48;
  iVar4 = 0;
  uVar5 = 0;
  if ((piVar1[0x1b] == 0) && (piVar1[0x12] != 0)) {
    while (*piVar1 != 0) {
      iVar4 = *(int *)(piVar1[3] + 0xc);
      FUN_0101b426();
      FUN_0101b570();
      iVar2 = FUN_0101b418();
      vListInsert(iVar2 * 0x14 + iVar3,iVar4 + 4);
      iVar2 = *(int *)(iVar3 + 0x78);
      bVar6 = *(uint *)(iVar2 + 0x2c) <= *(uint *)(iVar4 + 0x2c);
      if (bVar6) {
        iVar2 = 1;
      }
      if (bVar6) {
        piVar1[0x16] = iVar2;
      }
    }
    if (iVar4 != 0) {
      prvGetNextUnblockTime();
    }
    iVar3 = piVar1[0x15];
    if (iVar3 != 0) {
      do {
        iVar4 = xTaskIncrementTick();
        if (iVar4 != 0) {
          piVar1[0x16] = 1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      piVar1[0x15] = 0;
    }
    if (piVar1[0x16] != 0) {
      uVar5 = 1;
      FUN_0101b212(0x10000000,DAT_0101ba4c);
    }
  }
  FUN_0102bf96();
  return CONCAT44(in_r3,uVar5);
}

