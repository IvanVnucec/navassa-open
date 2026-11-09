
undefined4 FUN_01043554(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_01043674;
  if (*(char *)(param_2 + 4) == '\x01') {
    spi_notify_thunk(DAT_01043674 + 0x144,0x48);
    spi_notify_thunk(iVar1 + 4,0x140);
    spi_notify_thunk(iVar1,2);
    iVar1 = DAT_01043678;
    *(undefined1 *)(DAT_01043678 + 0x248) = 0xff;
    *(undefined1 *)(iVar1 + 0x494) = 0xff;
  }
  return 0;
}

