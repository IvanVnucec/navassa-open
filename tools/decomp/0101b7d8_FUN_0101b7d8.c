
uint FUN_0101b7d8(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  nmi_signal_helper();
  task_enter_critical();
  uVar3 = 1;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x4c);
  }
  cVar4 = *(char *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x50) = 2;
  switch(param_3) {
  case 0:
    break;
  case 1:
    param_2 = param_2 | *(uint *)(param_1 + 0x4c);
  case 3:
switchD_0101b804_caseD_3:
    *(uint *)(param_1 + 0x4c) = param_2;
    break;
  case 2:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    break;
  case 4:
    uVar3 = (uint)(cVar4 != '\x02');
    if (cVar4 == '\x02') goto LAB_0101b878;
    goto switchD_0101b804_caseD_3;
  default:
    nmi_signal_helper(*(int *)(param_1 + 0x4c) == -1);
  }
  if (cVar4 == '\x01') {
    FUN_0101b570();
    iVar1 = DAT_0101ba48;
    uVar2 = *(uint *)(param_1 + 0x2c);
    *(uint *)(DAT_0101ba48 + 0x7c) = *(uint *)(DAT_0101ba48 + 0x7c) | uVar3 << (uVar2 & 0xff);
    vListInsert(iVar1 + uVar2 * 0x14,param_1 + 4);
    cVar4 = '\x01';
    nmi_signal_helper(*(int *)(param_1 + 0x28) == 0);
    FUN_0101b568(*(undefined4 *)(iVar1 + 0x78));
    if (cVar4 == '\0') {
      FUN_0101b882();
      FUN_0101b228();
    }
  }
LAB_0101b878:
  FUN_0102bf96();
  return uVar3;
}

