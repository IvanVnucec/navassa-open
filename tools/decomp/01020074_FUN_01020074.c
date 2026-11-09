
undefined8 FUN_01020074(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    uVar1 = param_1 << LZCOUNT(param_2);
    iVar5 = -LZCOUNT(param_2);
    uVar3 = iVar5 + 0x20U & 0x1f;
    uVar4 = ((param_2 ^ param_1) >> uVar3 | (param_2 ^ param_1) << 0x20 - uVar3) ^ uVar1;
    uVar2 = uVar1 >> 0xb;
    bVar6 = 0x80000000 < uVar1 * 0x200000 ||
            uVar1 * 0x200000 + 0x80000000 < (uint)((uVar1 & 0x800) != 0);
    uVar3 = uVar4 * 0x200000;
    return CONCAT44((iVar5 + 0x43d) * 0x100000 +
                    (uVar4 >> 0xb) +
                    (uint)(CARRY4(uVar2,uVar3) || CARRY4(uVar2 + uVar3,(uint)bVar6)),
                    uVar2 + uVar3 + bVar6);
  }
  iVar5 = 0;
  if (param_1 != 0) {
    uVar3 = param_1 << LZCOUNT(param_1);
    iVar5 = LZCOUNT(param_1) * -0x100000 + 0x41d00000 + (uVar3 >> 0xb);
    param_1 = uVar3 << 0x15;
  }
  return CONCAT44(iVar5,param_1);
}

