
void FUN_0100b698(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = param_2;
  param_1[4] = 0;
  return;
}

