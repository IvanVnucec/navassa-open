
byte FUN_0103563e(byte param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  bVar2 = *(byte *)(iVar1 + 0x51) & 1;
  if (-1 < (int)((uint)bVar2 << 0x1f)) {
    pin_update(iVar1 + 0x51,1,1);
  }
  return bVar2;
}

