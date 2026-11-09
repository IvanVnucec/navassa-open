
bool FUN_0101e8ec(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_01022b56(uVar1);
  if (iVar2 != 1) {
    FUN_01022b2c(uVar1);
    *(short *)(*(int *)(param_1 + 0x10) + 0x3a) = *(short *)(*(int *)(param_1 + 0x10) + 0x3a) + 1;
  }
  return iVar2 != 1;
}

