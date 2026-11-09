
void FUN_01025192(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01025444 + param_1 * 4);
  *param_2 = (short)*(undefined4 *)(iVar1 + 0x1c);
  param_2[1] = (short)*(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(iVar1 + 0x38);
  return;
}

