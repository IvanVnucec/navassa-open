
longlong crit_lock_check_B(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char in_CY;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FUN_01036d5c();
  if (in_CY != '\0') {
    return lVar4;
  }
  cVar3 = param_3 == 0x11;
  if (0x10 < param_3) {
    return lVar4;
  }
  lVar4 = FUN_01036d70();
  if (cVar3 != '\0') {
    return lVar4;
  }
  if (*(int *)(param_4 + 4) == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_4 + 4) == 2) {
      uVar2 = 1;
      goto LAB_01036da0;
    }
  }
  uVar2 = 0;
LAB_01036da0:
  if ((uVar1 | uVar2) == 0) {
    return CONCAT44(uVar1 | uVar2,(int)lVar4);
  }
  return lVar4 << 0x20;
}

