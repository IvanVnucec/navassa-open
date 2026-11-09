
void FUN_0100e8a4(byte *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_0100ee2c;
  *(undefined2 *)(*(int *)((uint)*param_1 * 0x14 + DAT_0100ee2c + 0xc) + param_2 * 2) =
       *(undefined2 *)(param_1 + 0x48);
  *(undefined4 *)(*(int *)((short)(ushort)*param_1 * 0x14 + iVar1 + 0x10) + param_2 * 4) =
       *(undefined4 *)(param_1 + 0x50);
  return;
}

