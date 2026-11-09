
void spi_stream_irq_tx(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  char cVar7;
  undefined4 *in_r3;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  bool bVar16;
  char *local_70 [18];
  undefined4 *puStack_28;
  
  local_70[0] = (char *)0x0;
  iVar14 = 0;
  *DAT_0102aca4 = 0x800;
  puStack_28 = in_r3;
  FUN_010028ac(0x3e);
  FUN_0100ae0a(9,0);
  pcVar11 = DAT_0102ace0;
  if (DAT_0102ace0[0x1b] == '\0') {
    return;
  }
  DAT_0102ace0[0x1b] = '\0';
  if (pcVar11[0x16] != '\0') {
    FUN_01013602(0);
  }
  FUN_01020e22();
  pcVar11[1] = '\x06';
  FUN_0103a2c8(0);
  FUN_010209a0(1);
  iVar2 = DAT_0102ac84;
  puVar1 = DAT_0102ac80;
  pin_update(DAT_0102ace4,1,1);
  pin_update(DAT_0102ace8,1,1);
  puVar6 = DAT_0102acf0;
  if (*pcVar11 == '\x05') {
    if (pcVar11[1] == '\0') {
      dwt_sync_helper();
      *(undefined4 *)(iVar2 + 0xbc) = *puVar1;
      return;
    }
    *DAT_0102acec = 0;
    bVar12 = 0;
    FUN_0101a588((char)*puVar6);
    do {
      uVar8 = (uint)bVar12;
      if (((uint)*puVar6 & 1 << (uint)bVar12) != 0) {
        FUN_01008252(uVar8,0);
      }
      if (((uint)*puVar6 & 1 << (uint)(byte)(bVar12 + 2)) != 0) {
        FUN_01008252(uVar8 + 4,0);
      }
      if (((uint)*puVar6 & 1 << (uint)(byte)(bVar12 + 4)) != 0) {
        FUN_01008252(uVar8 + 2,0);
      }
      bVar12 = bVar12 + 1;
    } while (bVar12 < 2);
    FUN_01002896(0xe5);
    stream_flag_tail(*DAT_0102acb4,1);
  }
  else {
    pin_update(DAT_0102acf8,1,*(undefined1 *)(DAT_0102acf4 + 9));
  }
  dwt_sync_helper();
  *(undefined4 *)(iVar2 + 0x50) = *puVar1;
  pcVar11[1] = '\x06';
  iVar3 = DAT_0102ad00;
  pcVar4 = DAT_0102ace0;
  iVar13 = DAT_0102abe0;
  uVar8 = 0;
  pcVar9 = local_70[0];
  do {
    if (*(byte *)(DAT_0102acfc + uVar8 + 0x14) < 7) {
      pcVar9 = (char *)(((uint)pcVar9 | 1 << (uVar8 & 0xff)) & 0xff);
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  if (*(char *)(DAT_0102acf4 + 0x10) == '\0') {
    pcVar11 = (char *)0x1;
    do {
      if (((((int)pcVar9 >> ((uint)pcVar11 & 0xff)) << 0x1f < 0) && (*pcVar4 != '\x03')) &&
         (*(byte *)(iVar13 + (uint)*(byte *)(iVar3 + ((uint)pcVar11 & 0xff))) < 2)) {
        FUN_0102ad18((uint)pcVar11 & 0xff,0);
      }
      pcVar11 = pcVar11 + 1;
    } while (((uint)pcVar11 & 0xff) < 4);
    FUN_01015e2c(200);
  }
  bVar12 = 1;
  do {
    if (((int)(((uint)pcVar9 >> (uint)bVar12) << 0x1f) < 0) &&
       (*(char *)(iVar13 + (uint)*(byte *)(iVar3 + (uint)bVar12)) == '\0')) {
      FUN_01029d1e(bVar12);
    }
    bVar12 = bVar12 + 1;
    cVar15 = bVar12 == 4;
  } while (bVar12 < 4);
  dwt_sync_helper();
  iVar3 = DAT_0102ac88;
  *(undefined4 *)(iVar2 + 0x54) = *puVar1;
  local_70[0] = pcVar9;
  FUN_0102abba();
  if (cVar15 == '\0') {
    iVar14 = FUN_0102fb76(0,local_70);
    bVar16 = iVar14 == 0;
    if (!bVar16) goto LAB_0102aad8;
  }
  dwt_sync_helper();
  *(undefined4 *)(iVar2 + 0x58) = *puVar1;
  cVar15 = *DAT_0102ad04;
  cVar7 = DAT_0102ad04[1];
  if (cVar15 != '\x01') {
    cVar15 = '\0';
  }
  if (cVar7 != '\x01') {
    cVar7 = '\0';
  }
  if ((cVar15 != '\0' || *(char *)(iVar3 + 0x1c6) == '\0') || cVar7 != '\0') {
    FUN_01038e54(0);
  }
  dwt_sync_helper();
  *(undefined4 *)(iVar2 + 0x5c) = *puVar1;
  bVar12 = 0;
  iVar13 = 0xbc;
  do {
    local_70[0] = (char *)(1 << (uint)bVar12);
    cVar15 = ((uint)local_70[0] & (uint)pcVar9) == 0;
    if (!(bool)cVar15) {
      if (*(char *)(iVar3 + 0x1c6 + (short)(ushort)bVar12 * 0xbc) == '\0') {
        iVar14 = FUN_010391ac(0,local_70);
      }
      else {
        FUN_0102abba();
        if (cVar15 == '\0') {
          iVar14 = FUN_0103a10c(0,local_70);
        }
      }
      FUN_01008252(bVar12,0);
    }
    bVar12 = bVar12 + 1;
  } while (bVar12 < 2);
  dwt_sync_helper();
  *(undefined4 *)(iVar2 + 0x60) = *puVar1;
  bVar16 = iVar14 == 0;
  pcVar11 = pcVar9;
LAB_0102aad8:
  if (bVar16) {
    FUN_010198e0(6);
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 100) = *puVar1;
    uVar8 = 0;
    do {
      if ((int)(((uint)pcVar11 >> (uVar8 + 2 & 0xff)) << 0x1f) < 0) {
        FUN_0101acd0(uVar8 & 0xff);
        uVar10 = uVar8 & 0xff;
        if (iVar14 == 0) {
          if (*(char *)((int)(short)iVar13 * (int)(short)uVar10 + iVar3 + 0x3c) != '\x02') {
            iVar14 = FUN_0101aa38(uVar8 & 0xff);
            goto LAB_0102ab1a;
          }
LAB_0102ab20:
          iVar14 = FUN_0101ac18(uVar8 & 0xff);
        }
        else {
LAB_0102ab1a:
          if (iVar14 == 0) goto LAB_0102ab20;
        }
        cVar15 = iVar14 == 0;
        if ((bool)cVar15) {
          FUN_0102abba();
          if (cVar15 == '\0') {
            FUN_01035096(uVar8 & 0xff,DAT_0102ad08);
          }
          FUN_01008252(uVar10 + 4,0);
          in_r3 = (undefined4 *)(uVar8 + 4);
          if (((uint)*DAT_0102acf0 & 1 << ((uint)in_r3 & 0xff)) != 0) {
            FUN_01008252(uVar10 + 2,0);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < 2);
    dwt_sync_helper();
    *(undefined4 *)(iVar2 + 0x68) = *puVar1;
  }
  if (iVar14 != 0) {
    FUN_0102abc4();
    *in_r3 = 0x53f;
    boot_msg(1,iVar14,3);
  }
  FUN_0102e658(*(undefined1 *)(iVar3 + 0xc));
  periph_init_d(1);
  dwt_sync_helper();
  puVar5 = DAT_0102acec;
  *(undefined4 *)(iVar2 + 0x6c) = *puVar1;
  *puVar5 = 0;
  dwt_sync_helper();
  *(undefined4 *)(iVar2 + 0xbc) = *puVar1;
  FUN_01002896(0xe5);
  return;
}

