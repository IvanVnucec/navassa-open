
undefined8
sched_state_op_A(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4,uint *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_r8;
  
  nmi_signal_helper();
  vPortValidateInterruptPriority();
  uVar8 = 1;
  basepri_raise_0x30();
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x4c);
  }
  cVar1 = *(char *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x50) = 2;
  switch(param_3) {
  case 0:
    break;
  case 1:
    param_2 = param_2 | *(uint *)(param_1 + 0x4c);
  case 3:
switchD_0101b8bc_caseD_3:
    *(uint *)(param_1 + 0x4c) = param_2;
    break;
  case 2:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    break;
  case 4:
    uVar8 = (uint)(cVar1 != '\x02');
    if (cVar1 == '\x02') goto LAB_0101b942;
    goto switchD_0101b8bc_caseD_3;
  default:
    nmi_signal_helper(*(int *)(param_1 + 0x4c) == -1);
  }
  iVar4 = DAT_0101ba48;
  iVar3 = DAT_0101b94c;
  if (cVar1 == '\x01') {
    nmi_signal_helper(*(int *)(param_1 + 0x28) == 0);
    if (*(int *)(iVar3 + 0x6c) == 0) {
      vListRemove(param_1 + 4);
      uVar7 = *(uint *)(param_1 + 0x2c);
      *(uint *)(iVar4 + 0x7c) = *(uint *)(iVar4 + 0x7c) | uVar8 << (uVar7 & 0xff);
      iVar6 = param_1 + 4;
      iVar5 = iVar4 + uVar7 * 0x14;
    }
    else {
      iVar6 = param_1 + 0x18;
      iVar5 = iVar3;
    }
    vListInsert(iVar5,iVar6);
    if (*(uint *)(*(int *)(iVar4 + 0x78) + 0x2c) < *(uint *)(param_1 + 0x2c)) {
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar8;
      }
      *(uint *)(iVar3 + 0x58) = uVar8;
    }
  }
LAB_0101b942:
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(unaff_r8);
  }
  return CONCAT44(param_4,uVar8);
}

