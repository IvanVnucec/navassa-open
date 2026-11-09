
undefined8 adi_wait_isr_A(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int local_20;
  
  local_20 = param_3;
  nmi_signal_helper();
  bVar1 = false;
  if (param_2 == 0) {
    uVar3 = adi_is_empty_B(*(undefined4 *)(param_1 + 0x40));
  }
  else {
    uVar3 = 1;
  }
  nmi_signal_helper(uVar3);
  iVar4 = FUN_0101b6e0();
  if (iVar4 == 0) {
    uVar3 = adi_is_empty_B(local_20);
  }
  else {
    uVar3 = 1;
  }
  nmi_signal_helper(uVar3);
  puVar2 = DAT_0102b3c4;
  while( true ) {
    task_enter_critical();
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 != 0) {
      FUN_0102b304(param_1,param_2);
      *(int *)(param_1 + 0x38) = iVar4 + -1;
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (iVar4 = vTaskRemoveFromUnorderedEventList(param_1 + 0x10), iVar4 != 0)) {
        *puVar2 = 0x10000000;
        FUN_0102b186();
      }
      FUN_0102bf96();
      uVar3 = 1;
      goto LAB_0102b168;
    }
    if (local_20 == 0) break;
    if (!bVar1) {
      FUN_0102b16c();
      bVar1 = true;
    }
    FUN_0102bf96();
    FUN_0101b2ac();
    task_enter_critical();
    cVar5 = *(char *)(param_1 + 0x44) == -1;
    if ((bool)cVar5) {
      param_3 = 0;
      *(char *)(param_1 + 0x44) = '\0';
    }
    iVar4 = FUN_0102b172();
    if (cVar5 != '\0') {
      param_3 = 0;
    }
    if (cVar5 != '\0') {
      *(char *)(iVar4 + 1) = (char)param_3;
    }
    uVar3 = FUN_0102bf96();
    iVar4 = FUN_0102afd0(uVar3,&local_20);
    if (iVar4 == 0) {
      iVar4 = FUN_0102b38c();
      if (iVar4 == 0) {
        adi_wait_state_helper(param_1);
        FUN_0101b2b8();
      }
      else {
        FUN_0101b492(param_1 + 0x24,local_20);
        adi_wait_state_helper(param_1);
        iVar4 = FUN_0101b2b8();
        if (iVar4 == 0) {
          *puVar2 = 0x10000000;
          FUN_0102b186();
        }
      }
    }
    else {
      adi_wait_state_helper(param_1);
      FUN_0101b2b8();
      iVar4 = FUN_0102b38c(param_1);
      if (iVar4 != 0) {
LAB_0102b166:
        uVar3 = 0;
LAB_0102b168:
        return CONCAT44(param_1,uVar3);
      }
    }
  }
  FUN_0102bf96();
  goto LAB_0102b166;
}

