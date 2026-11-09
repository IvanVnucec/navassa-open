
undefined8 FUN_01014570(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar2 = param_1 << LZCOUNT(param_2);
    iVar4 = -LZCOUNT(param_2);
    uVar3 = iVar4 + 0x20U & 0x1f;
    uVar3 = ((param_2 ^ param_1) >> uVar3 | (param_2 ^ param_1) << 0x20 - uVar3) ^ uVar2;
    if (uVar2 != 0) {
      uVar3 = uVar3 | 1;
    }
    iVar4 = (iVar4 + 0xbd) * 0x800000;
    return CONCAT44(iVar4,iVar4 + (uVar3 >> 8) +
                                  (uint)(0x80000000 < uVar3 * 0x1000000 ||
                                        uVar3 * 0x1000000 + 0x80000000 <
                                        (uint)((uVar3 & 0x100) != 0)));
  }
  iVar4 = 0;
  if (param_1 != 0) {
    uVar3 = param_1 << LZCOUNT(param_1);
    bVar1 = (uVar3 & 0x100) != 0;
    uVar2 = uVar3 * 0x1000000;
    iVar4 = (uVar2 + 0x80000000) - (uint)!bVar1;
    param_1 = (0x9d - LZCOUNT(param_1)) * 0x800000 +
              (uVar3 >> 8) + (uint)(0x80000000 < uVar2 || uVar2 + 0x80000000 < (uint)bVar1);
  }
  return CONCAT44(iVar4,param_1);
}

