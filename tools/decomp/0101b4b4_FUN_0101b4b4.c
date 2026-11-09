
void FUN_0101b4b4(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  nmi_signal_helper();
  iVar1 = *(int *)(DAT_0101b94c + 0x6c);
  if (iVar1 != 0) {
    iVar1 = 1;
  }
  FUN_0101b4f6(iVar1);
  uVar2 = FUN_0101b4ee();
  *(uint *)((int)((ulonglong)uVar2 >> 0x20) + 0x18) = param_2 | 0x80000000;
  vListInsert(param_1,*(int *)((int)uVar2 + 0x78) + 0x18);
  prvAddCurrentTaskToDelayedList(param_3,1);
  return;
}

