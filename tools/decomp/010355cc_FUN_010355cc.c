
int FUN_010355cc(byte param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  uVar3 = (uint)(*(byte *)(iVar2 + 0xb7) & 3) | (uint)*(byte *)(iVar2 + 0xb6) << 2;
  sVar1 = (short)uVar3;
  if ((int)(uVar3 << 0x16) < 0) {
    sVar1 = sVar1 + -0x400;
  }
  return (int)sVar1;
}

