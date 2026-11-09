
ulonglong FUN_0101f3f4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  uVar6 = param_2 & 0x80000000;
  uVar1 = (param_2 - uVar6) + 0xc8000000;
  if ((int)uVar1 < 0x100000) {
    uVar2 = 9 - ((int)uVar1 >> 0x14);
    if (uVar2 < 0x21) {
      uVar3 = param_2 * 0x400 | param_1 >> 0x16;
      bVar8 = (param_1 & 0x3fffff) != 0;
      bVar7 = CARRY4(uVar3 * 2,(uint)bVar8);
      uVar4 = uVar3 * 2 + (uint)bVar8 | 0x80000000;
      uVar1 = 0x20 - uVar2 & 0xff;
      bVar8 = (uVar4 << uVar1 - 1 & 0x80000000) != 0;
      uVar5 = uVar4 << uVar1;
      return CONCAT44((uVar5 + 0x80000000) -
                      (uint)((uVar1 != 0 || !CARRY4(uVar3,uVar3) && !bVar7) &&
                            (uVar1 == 0 || !bVar8)),
                      (uVar4 >> (uVar2 & 0xff)) + uVar6 +
                      (uint)(0x80000000 < uVar5 ||
                            uVar5 + 0x80000000 <
                            (uint)(uVar1 == 0 && (CARRY4(uVar3,uVar3) || bVar7) ||
                                  uVar1 != 0 && bVar8)));
    }
    return CONCAT44(uVar1,param_2) & 0xffffffff80000000;
  }
  if (uVar1 < 0xff00000) {
    bVar7 = (param_1 & 0x20000000) != 0;
    uVar2 = param_1 * 8;
    return CONCAT44((uVar2 + 0x80000000) - (uint)!bVar7,
                    (uVar6 | uVar1 * 8) +
                    (param_1 >> 0x1d) +
                    (uint)(0x80000000 < uVar2 || uVar2 + 0x80000000 < (uint)bVar7));
  }
  uVar2 = 0xffffffff;
  bVar7 = -1 < (int)((param_2 - uVar6) + 0xfffff);
  if (bVar7) {
    uVar2 = 0xff;
  }
  if (bVar7) {
    uVar2 = uVar6 | uVar2 << 0x17;
  }
  return CONCAT44(uVar1,uVar2);
}

