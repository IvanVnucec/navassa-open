
void FUN_01011e42(int param_1)

{
  int iVar1;
  bool bVar2;
  
  *(undefined1 *)(param_1 + 0x2f5) = 0;
  FUN_01011e2c();
  FUN_01011fe4(param_1);
  iVar1 = *(int *)(param_1 + 0x15c);
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x170);
  }
  if (!bVar2 || iVar1 != 0) {
    return;
  }
  FUN_01011eac(param_1);
  return;
}

