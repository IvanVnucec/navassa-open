
undefined4 FUN_0102d64e(void)

{
  int iVar1;
  undefined4 in_r3;
  byte bVar2;
  
  iVar1 = DAT_0102da60;
  dma_multi_channel_cfg(*(undefined2 *)(DAT_0102da60 + 0x22));
  bVar2 = 0;
  do {
    if (((uint)*(ushort *)(iVar1 + 0x22) & 1 << (uint)bVar2) != 0) {
      FUN_0102d2f6(bVar2);
      FUN_0102d748(bVar2);
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 2);
  return in_r3;
}

