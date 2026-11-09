
void FUN_01012124(undefined2 *param_1,undefined1 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(param_1 + 0x76);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined1 *)(param_1 + 0x6e) = param_2;
  FUN_01028514(param_1 + 0x74);
  return;
}

