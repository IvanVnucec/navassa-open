
ulonglong FUN_0103e7c8(float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_1 = param_1 / param_2;
  if ((CARRY4((uint)param_1,(uint)param_1)) ||
     (iVar3 = ((uint)((int)param_1 * 2) >> 0x18) - 0x7f, iVar3 < 0)) {
    return 0;
  }
  uVar1 = (int)param_1 << 8 | 0x80000000;
  if (iVar3 < 0x20) {
    return (ulonglong)(uVar1 >> (0x1fU - iVar3 & 0xff));
  }
  uVar4 = 0x3f - iVar3;
  if (-1 < (int)uVar4) {
    uVar2 = uVar1 >> (uVar4 & 0xff);
    return CONCAT44(uVar2,(uVar1 >> (uVar4 & 0x1f) | uVar1 << 0x20 - (uVar4 & 0x1f)) ^ uVar2);
  }
  return CONCAT44((int)uVar1 >> 0x1f,(int)uVar1 >> 0x1f);
}

