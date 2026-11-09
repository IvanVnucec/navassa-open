
void FUN_010121d6(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  bVar2 = iVar1 != -1;
  if (bVar2) {
    iVar1 = iVar1 + 1;
  }
  if (bVar2) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return;
}

