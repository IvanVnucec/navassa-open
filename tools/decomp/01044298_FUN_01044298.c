
void FUN_01044298(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((int)&DAT_010442bc + DAT_010442bc);
  for (piVar1 = (int *)((int)&DAT_010442b8 + DAT_010442b8); piVar1 != piVar2;
      piVar1 = (int *)(*(code *)((int)piVar1 + *piVar1))(piVar1 + 1)) {
  }
  return;
}

