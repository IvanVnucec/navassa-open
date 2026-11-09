
void FUN_0101217e(undefined2 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  spi_notify_thunk(param_1 + 6,0xc0);
  return;
}

