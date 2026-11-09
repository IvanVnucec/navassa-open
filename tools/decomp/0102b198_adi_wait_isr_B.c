
undefined4 adi_wait_isr_B(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  
  iVar5 = param_3;
  nmi_signal_helper();
  bVar1 = false;
  cVar7 = param_2 == 0;
  if ((bool)cVar7) {
    adi_is_empty_A();
  }
  else {
    cVar7 = '\0';
  }
  nmi_signal_helper();
  iVar3 = FUN_0101b6e0();
  if (iVar3 == 0) {
    adi_is_empty_B(param_3);
  }
  else {
    cVar7 = '\0';
  }
  nmi_signal_helper();
  puVar2 = DAT_0102b3c4;
  while( true ) {
    task_enter_critical();
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0xc);
      FUN_0102b304(param_1,param_2);
      *(undefined4 *)(param_1 + 0xc) = uVar6;
      if ((*(int *)(param_1 + 0x24) != 0) && (iVar5 = FUN_0102b05a(), iVar5 != 0)) {
        *puVar2 = 0x10000000;
        FUN_0102b186();
      }
      FUN_0102bf96();
      return 1;
    }
    if (param_3 == 0) break;
    if (!bVar1) {
      FUN_0102b16c();
      bVar1 = true;
      cVar7 = '\0';
    }
    FUN_0102bf96();
    FUN_0101b2ac();
    task_enter_critical();
    puVar4 = (undefined1 *)FUN_0102b28c();
    if (cVar7 != '\0') {
      iVar5 = 0;
      *puVar4 = 0;
    }
    iVar3 = FUN_0102b172();
    if (cVar7 != '\0') {
      iVar5 = 0;
    }
    if (cVar7 != '\0') {
      *(char *)(iVar3 + 1) = (char)iVar5;
    }
    FUN_0102bf96();
    iVar3 = FUN_0102afce();
    if (iVar3 == 0) {
      iVar3 = FUN_0102b38c();
      cVar7 = iVar3 == 0;
      if ((bool)cVar7) {
        FUN_0102b29a();
        FUN_0101b2b8();
      }
      else {
        FUN_0101b492(param_1 + 0x24,param_3);
        FUN_0102b29a();
        iVar3 = FUN_0101b2b8();
        cVar7 = iVar3 == 0;
        if ((bool)cVar7) {
          *puVar2 = 0x10000000;
          FUN_0102b186();
        }
      }
    }
    else {
      adi_wait_state_helper(param_1);
      FUN_0101b2b8();
      iVar3 = FUN_0102b38c(param_1);
      cVar7 = iVar3 == 0;
      if (!(bool)cVar7) {
        return 0;
      }
    }
  }
  FUN_0102bf96();
  return 0;
}

