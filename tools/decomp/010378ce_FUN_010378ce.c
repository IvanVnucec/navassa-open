
void FUN_010378ce(void)

{
  int iVar1;
  
  iVar1 = DAT_010383d8;
  spi_notify_thunk(DAT_010383d8 + 0x20,0x28);
  spi_notify_thunk(iVar1,0x20);
  spi_notify_thunk(DAT_010384f4,0x3c);
  *(undefined1 *)(iVar1 + 0x1c) = 0;
  return;
}

