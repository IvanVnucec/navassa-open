
undefined4 adi_wait_recv_A(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  
  iVar8 = param_3;
  nmi_signal_helper();
  if (param_2 == 0) {
    uVar4 = adi_is_empty_A();
  }
  else {
    uVar4 = 1;
  }
  nmi_signal_helper(uVar4);
  FUN_0102b046();
  iVar5 = FUN_0101b6e0();
  if (iVar5 == 0) {
    uVar4 = adi_is_empty_B(param_3);
  }
  else {
    uVar4 = 1;
  }
  nmi_signal_helper(uVar4);
  puVar3 = DAT_0102b3c4;
  bVar1 = false;
  while( true ) {
    task_enter_critical();
    if ((*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x3c)) || (param_4 == 2)) {
      iVar8 = FUN_0102b2b0(param_1,param_2,param_4);
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar8 = FUN_0102b05a();
      }
      if (iVar8 != 0) {
        *puVar3 = 0x10000000;
        FUN_0102b186();
      }
      FUN_0102bf96();
      return 1;
    }
    if (param_3 == 0) {
      FUN_0102bf96();
      return 0;
    }
    bVar2 = bVar1;
    if (!bVar1) {
      FUN_0102b16c();
      bVar2 = true;
    }
    cVar9 = bVar1 && param_3 == 0;
    FUN_0102bf96();
    FUN_0101b2ac();
    task_enter_critical();
    puVar6 = (undefined1 *)FUN_0102b28c();
    if (cVar9 != '\0') {
      iVar8 = 0;
      *puVar6 = 0;
    }
    iVar5 = FUN_0102b172();
    if (cVar9 != '\0') {
      iVar8 = 0;
    }
    if (cVar9 != '\0') {
      *(char *)(iVar5 + 1) = (char)iVar8;
    }
    FUN_0102bf96();
    iVar5 = FUN_0102afce();
    if (iVar5 != 0) break;
    task_enter_critical();
    iVar5 = *(int *)(param_1 + 0x38);
    iVar7 = *(int *)(param_1 + 0x3c);
    FUN_0102bf96();
    bVar1 = bVar2;
    if (iVar5 == iVar7) {
      FUN_0101b492(param_1 + 0x10,param_3);
      FUN_0102b29a();
      iVar5 = FUN_0101b2b8();
      if (iVar5 == 0) {
        *puVar3 = 0x10000000;
        FUN_0102b186();
      }
    }
    else {
      FUN_0102b29a();
      FUN_0101b2b8();
    }
  }
  FUN_0102b29a();
  FUN_0101b2b8();
  return 0;
}

