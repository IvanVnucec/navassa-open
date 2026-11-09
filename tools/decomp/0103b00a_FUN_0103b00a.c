
byte FUN_0103b00a(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 2;
  if (param_2 == 2) {
    param_4 = (param_1 & *(ushort *)(DAT_0103b4c0 + 0x22)) >> 2;
  }
  else {
    if (param_2 != 0) goto LAB_0103b02a;
    param_4 = param_1 & *(ushort *)(DAT_0103b4c0 + 0x22);
  }
  param_4 = param_4 & 3;
LAB_0103b02a:
  bVar2 = 0;
  do {
    if ((int)((param_4 >> (uint)bVar2) << 0x1f) < 0) {
      bVar1 = bVar2;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 2);
  return bVar1;
}

