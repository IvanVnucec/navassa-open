
bool FUN_0102b510(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = DAT_0102b748;
  uVar3 = *(uint *)(DAT_0102b748 + param_1 * 8);
  iVar2 = DAT_0102b744 + (short)param_1 * 0x70;
  bVar4 = *(uint *)(iVar2 + 0x24) != uVar3;
  if (bVar4) {
    *(uint *)(iVar2 + 0x24) = uVar3;
    *(uint *)(iVar2 + 0x2c) = ((uVar3 / 1000) * 1000) / 1000;
  }
  *(uint *)(iVar2 + 0x28) = ((*(uint *)(iVar1 + param_1 * 8 + 4) / 1000) * 1000) / 1000;
  return bVar4;
}

