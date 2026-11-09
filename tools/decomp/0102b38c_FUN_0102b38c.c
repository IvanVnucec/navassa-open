
uint FUN_0102b38c(int param_1)

{
  int iVar1;
  
  task_enter_critical();
  iVar1 = *(int *)(param_1 + 0x38);
  FUN_0102bf96();
  return -(uint)(iVar1 == 0) >> 0x1f;
}

