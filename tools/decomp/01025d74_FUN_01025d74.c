
uint FUN_01025d74(uint *param_1,uint param_2)

{
  uint uVar1;
  
  nmi_signal_helper();
  FUN_01025d50((param_2 & 0xff000000) - 1);
  task_enter_critical();
  uVar1 = *param_1;
  *param_1 = uVar1 & ~param_2;
  FUN_0102bf96();
  return uVar1;
}

