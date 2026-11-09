
void FUN_010413fc(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0100b26a();
  *(uint *)(*param_1 + iVar1 * 4) = *(uint *)(*param_1 + iVar1 * 4) & 0xdfffffff;
  return;
}

