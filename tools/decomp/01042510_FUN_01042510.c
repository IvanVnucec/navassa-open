
void FUN_01042510(int param_1,byte *param_2,byte *param_3,byte *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010425c0 + param_1 * 4);
  *param_2 = (byte)(((uint)*(byte *)(iVar1 + 0x1a8) << 0x1e) >> 0x1f);
  *param_3 = *(byte *)(*(int *)(DAT_010425c4 + param_1 * 4) + 0x1a7) >> 7;
  *param_4 = (byte)(((uint)*(byte *)(iVar1 + 0xab) << 0x1a) >> 0x1e);
  return;
}

