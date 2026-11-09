
void FUN_01016082(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_01016108;
  puVar1 = DAT_010160fc;
  uVar4 = *DAT_010160fc;
  *DAT_010160fc = uVar4 & 0xe000;
  uVar5 = (uVar4 & 0xe000) >> 0xd;
  uVar4 = puVar1[1];
  if ((int)(uVar5 << 0x1f) < 0) {
    if ((int)((uVar4 >> 0xd) << 0x1f) < 0) {
      if (*(char *)(iVar2 + 0x59) == '\x02') {
        uVar3 = 1;
LAB_010160b8:
        FUN_0101606c(*(undefined1 *)(iVar2 + 0x35),uVar3);
        goto LAB_010160c4;
      }
      uVar3 = 0;
    }
    else {
      if (*(char *)(iVar2 + 0x59) == '\x02') {
        uVar3 = 0;
        goto LAB_010160b8;
      }
      uVar3 = 1;
    }
    FUN_0101603e(*(undefined1 *)(iVar2 + 0x35),uVar3);
  }
LAB_010160c4:
  if (-1 < (int)(uVar5 << 0x1e)) {
    return;
  }
  if ((int)((uVar4 >> 0xd) << 0x1e) < 0) {
    if (*(char *)(iVar2 + 0xb9) == '\x02') {
      uVar3 = 1;
LAB_010160e6:
      FUN_0101606c(*(undefined1 *)(iVar2 + 0x95),uVar3);
      return;
    }
    uVar3 = 0;
  }
  else {
    if (*(char *)(iVar2 + 0xb9) == '\x02') {
      uVar3 = 0;
      goto LAB_010160e6;
    }
    uVar3 = 1;
  }
  FUN_0101603e(*(undefined1 *)(iVar2 + 0x95),uVar3);
  return;
}

