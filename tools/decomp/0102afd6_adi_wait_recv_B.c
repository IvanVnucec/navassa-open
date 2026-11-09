
undefined8 adi_wait_recv_B(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_r8;
  
  nmi_signal_helper();
  if (param_2 == 0) {
    uVar3 = adi_is_empty_A();
  }
  else {
    uVar3 = 1;
  }
  nmi_signal_helper(uVar3);
  FUN_0102b046();
  vPortValidateInterruptPriority();
  FUN_0102b17c();
  if ((*(uint *)(param_1 + 0x38) < *(uint *)(param_1 + 0x3c)) || (param_4 == 2)) {
    cVar1 = *(char *)(param_1 + 0x45);
    FUN_0102b2b0(param_1,param_2,param_4);
    if (cVar1 == -1) {
      if ((*(int *)(param_1 + 0x24) != 0) &&
         (iVar4 = FUN_0102b05a(), iVar4 != 0 && param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    else {
      *(char *)(param_1 + 0x45) = cVar1 + '\x01';
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(unaff_r8);
  }
  return CONCAT44(param_4,uVar3);
}

