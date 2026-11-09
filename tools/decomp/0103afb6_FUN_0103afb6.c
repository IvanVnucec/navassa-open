
ulonglong FUN_0103afb6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  local_20 = 0;
  iStack_1c = 0;
  iVar2 = 0;
  uStack_18 = param_4;
  while( true ) {
    FUN_0100929c(&local_20,param_1);
    iVar1 = param_1 * 0x30 + DAT_0103b4b8 + iVar2 * 0x18;
    if (*(int *)(iVar1 + 0xc) == 0 && *(int *)(iVar1 + 8) == 0) break;
    if ((*(int *)(iVar1 + 0xc) == iStack_1c && *(int *)(iVar1 + 8) == local_20) ||
       (iVar2 = iVar2 + 1, 1 < iVar2)) goto LAB_0103b006;
  }
  *(int *)(iVar1 + 8) = local_20;
  *(int *)(iVar1 + 0xc) = iStack_1c;
LAB_0103b006:
  return CONCAT44(local_20,iVar2) & 0xffffffff000000ff;
}

