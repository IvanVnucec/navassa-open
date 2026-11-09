
longlong FUN_010425d2(void)

{
  int iVar1;
  int iVar2;
  uint in_r3;
  
  iVar1 = DAT_010429c4;
  spi_notify_thunk(DAT_010429c4,0x48);
  spi_notify_thunk(iVar1 + 0x48,0x48);
  iVar2 = DAT_010429c8;
  FUN_0100d7b8(DAT_010429c8 + 4,0x14);
  FUN_0100d7b8(iVar2 + 0x18,0x14);
  spi_notify_thunk(iVar1 + 0x90,1);
  *(undefined1 *)(iVar1 + 0x91) = 0;
  return (ulonglong)in_r3 << 0x20;
}

