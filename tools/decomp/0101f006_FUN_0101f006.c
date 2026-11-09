
longlong FUN_0101f006(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_20 [2];
  
  bVar1 = *DAT_0101f1b8;
  local_20[0] = param_3;
  local_20[1] = param_4;
  iVar2 = FUN_0101f876(*param_2,local_20);
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      if (*(char *)((int)local_20 + iVar2) != '\0') {
        iVar4 = (short)(ushort)bVar1 * 0xb70 + DAT_0101f1d0 + iVar2 * 0x5b8;
        FUN_0100d7b8(iVar4,0x5b8);
        iVar3 = (short)(ushort)bVar1 * 0x660 + DAT_0101f1d4 + iVar2 * 0x330;
        *(int *)(iVar4 + 0x14) = iVar3;
        FUN_0100d7b8(iVar3,0x330);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  return (ulonglong)local_20[0] << 0x20;
}

