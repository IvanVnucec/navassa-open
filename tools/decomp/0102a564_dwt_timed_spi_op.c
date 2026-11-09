
void dwt_timed_spi_op(void)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  
  puVar6 = DAT_0102acac;
  iVar4 = DAT_0102ac9c;
  pcVar3 = DAT_0102abdc;
  iVar2 = DAT_0102a820;
  *DAT_0102aca8 = *DAT_0102aca8 | 0x1000000;
  *puVar6 = *puVar6 | 1;
  spi_notify_thunk(iVar4 + 4,0x3c);
  spi_notify_thunk(DAT_0102acb0,0xbc);
  puVar6[1] = 0;
  dwt_sync_helper();
  *(uint *)(iVar4 + 4) = puVar6[1];
  puVar5 = DAT_0102aca4;
  *DAT_0102aca4 = 0x400;
  *puVar5 = 0x1000;
  FUN_01002880(0x3e);
  FUN_0100ae0a(9,1);
  FUN_01002896(0x34);
  FUN_010028ac(0xe5);
  uVar9 = *DAT_0102acb4;
  stream_flag_set_0x40(uVar9);
  iVar7 = *(int *)(pcVar3 + 8);
  if (iVar7 == 0) {
    periph_init_f();
  }
  else {
    *(undefined1 *)(iVar2 + 0x11) = 1;
    spi_wait_flag(6,0);
    periph_init_f(1);
  }
  pcVar3[1] = iVar7 != 0;
  pcVar3[0x1b] = '\x01';
  periph_init_d(2);
  dwt_sync_helper();
  *(uint *)(iVar4 + 8) = puVar6[1];
  bVar11 = 0;
  do {
    uVar10 = (uint)bVar11;
    FUN_01008252(uVar10,2);
    FUN_01008252(uVar10 + 4,2);
    FUN_01008252(uVar10 + 2,2);
    bVar11 = bVar11 + 1;
  } while (bVar11 < 2);
  iVar8 = FUN_0102a866();
  iVar7 = DAT_0102a81c;
  if (*(char *)((DAT_0102a81c - ((int)-(uint)(iVar8 == 0) >> 0x1f)) + 0x18) != '\0') {
    FUN_01029cec();
  }
  FUN_01029c96();
  pbVar1 = DAT_0102a83c;
  if (*(char *)(iVar2 + 8) == '\0') {
    stream_flag_set_0x40(uVar9);
    pbVar1 = DAT_0102a80c;
    pin_update(DAT_0102acb8,1,0);
    pin_update(DAT_0102acbc,1,0);
    pin_update(DAT_0102acc0,1,0);
    pin_update(DAT_0102acc4,1,0);
    pin_update(DAT_0102acc8,1,0);
    pin_update(DAT_0102accc,1,0);
    pin_update(DAT_0102acd0,1,0);
    pin_update(DAT_0102acd4,1,0);
    if ((int)((uint)*pbVar1 << 0x1f) < 0) {
      FUN_0102f358(0);
    }
    if ((int)((uint)*pbVar1 << 0x1e) < 0) {
      FUN_0102f358(1);
    }
    if ((int)((uint)*pbVar1 << 0x1d) < 0) {
      FUN_0101a7a8(2);
    }
    if ((int)((uint)*pbVar1 << 0x1c) < 0) {
      FUN_0101a7a8(3);
    }
    FUN_0102c08c();
    if ((int)((uint)*pbVar1 << 0x1f) < 0) {
      pin_update(DAT_0102acd8,1,0);
    }
    if ((int)((uint)*pbVar1 << 0x1e) < 0) {
      pin_update(DAT_0102acdc,1,0);
    }
    if ((int)((uint)*pbVar1 << 0x1d) < 0) {
      FUN_0101a768(2);
    }
    if ((int)((uint)*pbVar1 << 0x1c) < 0) {
      FUN_0101a768(3);
    }
  }
  else {
    *(byte *)(iVar2 + 9) = *DAT_0102a83c & 1;
    pin_update(pbVar1,1,0);
  }
  dwt_sync_helper();
  iVar8 = DAT_0102ac90;
  *(uint *)(iVar4 + 0xc) = puVar6[1];
  uVar10 = 1;
  do {
    if (*(byte *)(iVar7 + uVar10 + 0x14) < 7) {
      if (*(char *)(*(int *)(iVar8 + uVar10 * 4) + 0x10) == '\x03') {
        if (uVar10 == 2) {
          FUN_0100817e(0,9,1);
        }
        if (uVar10 == 3) {
          FUN_0100817e(1,9,1);
        }
        if (uVar10 == 1) {
          FUN_0100817e(3,9,1);
        }
      }
      if (uVar10 == 2) {
        FUN_01036000(0,1,0);
      }
      if (uVar10 == 3) {
        FUN_01036000(1,1,0);
      }
    }
    if (*pcVar3 != '\x03') {
      FUN_0102ad18(uVar10 & 0xff,1);
      *(undefined1 *)(iVar2 + 0x10) = 0;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 4);
  pcVar3[1] = '\x01';
  nmi_signal_helper();
  *(uint *)(iVar4 + 0x10) = puVar6[1];
  thunk_EXT_FUN_200348e4(1);
  dwt_sync_helper();
  *(uint *)(iVar4 + 0x14) = puVar6[1];
  dwt_sync_helper();
  *(uint *)(iVar4 + 0x18) = puVar6[1];
  return;
}

