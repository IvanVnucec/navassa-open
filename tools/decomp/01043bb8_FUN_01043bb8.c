
void FUN_01043bb8(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_01043d38;
  spi_notify_thunk(DAT_01043d38 + 4,0x14);
  spi_notify_thunk(puVar1 + 4,0x14);
  *puVar1 = 0;
  return;
}

