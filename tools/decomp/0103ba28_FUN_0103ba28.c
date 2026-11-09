
undefined8 FUN_0103ba28(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  
  uVar5 = param_2 >> 0x14;
  if (uVar5 == 0) {
    if (param_1 == 0 && param_2 == 0) goto LAB_0103baca;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = iVar3 + LZCOUNT(param_1);
    }
    uVar5 = iVar3 - 0xb;
    if (uVar5 < 0x20) {
      uVar2 = param_2 << (uVar5 & 0xff) | param_1 >> (0x20 - uVar5 & 0xff);
    }
    else {
      uVar2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar5 & 0xff);
    uVar5 = 1 - uVar5;
  }
  else {
    if (0x7fe < uVar5) {
      if ((uVar5 != 0x7ff && (param_1 != 0 || (param_2 & 0x7fffffff) != 0)) &&
         (param_2 < 0xfff00001)) {
        return CONCAT44(~uVar5,param_1);
      }
      goto LAB_0103baca;
    }
    uVar2 = param_2 & ~(uVar5 << 0x14) | 0x100000;
  }
  if ((uVar5 + 0x3fd & 1) != 0) {
    bVar9 = CARRY4(param_1,param_1);
    param_1 = param_1 * 2;
    uVar2 = uVar2 * 2 + (uint)bVar9;
  }
  uVar1 = param_1 << 2;
  uVar7 = 0x300000;
  uVar6 = 0;
  uVar4 = 0x80000000;
  iVar3 = (uVar2 << 2 | param_1 >> 0x1e) - 0x900000;
  uVar2 = 0x100000;
  while( true ) {
    for (; -1 < iVar3; iVar3 = (iVar3 * 2 + (uint)bVar9) - uVar8) {
      uVar8 = uVar2 >> 1;
      if ((uVar2 & 1) != 0) goto LAB_0103baa4;
      iVar3 = iVar3 - uVar7;
      uVar7 = uVar7 + uVar8;
      bVar9 = CARRY4(uVar1,uVar1);
      uVar1 = uVar1 * 2;
      uVar2 = uVar8;
    }
    uVar8 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) break;
    iVar3 = iVar3 + uVar7;
    uVar7 = uVar7 - uVar8;
    bVar9 = CARRY4(uVar1,uVar1);
    uVar1 = uVar1 * 2;
    iVar3 = (iVar3 * 2 + (uint)bVar9) - uVar8;
    uVar2 = uVar8;
  }
  do {
    bVar9 = CARRY4(uVar1,uVar6);
    uVar8 = uVar1 + uVar6;
    iVar3 = iVar3 + uVar7;
    bVar10 = uVar6 < uVar4;
    uVar6 = uVar6 - uVar4;
    uVar7 = (uVar7 - (uVar2 >> 1)) - (uint)bVar10;
    uVar1 = uVar8 * 2 - uVar4;
    for (iVar3 = (((iVar3 + (uint)bVar9) * 2 + (uint)CARRY4(uVar8,uVar8)) - (uVar2 >> 1)) -
                 (uint)(uVar8 * 2 < uVar4); -1 < iVar3;
        iVar3 = (((iVar3 - (uint)bVar9) * 2 + (uint)CARRY4(uVar8,uVar8)) - (uVar2 >> 1)) -
                (uint)(uVar8 * 2 < uVar4)) {
      uVar4 = uVar4 >> 1;
      if (uVar4 == 0) {
        bVar9 = 0xfffffffe < uVar6;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + (uVar2 >> 1) + (uint)bVar9;
        goto LAB_0103babe;
      }
LAB_0103baa4:
      bVar9 = uVar1 < uVar6;
      uVar8 = uVar1 - uVar6;
      iVar3 = iVar3 - uVar7;
      bVar10 = CARRY4(uVar6,uVar4);
      uVar6 = uVar6 + uVar4;
      uVar7 = uVar7 + (uVar2 >> 1) + (uint)bVar10;
      uVar1 = uVar8 * 2 - uVar4;
    }
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
LAB_0103babe:
  param_1 = (uint)((uVar7 & 1) != 0) << 0x1f | uVar6 >> 1;
  param_2 = (uVar7 >> 1) + (uVar5 + 0x3fd >> 1) * 0x100000;
LAB_0103baca:
  return CONCAT44(param_2,param_1);
}

