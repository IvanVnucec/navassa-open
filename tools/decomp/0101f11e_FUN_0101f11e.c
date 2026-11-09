
longlong FUN_0101f11e(undefined4 param_1,int param_2)

{
  char cVar1;
  uint unaff_r7;
  bool bVar2;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    cVar1 = *(char *)(param_2 + 5);
    bVar2 = cVar1 != '\x03';
    if (bVar2) {
      cVar1 = *DAT_0101f1e4;
    }
    if (bVar2 && cVar1 != '\x02') {
      FUN_0101f006();
    }
  }
  return (ulonglong)unaff_r7 << 0x20;
}

