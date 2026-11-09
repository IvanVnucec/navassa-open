
uint FUN_01035558(byte param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  return (uint)(*(byte *)(iVar1 + 0xb5) & 3) | (uint)*(byte *)(iVar1 + 0xb4) << 2;
}

