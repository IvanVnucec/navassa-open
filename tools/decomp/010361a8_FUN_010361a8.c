
undefined4 FUN_010361a8(byte *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0103619a();
  uVar2 = 1;
  if ((iVar1 == 0) && (*(char *)(DAT_010364dc + (uint)*param_1) == *param_2)) {
    *param_2 = '\0';
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

