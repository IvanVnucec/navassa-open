
void FUN_0100e8d4(byte *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0100ee2c;
  *(undefined2 *)(param_1 + 0x44) =
       *(undefined2 *)(*(int *)((uint)*param_1 * 0x14 + DAT_0100ee2c + 4) + param_2 * 2);
  param_1[0x46] = *(byte *)(*(int *)((uint)*param_1 * 0x14 + iVar1 + 8) + param_2);
  *(undefined2 *)(param_1 + 0x48) =
       *(undefined2 *)(*(int *)((uint)*param_1 * 0x14 + iVar1 + 0xc) + param_2 * 2);
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)(*(int *)(iVar1 + (short)(ushort)*param_1 * 0x14 + 0x10) + param_2 * 4);
  return;
}

