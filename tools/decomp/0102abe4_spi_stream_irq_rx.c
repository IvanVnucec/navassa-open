
undefined4 spi_stream_irq_rx(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  
  puVar1 = DAT_0102aca4;
  *DAT_0102aca4 = 0x2000;
  FUN_0100ae0a(0x3b,0);
  *puVar1 = 0x1000;
  FUN_01002880(0x3e);
  FUN_01002896(0x3e);
  iVar2 = DAT_0102ac84;
  puVar1 = DAT_0102ac80;
  if (*DAT_0102ace0 != '\x05') {
    *DAT_0102ac80 = 0;
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 4) = *puVar1;
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 8) = *puVar1;
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 0xc) = *puVar1;
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 0x10) = *puVar1;
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 0x14) = *puVar1;
    FUN_0102a094();
  }
  if ((*DAT_0102ad14 & 7) != 0) {
    *(undefined1 *)(DAT_0102acf4 + 0x11) = 1;
    uVar3 = spi_wait_flag(6,0,in_r3);
    return uVar3;
  }
  return in_r3;
}

