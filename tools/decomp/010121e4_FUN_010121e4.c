
void FUN_010121e4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 100;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0xffffffff;
  spi_notify_thunk(param_1 + 0x1d,0x28);
  FUN_01012198(param_1 + 0x17);
  FUN_01012198(param_1 + 0x11);
  FUN_01012198(param_1 + 0xb);
  FUN_01012198(param_1 + 5);
  return;
}

