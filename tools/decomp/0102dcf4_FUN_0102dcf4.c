
void FUN_0102dcf4(int param_1)

{
  int iVar1;
  
  iVar1 = *DAT_0102e4e4;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x14) - iVar1 & 0xffffff;
  return;
}

