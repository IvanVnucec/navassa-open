
longlong FUN_0102ccd2(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_10;
  undefined4 uStack_c;
  
  iVar2 = DAT_0102ce48;
  local_10 = param_3 & 0xffffff00;
  uStack_c = param_4;
  if (*(char *)(DAT_0102ce48 + 0x14) == '\0') {
    iVar4 = FUN_0102cc80(&local_10);
  }
  else {
    if (*(char *)(DAT_0102ce48 + 0x14) != '\x01') {
      return CONCAT44(local_10,0xea03);
    }
    iVar4 = FUN_0102cf26(&local_10);
  }
  if (iVar4 != 0) {
    return CONCAT44(local_10,iVar4);
  }
  FUN_010028ac(0x3e);
  FUN_010028ac(0x34);
  if ((*(char *)(iVar2 + 1) == '\x02') && ((local_10 & 0xff) != 0)) {
    FUN_0103a296();
    FUN_010028ac(0x43);
    FUN_01008144(2);
    FUN_01008252(0,0);
    periph_init_f(2);
    FUN_0102ccba(2,3);
    pbVar3 = DAT_0102ce60;
    bVar1 = *DAT_0102ce60;
    *DAT_0102ce60 = bVar1 | 0x10;
    *pbVar3 = bVar1 & 0xef;
    FUN_01013602(1);
    if (*(char *)(iVar2 + 0x16) == '\0') {
      FUN_01013602();
    }
    do {
      if (*(byte *)(iVar2 + 1) < 3) break;
    } while (*(byte *)(iVar2 + 1) < 6);
    FUN_0103a2c8(0);
    FUN_0100815e(2);
    FUN_01002880(0x43);
    uVar5 = 0x43;
  }
  else {
    FUN_01002896(0x3e);
    uVar5 = 0x34;
  }
  FUN_01002896(uVar5);
  return (ulonglong)local_10 << 0x20;
}

