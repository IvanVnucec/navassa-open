
void FUN_0103537a(byte param_1,byte param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  if (param_3 == '\0') {
    *(byte *)(iVar1 + 0xa9) = param_2;
    pin_update(iVar1 + 0xaa,7,0);
  }
  else {
    *(char *)(iVar1 + 0xa9) = (char)((uint)param_2 << 1);
    pin_update(iVar1 + 0xaa,7,((uint)param_2 << 1) >> 8);
  }
  return;
}

