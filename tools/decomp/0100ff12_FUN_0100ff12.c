
void FUN_0100ff12(int param_1,undefined2 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 * 0x14 + DAT_0100ffcc);
  *(undefined2 *)*puVar1 = *param_2;
  *(undefined2 *)puVar1[1] = param_2[1];
  *(undefined2 *)puVar1[2] = param_2[2];
  *(undefined2 *)puVar1[3] = param_2[3];
  *(undefined2 *)puVar1[4] = param_2[4];
  return;
}

