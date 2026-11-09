
undefined8 FUN_01036878(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = param_2 >> 0x1f;
  uVar2 = param_1 + uVar5 ^ uVar5;
  uVar4 = param_2 + uVar5 + (uint)CARRY4(param_1,uVar5) ^ uVar5;
  if (uVar4 != 0) {
    uVar3 = uVar2 << LZCOUNT(uVar4);
    iVar1 = -LZCOUNT(uVar4);
    uVar6 = iVar1 + 0x20U & 0x1f;
    uVar4 = ((uVar4 ^ uVar2) >> uVar6 | (uVar4 ^ uVar2) << 0x20 - uVar6) ^ uVar3;
    uVar6 = uVar3 >> 0xb;
    bVar7 = 0x80000000 < uVar3 * 0x200000 ||
            uVar3 * 0x200000 + 0x80000000 < (uint)((uVar3 & 0x800) != 0);
    uVar2 = uVar4 * 0x200000;
    return CONCAT44((uVar5 << 0x1f | (iVar1 + 0x43d) * 0x100000) +
                    (uVar4 >> 0xb) +
                    (uint)(CARRY4(uVar6,uVar2) || CARRY4(uVar6 + uVar2,(uint)bVar7)),
                    uVar6 + uVar2 + bVar7);
  }
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar2 << LZCOUNT(uVar2);
    uVar4 = LZCOUNT(uVar2) * -0x100000 + 0x41d00000 + (uVar6 >> 0xb) | uVar5 << 0x1f;
    uVar2 = uVar6 << 0x15;
  }
  return CONCAT44(uVar4,uVar2);
}

