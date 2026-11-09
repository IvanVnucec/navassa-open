
void FUN_0103551c(byte param_1,ushort param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  pin_update(iVar1 + 0xb5,3,(byte)param_2 & 3);
  *(char *)(iVar1 + 0xb4) = (char)(param_2 >> 2);
  return;
}

