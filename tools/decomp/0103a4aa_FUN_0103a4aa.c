
void FUN_0103a4aa(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  param_3[3] = (char)param_1;
  param_3[2] = (char)((uint)param_1 >> 8);
  param_3[1] = (char)((uint)param_1 >> 0x10);
  *param_3 = (char)((uint)param_1 >> 0x18);
  return;
}

