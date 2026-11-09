
longlong FUN_01042c1e(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  byte bVar5;
  uint local_18 [2];
  
  iVar1 = DAT_01042c98;
  uVar4 = *param_2;
  if (*(char *)(DAT_01042c98 + 1) == '\0') {
    unaff_r4 = DAT_01042c98 + 0x10;
  }
  if ((uVar4 & 0xc) != 0) {
    uVar2 = (uVar4 << 0x1c) >> 0x1e;
    if (2 < uVar2) {
      return CONCAT44(param_3,0x2500);
    }
    if (((*(byte *)(DAT_01042c98 + 0xd) ^ uVar4) & 0xff & uVar4) != 0) {
      local_18[0] = param_3;
      local_18[1] = param_4;
      iVar3 = FUN_01042bca(uVar2,DAT_01042c98 + 0xd,local_18);
      if (iVar3 == 0) {
        bVar5 = 0;
        do {
          if (*(char *)((int)local_18 + (uint)bVar5 * 2) != '\0') {
            if (*(char *)(iVar1 + 1) == '\0') {
              iVar3 = FUN_01030fa6(bVar5,unaff_r4 + (uint)bVar5 * 4);
            }
            else {
              iVar3 = FUN_010310a8(bVar5);
            }
            if (iVar3 != 0) break;
            *(byte *)(iVar1 + 0xd) = *(byte *)(iVar1 + 0xd) | (byte)(1 << (uint)(byte)(bVar5 + 2));
          }
          bVar5 = bVar5 + 1;
        } while (bVar5 < 2);
      }
      return CONCAT44(local_18[0],iVar3);
    }
  }
  return (ulonglong)param_3 << 0x20;
}

