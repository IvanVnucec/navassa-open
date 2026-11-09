
longlong FUN_01012c10(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 << 1) >> 0x18;
  if (uVar3 == 0) {
    uVar3 = param_1 & 0x80000000;
    iVar1 = param_1 << 8;
    if (iVar1 != 0) {
      uVar2 = iVar1 << LZCOUNT(iVar1);
      uVar3 = uVar3 + 0x38000000 + LZCOUNT(iVar1) * -0x100000 + (uVar2 >> 0xb);
      iVar1 = uVar2 << 0x15;
    }
    return CONCAT44(uVar3,iVar1);
  }
  if (uVar3 == 0xff) {
    if ((param_1 & 0x7fffff) == 0) {
      param_1 = param_1 | 0x700000;
    }
    else {
      param_1 = 0x7fffffff;
    }
    return (ulonglong)param_1 << 0x20;
  }
  return CONCAT44(((int)param_1 >> 3 & 0x8fffffffU) + 0x38000000,param_1 << 0x1d);
}

