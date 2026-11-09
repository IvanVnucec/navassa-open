
bool xTaskNotifyWait(uint param_1,uint param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  task_enter_critical();
  iVar1 = DAT_0101b9d4;
  if (*(char *)(*(int *)(DAT_0101b9d4 + 0x78) + 0x50) != '\x02') {
    *(uint *)(*(int *)(DAT_0101b9d4 + 0x78) + 0x4c) =
         *(uint *)(*(int *)(DAT_0101b9d4 + 0x78) + 0x4c) & ~param_1;
    *(undefined1 *)(*(int *)(iVar1 + 0x78) + 0x50) = 1;
    if (param_4 != 0) {
      prvAddCurrentTaskToDelayedList(param_4,1);
      FUN_0101b20a();
    }
  }
  FUN_0102bf96();
  task_enter_critical();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(*(int *)(iVar1 + 0x78) + 0x4c);
  }
  bVar2 = *(char *)(*(int *)(iVar1 + 0x78) + 0x50) == '\x02';
  if (bVar2) {
    *(uint *)(*(int *)(iVar1 + 0x78) + 0x4c) = *(uint *)(*(int *)(iVar1 + 0x78) + 0x4c) & ~param_2;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x78) + 0x50) = 0;
  FUN_0102bf96();
  return bVar2;
}

