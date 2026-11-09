
uint FUN_0103d46a(uint param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 3) {
    if (0xfff < param_1) {
      return 5;
    }
    if (0xcb2 < param_1) {
      return 4;
    }
    if (0xa14 < param_1) {
      return 3;
    }
    if (0x7ff < param_1) {
      return 2;
    }
    bVar1 = 0x659 < param_1;
  }
  else {
    if (0x1ff < param_1) {
      return 5;
    }
    if (0x1ae < param_1) {
      return 4;
    }
    if (0x16a < param_1) {
      return 3;
    }
    if (0x130 < param_1) {
      return 2;
    }
    bVar1 = 0xff < param_1;
  }
  return ~-(uint)!bVar1 >> 0x1f;
}

