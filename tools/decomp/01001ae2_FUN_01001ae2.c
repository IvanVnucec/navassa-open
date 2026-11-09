
byte FUN_01001ae2(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if ((int)((*(uint *)(DAT_01002518 + param_1 * 0xb0 + 0x6dc) >> (uint)bVar1) << 0x1f) < 0) {
      return bVar1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 4);
  return bVar1;
}

