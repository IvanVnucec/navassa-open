
longlong FUN_01032d9e(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0103385c;
  if ((param_1 & 0xc) == 0) {
    return CONCAT44(param_4,0x4402);
  }
  uVar2 = 0;
  do {
    if ((int)((param_1 >> (uVar2 + 2 & 0xff)) << 0x1f) < 0) {
      FUN_0101204c(iVar1 + uVar2 * 0x80,param_4,0x80);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return (ulonglong)param_4 << 0x20;
}

