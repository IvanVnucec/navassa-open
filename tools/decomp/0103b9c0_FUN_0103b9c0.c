
longlong FUN_0103b9c0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3fe;
  uVar3 = param_2;
  if (uVar2 == 0 || uVar1 < 0x3fe) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      uVar3 = 0xbff00000;
    }
    if (-1 < (int)param_2) {
      uVar3 = 0;
    }
    param_1 = 0;
  }
  else if ((int)uVar2 < 0x35) {
    if (0x14 < (int)uVar2) {
      uVar3 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
      if ((int)param_2 < 0) {
        bVar4 = CARRY4(param_1,uVar3);
        param_1 = param_1 + uVar3;
        param_2 = param_2 + bVar4;
      }
      return CONCAT44(param_2,param_1 & ~uVar3);
    }
    uVar3 = 0x1fffff >> (uVar2 & 0xff);
    if ((int)param_2 < 0) {
      param_2 = param_2 + uVar3 + (uint)(param_1 != 0);
    }
    return (ulonglong)(param_2 & ~uVar3) << 0x20;
  }
  return CONCAT44(uVar3,param_1);
}

