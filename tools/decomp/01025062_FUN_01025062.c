
void FUN_01025062(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  FUN_01024ca2(param_1,0);
  pbVar2 = DAT_01025450;
  if (param_1 != 0) {
    pbVar2 = DAT_01025454;
  }
  bVar1 = *pbVar2;
  FUN_010250c6(*(int *)(DAT_0102544c + param_1 * 4) + 0x20000);
  FUN_01024bf8(param_1);
  *pbVar2 = bVar1 & 0xef;
  return;
}

