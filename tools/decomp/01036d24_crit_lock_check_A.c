
undefined8 crit_lock_check_A(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char in_CY;
  char cVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_01036d5c();
  if (in_CY != '\0') {
    return uVar4;
  }
  cVar3 = param_3 == 0x11;
  if (0x10 < param_3) {
    return uVar4;
  }
  uVar4 = FUN_01036d70();
  if (cVar3 != '\0') {
    return uVar4;
  }
  if (*(int *)(param_4 + 4) == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_4 + 4) == 2) {
      uVar2 = 1;
      goto LAB_01036d42;
    }
  }
  uVar2 = 0;
LAB_01036d42:
  if ((uVar1 | uVar2) == 0) {
    return CONCAT44(uVar1 | uVar2,(int)uVar4);
  }
  return CONCAT44((int)uVar4,1);
}

