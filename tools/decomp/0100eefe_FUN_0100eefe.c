
void FUN_0100eefe(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 0xd00 + DAT_0100f0b8;
  iVar2 = DAT_0100f0b0 + (short)param_1 * 0x14;
  *(int *)(iVar2 + 0xc) = iVar1 + param_3 * 0x200 + param_2 * 0x10;
  *(int *)(iVar2 + 0x10) = iVar1 + param_3 * 0x400 + param_2 * 0x20 + 0x400;
  return;
}

