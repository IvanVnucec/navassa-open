
longlong FUN_01032d6a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  FUN_0100d7b8(param_4,0x80);
  if (param_1 << 0x1d < 0) {
    iVar1 = 0;
  }
  else {
    if (-1 < param_1 << 0x1c) {
      return CONCAT44(param_4,0x4402);
    }
    iVar1 = 0x80;
  }
  FUN_0101204c(param_4,DAT_0103385c + iVar1,0x80);
  return (ulonglong)param_4 << 0x20;
}

