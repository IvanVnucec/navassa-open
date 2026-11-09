
void FUN_01048c42(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 2) {
    iVar1 = *(int *)(DAT_01048cc4 + param_2 * 4) + 0x1ae;
  }
  else {
    iVar1 = *(int *)(DAT_01048cc8 + param_2 * 4) + 0x1b9;
  }
  (*DAT_01048b70)(iVar1,1,param_1);
  return;
}

