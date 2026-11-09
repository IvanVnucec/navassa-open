
void FUN_01043506(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0104366c;
  iVar3 = *(int *)(DAT_0104366c + 0x40);
  *(int *)(param_1 + 0x10) = DAT_0104366c;
  sVar1 = (short)param_2;
  *(int *)(param_1 + 0x18) = sVar1 * 0x54 + iVar3 + 0x40;
  iVar3 = DAT_01043674;
  *(int *)(param_1 + 0x14) = sVar1 * 0x24 + DAT_01043674 + 0x144;
  *(int *)(param_1 + 0xc) = iVar3 + sVar1 * 0xa0 + 4;
  *(int *)(param_1 + 0x3c) = sVar1 * 0x34 + iVar2 + 0x44;
  *(int *)(param_1 + 0x40) = param_2 * 0x48 + iVar2 + 0xb0;
  return;
}

