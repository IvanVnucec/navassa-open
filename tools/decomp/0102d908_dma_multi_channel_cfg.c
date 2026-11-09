
undefined4
dma_multi_channel_cfg(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  
  iVar3 = DAT_0102da58;
  iVar2 = DAT_0102da54;
  iVar1 = DAT_0102da48;
  uVar4 = 0;
  do {
    if ((int)((param_1 >> (uVar4 & 0xff)) << 0x1f) < 0) {
      dma_prep_step1(uVar4 & 0xff);
      dma_prep_step2(uVar4 & 0xff);
      iVar6 = *(int *)(iVar2 + uVar4 * 4);
      pin_update(iVar6 + 0xf8,1,0);
      pin_update(iVar6 + 0xf7,4,4);
      bVar5 = 0;
      do {
        pin_update(*(int *)(iVar1 + uVar4 * 4) + (uint)bVar5 + 0x70,0x3f,0x3f);
        bVar5 = bVar5 + 1;
      } while (bVar5 < 7);
      iVar6 = *(int *)(iVar3 + uVar4 * 4);
      pin_update(iVar6 + 0x4a,3,0);
      pin_update(iVar6 + 0x4b,2,2);
      *(undefined1 *)(iVar6 + 0x6b) = 1;
      *(undefined1 *)(iVar6 + 0x6c) = 0;
      pin_update(iVar6 + 0x6d,0x3f);
      pin_update(iVar6 + 0x12,6,0);
      pin_update(iVar6 + 0x34,2,2);
      FUN_01036c88(uVar4 & 0xff,0,1);
      FUN_0102d8e4(uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  return param_4;
}

