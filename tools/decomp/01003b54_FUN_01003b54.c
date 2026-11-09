
longlong FUN_01003b54(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  
  if ((char)param_2[1] == '\x02') {
    bVar1 = 0;
    do {
      if ((int)((*param_2 >> (uint)bVar1) << 0x1f) < 0) {
        FUN_01003c84(bVar1,*(undefined1 *)((int)param_2 + 5));
        FUN_01003dea(bVar1);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < 2);
  }
  return (ulonglong)param_4 << 0x20;
}

