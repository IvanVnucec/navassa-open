
void adi_wait_state_helper(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  
  task_enter_critical();
  cVar2 = *(char *)(param_1 + 0x45);
  while (('\0' < cVar2 && (*(int *)(param_1 + 0x24) != 0))) {
    iVar1 = vTaskRemoveFromUnorderedEventList(param_1 + 0x24);
    if (iVar1 != 0) {
      FUN_0101b630();
    }
    cVar2 = cVar2 + -1;
  }
  *(undefined1 *)(param_1 + 0x45) = 0xff;
  FUN_0102bf96();
  task_enter_critical();
  cVar2 = *(char *)(param_1 + 0x44);
  while (('\0' < cVar2 && (*(int *)(param_1 + 0x10) != 0))) {
    iVar1 = FUN_0102b190();
    if (iVar1 != 0) {
      FUN_0101b630();
    }
    cVar2 = cVar2 + -1;
  }
  *(char *)(param_1 + 0x44) = -1;
  FUN_0102bf96(param_4);
  return;
}

