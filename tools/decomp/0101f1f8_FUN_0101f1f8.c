
undefined8 FUN_0101f1f8(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_2 >> 0x1f;
  uVar2 = param_1 + uVar7 ^ uVar7;
  uVar4 = param_2 + uVar7 + (uint)CARRY4(param_1,uVar7) ^ uVar7;
  if (uVar4 != 0) {
    uVar3 = uVar2 << LZCOUNT(uVar4);
    iVar6 = -LZCOUNT(uVar4);
    uVar5 = iVar6 + 0x20U & 0x1f;
    uVar2 = ((uVar4 ^ uVar2) >> uVar5 | (uVar4 ^ uVar2) << 0x20 - uVar5) ^ uVar3;
    if (uVar3 != 0) {
      uVar2 = uVar2 | 1;
    }
    uVar4 = uVar7 << 0x1f | (iVar6 + 0xbd) * 0x800000;
    return CONCAT44(uVar4,uVar4 + (uVar2 >> 8) +
                                  (uint)(0x80000000 < uVar2 * 0x1000000 ||
                                        uVar2 * 0x1000000 + 0x80000000 <
                                        (uint)((uVar2 & 0x100) != 0)));
  }
  iVar6 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar2 << LZCOUNT(uVar2);
    bVar1 = (uVar4 & 0x100) != 0;
    uVar5 = uVar4 * 0x1000000;
    iVar6 = (uVar5 + 0x80000000) - (uint)!bVar1;
    uVar2 = (uVar7 << 0x1f | (0x9d - LZCOUNT(uVar2)) * 0x800000) +
            (uVar4 >> 8) + (uint)(0x80000000 < uVar5 || uVar5 + 0x80000000 < (uint)bVar1);
  }
  return CONCAT44(iVar6,uVar2);
}

