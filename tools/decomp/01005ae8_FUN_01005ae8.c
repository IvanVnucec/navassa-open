
void FUN_01005ae8(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + (uint)*(byte *)(param_2 + 0x29d) * 4) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return;
}

