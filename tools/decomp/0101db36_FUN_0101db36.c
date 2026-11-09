
uint FUN_0101db36(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(DAT_0101e15c + param_1 * 4);
  if (param_2 == 0) {
    pbVar1 = (byte *)(iVar2 + 0xe0);
    pbVar3 = (byte *)(iVar2 + 0xdf);
  }
  else {
    pbVar1 = (byte *)(iVar2 + 0xde);
    pbVar3 = (byte *)(iVar2 + 0xdd);
  }
  return (*pbVar1 & 3) << 8 | (uint)*pbVar3;
}

