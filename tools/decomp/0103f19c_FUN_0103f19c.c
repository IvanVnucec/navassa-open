
undefined8 FUN_0103f19c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  uVar3 = FUN_0103f1f8(&local_10);
  if ((local_10 != 0) && ((int)(uVar3 << 1) >> 0x18 != -1)) {
    uVar1 = (uVar3 & 0x7fffffff) >> 0x17;
    iVar2 = local_10 + uVar1;
    if ((uVar1 != 0) && (0 < iVar2)) {
      if (0xfe < iVar2) {
        return CONCAT44(uStack_c,local_10);
      }
      return CONCAT44(uStack_c,local_10);
    }
    if ((uVar3 & 0x7fffffff) != 0) {
      FUN_0103856c();
    }
  }
  return CONCAT44(uStack_c,local_10);
}

