
void FUN_0102dfae(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = DAT_0102e510;
  uVar5 = (uint)*(byte *)(param_1 + 1);
  if (*(byte *)(DAT_0102e510 + uVar5) < 2) {
    *DAT_0102e500 = *DAT_0102e500 & ~(byte)(1 << (uint)*(byte *)(param_1 + 2));
    FUN_010142d8();
  }
  FUN_0101a626(*(undefined1 *)(param_1 + 2),0);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_01009daa(*(undefined1 *)(param_1 + 2),5,*(undefined4 *)(DAT_0102e50c + uVar5 * 4 + 0x34),0);
  }
  iVar2 = DAT_0102e50c;
  if (*(char *)(param_1 + 0x2d) == '\0') {
    iVar6 = *(int *)(DAT_0102e50c + uVar5 * 4 + 0x34);
    FUN_0103ae90(param_1,2);
    if (*(char *)(iVar4 + uVar5) != '\0') {
      FUN_0101abba(uVar5);
    }
    if (*(char *)(iVar2 + 2 + iVar6) == '\0') {
      FUN_0101601e(iVar6);
      iVar2 = DAT_0102e520;
      cVar1 = *(char *)(iVar4 + uVar5);
      if ((cVar1 == '\x02' || cVar1 == '\x04') || cVar1 == '\x05') {
        FUN_0100b260(DAT_0102e520 + (uint)*(byte *)(param_1 + 2) * 0x14);
        uVar3 = FUN_0100b1da();
        FUN_01009a04(iVar6,uVar3,iVar2 + (uint)*(byte *)(param_1 + 2) * 0x14);
      }
    }
    if (((*(char *)(DAT_0102e508 + 0x77c) == '\0') &&
        (iVar4 = DAT_0102e524 + (uint)*(byte *)(param_1 + 1) * 0x1c,
        *(byte *)(*(int *)(*(int *)(iVar4 + 0x18) + 0x10) + 0x10) < 3)) &&
       (*(char *)(DAT_0102e528 + 0xd0) == '\0')) {
      FUN_0103624a(iVar4,0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 2;
  }
  FUN_01024a60(uVar5);
  if (*(char *)(param_1 + 0x31) != '\0') {
    FUN_0102dcf4(param_1);
    FUN_01028a2a(param_1);
    stream_flag_tail(*DAT_0102e52c,9);
    return;
  }
  return;
}

