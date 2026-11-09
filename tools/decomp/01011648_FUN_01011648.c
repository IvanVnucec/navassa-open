
longlong FUN_01011648(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_010113f2();
    if (iVar1 == 0) {
      return (ulonglong)param_4 << 0x20;
    }
  }
  if (param_3 != 0) {
    lVar2 = FUN_0101150c(param_1,param_3,param_4);
    return lVar2;
  }
  return CONCAT44(param_4,iVar1);
}

