
uint FUN_0104249a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010425c0 + param_1 * 4);
  return (*(byte *)(iVar1 + 0x22) & 1) << 8 | (uint)*(byte *)(iVar1 + 0x21);
}

