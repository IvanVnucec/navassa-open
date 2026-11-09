
longlong FUN_0101f250(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r7;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar11 = (param_2 ^ param_4) & 0x80000000;
  uVar7 = param_2 >> 0x14 & 0x7ff;
  bVar12 = uVar7 == 0;
  if (!bVar12) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar12 = unaff_r7 == 0;
  }
  if (!bVar12) {
    bVar12 = uVar7 == 0x7ff;
  }
  if (!bVar12) {
    bVar12 = unaff_r7 == 0x7ff;
  }
  if (bVar12) {
    uVar9 = param_4 >> 0x14 & 0x7ff;
    if (uVar7 == 0x7ff || uVar9 == 0x7ff) {
      bVar12 = (param_2 & 0x7fffffff) == 0;
      bVar13 = param_1 == 0 && bVar12;
      if (param_1 != 0 || !bVar12) {
        bVar13 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
      }
      if (bVar13) {
        param_2 = 0xffffffff;
      }
      uVar7 = param_4 * 2;
      if (uVar7 < 0xffe00001) {
        uVar7 = param_2 * 2;
        param_4 = param_2;
      }
      if (uVar7 < 0xffe00001) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      goto LAB_0101f2fe;
    }
    bVar13 = (param_2 & 0x7fffffff) == 0;
    bVar12 = param_1 == 0 && bVar13;
    if (param_1 != 0 || !bVar13) {
      bVar12 = param_3 == 0 && (param_4 & 0x7fffffff) == 0;
    }
    if (!bVar12) {
      if (uVar7 != 0) {
        param_4 = param_4 & 0x7fffffff;
        iVar8 = LZCOUNT(param_4);
        if (param_4 == 0) {
          iVar8 = iVar8 + LZCOUNT(param_3);
        }
        uVar5 = iVar8 - 0xb;
        if (uVar5 < 0x20) {
          uVar3 = param_4 << (uVar5 & 0xff) | param_3 >> (0x20 - uVar5 & 0xff);
        }
        else {
          uVar3 = param_3 << (iVar8 - 0x2bU & 0xff);
        }
        param_3 = param_3 << (uVar5 & 0xff);
        iVar8 = ((uVar7 + uVar9) - uVar5) + 1;
        goto LAB_0101f278;
      }
      if (uVar9 != 0) {
        uVar7 = param_2 << 0xc;
        uVar3 = param_1;
        if (param_2 << 0xc == 0) {
          uVar3 = 0;
          uVar9 = uVar9 - 0x14;
          uVar7 = param_1;
        }
        iVar10 = LZCOUNT(uVar7);
        iVar8 = uVar9 - iVar10;
        param_1 = uVar3 << iVar10 + 0xc;
        uVar7 = uVar7 << iVar10 | uVar3 >> (0x20U - (iVar10 + 0xc) & 0xff);
        uVar3 = param_4 & 0x1fffff | 0x100000;
        goto LAB_0101f284;
      }
    }
  }
  else {
    iVar8 = uVar7 + unaff_r7;
    uVar3 = param_4 & 0x1fffff | 0x100000;
LAB_0101f278:
    uVar7 = param_2 << 0xb | 0x80000000 | param_1 >> 0x15;
    param_1 = param_1 << 0xb;
LAB_0101f284:
    uVar1 = (ulonglong)uVar7 * (ulonglong)param_3 +
            ((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar9 = (uint)(uVar1 >> 0x20);
    lVar2 = (ulonglong)uVar3 * (ulonglong)param_1 + (uVar1 & 0xffffffff);
    uVar6 = (uint)lVar2;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    if ((int)((ulonglong)param_1 * (ulonglong)param_3) != 0) {
      uVar6 = uVar6 | 1;
    }
    uVar1 = (ulonglong)uVar3 * (ulonglong)uVar7 +
            (ulonglong)CONCAT14(CARRY4(uVar9,uVar5),uVar9 + uVar5);
    uVar7 = (uint)uVar1;
    uVar3 = (uint)(uVar1 >> 0x20);
    bVar12 = (uVar1 & 0x10000000000000) != 0;
    if (!bVar12) {
      bVar13 = (uVar6 & 0x80000000) != 0;
      uVar6 = uVar6 << 1;
      bVar14 = CARRY4(uVar7,uVar7) || CARRY4(uVar7 * 2,(uint)bVar13);
      bVar12 = CARRY4(uVar3,uVar3) || CARRY4(uVar3 * 2,(uint)bVar14);
      uVar1 = CONCAT44(uVar3 * 2 + (uint)bVar14,uVar7 * 2 + (uint)bVar13);
    }
    uVar3 = (uint)(uVar1 >> 0x20);
    uVar7 = (uint)uVar1;
    iVar10 = iVar8 + -0x3ff + (uint)bVar12;
    if (iVar10 != 0 &&
        iVar10 < 0 == (SCARRY4(iVar8 + -0x400,1) != SCARRY4(iVar8 + -0x3ff,(uint)bVar12))) {
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)((uVar1 & 1) != 0);
      iVar8 = uVar3 + iVar10 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar12);
      if (iVar8 < 0) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
      return CONCAT44(iVar8 - 0x100000U | uVar11,uVar7 + bVar12);
    }
    uVar9 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar9 < 0x20) {
      bVar12 = (uVar6 & 1) != 0;
      uVar6 = uVar6 >> 1;
      if (bVar12) {
        uVar6 = uVar6 | 1;
      }
      uVar5 = 0x20 - uVar9 & 0xff;
      bVar12 = uVar5 == 0 && bVar12 || uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar6 = uVar6 | uVar7 << uVar5;
      uVar4 = uVar7 >> (uVar9 & 0xff) | uVar3 << (0x20 - uVar9 & 0xff);
      uVar3 = uVar3 >> (uVar9 & 0xff);
LAB_0101f3e4:
      bVar12 = 0x80000000 < uVar6 || uVar6 + 0x80000000 < (uint)bVar12;
      return CONCAT44(uVar3 + uVar11 + CARRY4(uVar4,(uint)bVar12),uVar4 + bVar12);
    }
    if ((int)uVar9 < 0x36) {
      uVar7 = uVar7 >> (uVar5 & 0xff);
      if (uVar6 != 0 || (uVar1 & 0x7fffffff) != 0) {
        uVar7 = uVar7 | 1;
      }
      uVar6 = uVar5 & 0xff;
      uVar4 = uVar3 >> uVar6;
      uVar9 = 0x20 - uVar5 & 0xff;
      bVar12 = uVar9 == 0 &&
               (uVar6 == 0 && (bool)((byte)(uVar1 >> 0x18) >> 7) ||
               uVar6 != 0 && (uVar3 >> uVar6 - 1 & 1) != 0) ||
               uVar9 != 0 && (uVar3 << uVar9 - 1 & 0x80000000) != 0;
      uVar6 = uVar7 | uVar3 << uVar9;
      uVar3 = 0;
      goto LAB_0101f3e4;
    }
  }
  param_1 = 0;
  param_4 = uVar11;
LAB_0101f2fe:
  return CONCAT44(param_4,param_1);
}

