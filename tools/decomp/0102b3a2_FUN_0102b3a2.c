
void FUN_0102b3a2(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0102b3c8;
  uVar2 = 0;
  do {
    if (*(int *)(DAT_0102b3c8 + uVar2 * 8) == 0) {
      *(undefined4 *)(DAT_0102b3c8 + uVar2 * 8) = param_2;
      *(undefined4 *)(iVar1 + uVar2 * 8 + 4) = param_1;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return;
}

