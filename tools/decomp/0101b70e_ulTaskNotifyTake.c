
int ulTaskNotifyTake(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  task_enter_critical();
  iVar1 = DAT_0101b9d4;
  if ((*(int *)(*(int *)(DAT_0101b9d4 + 0x78) + 0x4c) == 0) &&
     (*(undefined1 *)(*(int *)(DAT_0101b9d4 + 0x78) + 0x50) = 1, param_2 != 0)) {
    prvAddCurrentTaskToDelayedList(param_2);
    FUN_0101b20a();
  }
  FUN_0102bf96();
  task_enter_critical();
  iVar3 = *(int *)(*(int *)(iVar1 + 0x78) + 0x4c);
  if (iVar3 != 0) {
    if (param_1 == 0) {
      iVar2 = iVar3 + -1;
    }
    else {
      iVar2 = 0;
    }
    *(int *)(*(int *)(iVar1 + 0x78) + 0x4c) = iVar2;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x78) + 0x50) = 0;
  FUN_0102bf96();
  return iVar3;
}

