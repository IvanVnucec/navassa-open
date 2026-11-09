
longlong FUN_01043cca(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = DAT_01043d3c;
  iVar2 = DAT_01043d38;
  uVar4 = *param_2;
  if ((uVar4 & 0xc) != 0) {
    if (3 < (uVar4 << 0x1c) >> 0x1e) {
      return CONCAT44(param_4,0x2709);
    }
    if (((*(byte *)(DAT_01043d38 + 1) ^ uVar4) & 0xff & uVar4) != 0) {
      uVar5 = 2;
      do {
        bVar1 = (char)uVar5 - 2;
        if (((int)((uVar4 >> (uVar5 & 0xff)) << 0x1f) < 0) &&
           (-1 < (int)((uint)(*(byte *)(iVar2 + 1) >> (uVar5 & 0xff)) << 0x1f))) {
          if (*(char *)((short)(ushort)bVar1 * 0xbc + iVar3 + 0x3c) != '\x02') {
            FUN_01035096(bVar1,iVar2 + 0x2c + (uint)bVar1 * 0x80);
            *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) | (byte)(1 << (uVar5 & 0xff));
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 4);
    }
  }
  return (ulonglong)param_4 << 0x20;
}

