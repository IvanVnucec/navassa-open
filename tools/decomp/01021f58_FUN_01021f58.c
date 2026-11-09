
void FUN_01021f58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_f0 [200];
  undefined4 uStack_28;
  
  puVar4 = DAT_01022150;
  iVar3 = DAT_01022140;
  puVar2 = DAT_01022128;
  uStack_28 = param_4;
  do {
    do {
      iVar5 = FUN_01025c92(*(undefined4 *)(param_1 + 0xc),8,1,0,0xffffffff);
    } while (-1 < iVar5 << 0x1c);
    if (*(char *)(DAT_01022124 + 0x7a3) != '\0') {
      *DAT_01022160 = 2;
    }
    uVar6 = heap_block_probe();
    *(undefined4 *)(iVar3 + 0x54) = uVar6;
    iVar5 = 0;
    uVar1 = *puVar4;
    uVar10 = ((uint)uVar1 << 0x1c) >> 0x1e;
    uVar11 = (uint)(ushort)(uVar1 | uVar1 >> 4);
    do {
      iVar7 = puVar2[iVar5];
      if (*(char *)(iVar7 + 0x25) == '\x13') {
        *(undefined1 *)(iVar7 + 0x25) = 0;
      }
      else {
        *(undefined1 *)(iVar7 + 0x25) = 0x1f;
      }
      if ((*puVar4 & 0x151) != 0) {
        FUN_01017972(2,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    if (-1 < (int)(uVar10 << 0x1f)) {
      FUN_01017972(2,0);
    }
    if (-1 < (int)(uVar10 << 0x1e)) {
      FUN_01017972(3,0);
    }
    FUN_0100731c(auStack_f0);
    FUN_01035d54(uVar10);
    *DAT_01022154 = 0;
    if ((int)(uVar11 << 0x1f) < 0) {
      FUN_0103668c();
    }
    if ((int)(uVar11 << 0x1e) < 0) {
      FUN_010366d6();
    }
    iVar5 = FUN_01021ca2(param_1,iVar3 + 0x58);
    FUN_010220d8(*puVar2);
    uVar11 = 0;
    uVar10 = FUN_010220d8(puVar2[1]);
    do {
      if (iVar5 == 0) {
        uVar9 = (uint)*puVar4;
        uVar8 = 1;
        bVar12 = (uVar9 & 1 << (uVar11 & 0xff)) == 0;
        if (bVar12) {
          uVar10 = 1 << (uVar11 + 6 & 0xff);
        }
        if (bVar12 && (uVar9 & uVar10) == 0) {
          uVar10 = 1 << (uVar11 + 8 & 0xff);
          bVar12 = (uVar9 & uVar10) == 0;
          if (bVar12) {
            uVar10 = uVar11 + 4;
            uVar8 = 1 << (uVar10 & 0xff);
          }
          if (bVar12 && (uVar9 & uVar8) == 0) goto LAB_01022024;
        }
        iVar7 = *(int *)(puVar2[uVar11] + 8);
        iVar5 = stream_event_dispatcher
                          (puVar2[uVar11],iVar7,
                           *(undefined4 *)(*(int *)(DAT_01022158 + iVar7 * 8 + uVar11 * 4) + 0xc),0,
                           0,0,0,0,0);
        uVar10 = FUN_01007326(auStack_f0,iVar7,*(undefined1 *)(DAT_0102215c + uVar11));
      }
LAB_01022024:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 2);
    if (iVar5 == 0) {
      iVar5 = FUN_01019864(*puVar4,0);
    }
    if ((iVar5 != 0) && (*(int *)(iVar3 + 0x28) == 0)) {
      *(int *)(iVar3 + 0x28) = iVar5;
    }
    sched_channel_set_state(param_1,1);
    uVar6 = xPortGetFreeHeapSize(uVar6);
    *(undefined4 *)(iVar3 + 0x2c) = uVar6;
    uVar6 = xPortGetFreeHeapSize(*(undefined4 *)(iVar3 + 0x54));
    *(undefined4 *)(iVar3 + 0x54) = uVar6;
    spi_wait_flag(2,0);
  } while( true );
}

