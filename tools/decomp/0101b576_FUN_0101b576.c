
void FUN_0101b576(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  uint uVar4;
  char in_CY;
  undefined8 uVar5;
  
  iVar1 = DAT_0101b94c;
  iVar2 = *(int *)(DAT_0101b94c + 0x6c);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  FUN_0101b4f6(iVar2);
  *param_1 = param_2 | 0x80000000;
  uVar4 = param_1[3];
  nmi_signal_helper(uVar4);
  vListRemove(param_1);
  uVar5 = FUN_0101b570();
  FUN_0101b5bc((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),*(undefined4 *)(uVar4 + 0x2c));
  vListInsert();
  FUN_0101b566();
  uVar3 = extraout_r1;
  if (in_CY == '\0') {
    uVar3 = 1;
  }
  if (in_CY == '\0') {
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
  }
  return;
}

