
void FUN_0100eeaa(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_0100f0b0 + (short)param_1 * 0x14);
  iVar1 = param_1 * 0x24c + DAT_0100f0b4;
  piVar2[2] = iVar1 + 0x82;
  piVar2[1] = iVar1 + 2;
  piVar2[3] = iVar1 + 0xc2;
  piVar2[4] = iVar1 + 0x144;
  *piVar2 = iVar1;
  return;
}

