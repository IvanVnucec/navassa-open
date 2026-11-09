
longlong FUN_01042964(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  iVar1 = DAT_010429c8;
  uVar4 = *param_2;
  if ((uVar4 & 0xc) != 0) {
    uVar2 = (uVar4 << 0x1c) >> 0x1e;
    if (2 < uVar2) {
      return CONCAT44(param_4,0x2500);
    }
    if (((*(byte *)(DAT_010429c8 + 1) ^ uVar4) & 0xff & uVar4) != 0) {
      local_10 = param_4;
      iVar3 = FUN_01042bca(uVar2,DAT_010429c8 + 1,&local_10);
      if (iVar3 == 0) {
        uVar4 = 0;
        do {
          if (*(char *)((int)&local_10 + uVar4 * 2) != '\0') {
            iVar3 = FUN_01041c6c(uVar4 & 0xff,uVar4 * 0x14 + iVar1 + 4);
            if (iVar3 != 0) break;
            *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | (byte)(1 << (uVar4 + 2 & 0xff));
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 2);
      }
      return CONCAT44(local_10,iVar3);
    }
  }
  return (ulonglong)param_4 << 0x20;
}

