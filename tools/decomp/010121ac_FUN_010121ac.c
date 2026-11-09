
void FUN_010121ac(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  *(uint *)(param_1 + 4) = param_2 | *(uint *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  bVar2 = iVar1 != -1;
  if (bVar2) {
    iVar1 = iVar1 + 1;
  }
  if (bVar2) {
    *(int *)(param_1 + 8) = iVar1;
  }
  return;
}

