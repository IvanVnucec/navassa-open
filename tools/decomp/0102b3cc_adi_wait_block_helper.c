
void adi_wait_block_helper(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  
  uVar3 = param_4;
  task_enter_critical();
  bVar5 = *(char *)(param_1 + 0x44) == -1;
  uVar2 = extraout_r1;
  if (bVar5) {
    uVar2 = 0;
  }
  if (bVar5) {
    *(undefined1 *)(param_1 + 0x44) = uVar2;
  }
  bVar5 = *(char *)(param_1 + 0x45) == -1;
  if (bVar5) {
    uVar2 = 0;
  }
  if (bVar5) {
    *(undefined1 *)(param_1 + 0x45) = uVar2;
  }
  FUN_0102bf96();
  if (*(int *)(param_1 + 0x38) == 0) {
    vTaskPlaceOnUnblockedEventList(param_1 + 0x24,param_2,param_3);
  }
  task_enter_critical(param_1,param_4);
  cVar4 = *(char *)(param_1 + 0x45);
  while (('\0' < cVar4 && (*(int *)(param_1 + 0x24) != 0))) {
    iVar1 = vTaskRemoveFromUnorderedEventList(param_1 + 0x24);
    if (iVar1 != 0) {
      FUN_0101b630();
    }
    cVar4 = cVar4 + -1;
  }
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  FUN_0102bf96();
  task_enter_critical();
  cVar4 = *(char *)(param_1 + 0x44);
  while (('\0' < cVar4 && (*(int *)(param_1 + 0x10) != 0))) {
    iVar1 = FUN_0102b190();
    if (iVar1 != 0) {
      FUN_0101b630();
    }
    cVar4 = cVar4 + -1;
  }
  *(char *)(param_1 + 0x44) = -1;
  FUN_0102bf96(uVar3);
  return;
}

