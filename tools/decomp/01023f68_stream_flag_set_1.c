
void stream_flag_set_1(int param_1)

{
  task_enter_critical();
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 1;
  (**(code **)(param_1 + 0xb0))();
  FUN_0102bf96();
  return;
}

