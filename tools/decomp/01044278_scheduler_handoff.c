
int * scheduler_handoff(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_01044298();
  FUN_010359ec(0);
  piVar1 = (int *)thunk_FUN_010442c4();
  piVar3 = (int *)((int)&DAT_010442bc + DAT_010442bc);
  piVar2 = (int *)((int)&DAT_010442b8 + DAT_010442b8);
  while (piVar2 != piVar3) {
    piVar1 = (int *)(*(code *)((int)piVar2 + *piVar2))(piVar2 + 1);
    piVar2 = piVar1;
  }
  return piVar1;
}

