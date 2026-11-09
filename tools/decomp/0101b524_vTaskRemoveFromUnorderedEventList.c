
undefined4 vTaskRemoveFromUnorderedEventList(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char in_CY;
  undefined8 uVar4;
  
  iVar1 = DAT_0101b94c;
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
  nmi_signal_helper(iVar3);
  FUN_0101b426();
  if (*(int *)(iVar1 + 0x6c) == 0) {
    uVar4 = FUN_0101b570();
    uVar4 = FUN_0101b5bc((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    iVar2 = (int)uVar4;
  }
  else {
    iVar3 = iVar3 + 0x18;
    iVar2 = iVar1;
  }
  vListInsert(iVar2,iVar3);
  FUN_0101b566();
  if (in_CY == '\0') {
    *(undefined4 *)(iVar1 + 0x58) = 1;
    return 1;
  }
  return 0;
}

