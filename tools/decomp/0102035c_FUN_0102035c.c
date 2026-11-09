
ulonglong FUN_0102035c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 in_CY;
  bool bVar14;
  
  uVar11 = param_2 ^ param_4;
  uVar12 = uVar11 & 0x80000000;
  uVar4 = param_2 >> 0x14 & 0x7ff;
  bVar14 = uVar4 == 0;
  if (!bVar14) {
    unaff_r7 = param_4 >> 0x14 & 0x7ff;
    bVar14 = unaff_r7 == 0;
  }
  if (!bVar14) {
    in_CY = 0x7fe < uVar4;
    bVar14 = uVar4 == 0x7ff;
  }
  if (!bVar14) {
    in_CY = 0x7fe < unaff_r7;
    bVar14 = unaff_r7 == 0x7ff;
  }
  if (bVar14) {
    if (uVar4 != 0x7ff) {
      unaff_r7 = param_4 >> 0x14 & 0x7ff;
    }
    if (uVar4 == 0x7ff || unaff_r7 == 0x7ff) {
      uVar4 = param_2 * 2;
      if (uVar4 < 0xffe00001) {
        uVar4 = param_4 * 2;
      }
      if (uVar4 == 0xffe00000) {
        uVar4 = param_2 << 1;
      }
      if (uVar4 < 0xffe00000) {
        if ((param_4 & 0x7fffffff) != 0x7ff00000) {
          uVar12 = uVar12 | 0x7ff00000;
        }
      }
      else {
        uVar12 = 0xffffffff;
      }
      return (ulonglong)uVar12 << 0x20;
    }
    uVar7 = param_1 | param_2 << 1;
    bVar14 = uVar7 == 0;
    if (!bVar14) {
      uVar7 = param_3 | param_4 << 1;
      bVar14 = uVar7 == 0;
    }
    if (bVar14) {
      if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
        if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
          uVar12 = ~uVar7;
        }
        return CONCAT44(uVar12,uVar7);
      }
      return CONCAT44(uVar11,uVar7) & 0x80000000ffffffff | 0x7ff0000000000000;
    }
    if (unaff_r7 == 0) {
      uVar2 = param_3 * 2;
      iVar3 = param_4 * 2 + (uint)CARRY4(param_3,param_3);
      iVar10 = LZCOUNT(iVar3);
      if (iVar3 == 0) {
        iVar10 = iVar10 + LZCOUNT(uVar2);
      }
      uVar7 = iVar10 - 0xb;
      if (uVar7 < 0x20) {
        param_4 = iVar3 << (uVar7 & 0xff) | uVar2 >> (0x20 - uVar7 & 0xff);
      }
      else {
        param_4 = uVar2 << (iVar10 - 0x2bU & 0xff);
      }
      param_3 = uVar2 << (uVar7 & 0xff);
      if (uVar4 != 0) {
        iVar3 = uVar4 + uVar7 + -1;
        goto LAB_0102037c;
      }
    }
    else {
      uVar7 = -unaff_r7;
    }
    param_2 = param_2 & 0x7fffffff;
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = iVar3 + LZCOUNT(param_1);
    }
    uVar4 = iVar3 - 0xb;
    if (uVar4 < 0x20) {
      param_2 = param_2 << (uVar4 & 0xff) | param_1 >> (0x20 - uVar4 & 0xff);
    }
    else {
      param_2 = param_1 << (iVar3 - 0x2bU & 0xff);
    }
    param_1 = param_1 << (uVar4 & 0xff);
    iVar3 = uVar7 - uVar4;
  }
  else {
    iVar3 = (uVar4 - unaff_r7) - (uint)!(bool)in_CY;
  }
LAB_0102037c:
  param_2 = param_2 & 0xfffff;
  param_4 = param_4 & 0xfffff;
  uVar4 = param_1 - param_3;
  iVar10 = (param_2 - param_4) - (uint)(param_3 > param_1);
  uVar7 = param_4 | 0x100000;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    iVar3 = iVar3 + -1;
    uVar2 = uVar4 & 0x80000000;
    uVar1 = uVar4 * 2;
    uVar4 = uVar1 + param_3;
    iVar10 = iVar10 * 2 + (uint)(uVar2 != 0) + uVar7 + (uint)CARRY4(uVar1,param_3);
  }
  uVar1 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar2 = uVar4 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar4) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar13 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar13;
  uVar8 = (uint)((ulonglong)param_3 * (ulonglong)uVar13);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar13 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar8;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar8 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar8 <= uVar2) <= uVar1 - uVar5) {
    uVar13 = uVar13 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 10 | uVar4 >> 0x16;
  uVar8 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar8;
  uVar9 = (uint)((ulonglong)param_3 * (ulonglong)uVar8);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar8 >> 0x20);
  uVar4 = uVar4 * 0x400;
  uVar2 = uVar4 - uVar9;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar9 > uVar4);
  if (uVar1 <= uVar5 && (uint)(uVar9 <= uVar4) <= uVar1 - uVar5) {
    uVar8 = uVar8 - 1;
    bVar14 = CARRY4(uVar2,param_3);
    uVar2 = uVar2 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar1 = iVar10 << 0xb | uVar2 >> 0x15;
  uVar8 = uVar6 << 0x15 | uVar13 << 10 | uVar8;
  uVar6 = uVar1 / uVar7;
  uVar1 = uVar1 - uVar7 * uVar6;
  uVar13 = (uint)((ulonglong)param_3 * (ulonglong)uVar6);
  uVar5 = (uint)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20);
  uVar2 = uVar2 * 0x800;
  uVar4 = uVar2 - uVar13;
  iVar10 = (uVar1 - uVar5) - (uint)(uVar13 > uVar2);
  if (uVar1 <= uVar5 && (uint)(uVar13 <= uVar2) <= uVar1 - uVar5) {
    uVar6 = uVar6 - 1;
    bVar14 = CARRY4(uVar4,param_3);
    uVar4 = uVar4 + param_3;
    iVar10 = iVar10 + uVar7 + (uint)bVar14;
  }
  uVar2 = iVar10 << 0xb | uVar4 >> 0x15;
  uVar5 = uVar2 / uVar7;
  uVar2 = uVar2 - uVar7 * uVar5;
  uVar7 = (uint)((ulonglong)param_3 * (ulonglong)uVar5);
  uVar1 = (uint)((ulonglong)param_3 * (ulonglong)uVar5 >> 0x20);
  uVar4 = uVar4 * 0x800;
  uVar5 = uVar5 - (uVar2 <= uVar1 && (uint)(uVar7 <= uVar4) <= uVar2 - uVar1);
  if (uVar2 - uVar1 != (uint)(uVar7 > uVar4) || uVar4 - uVar7 != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar4 = uVar5 & 0xffc007ff;
  uVar7 = (uVar4 | (uVar6 & 0x7ff) << 0xb) >> 2;
  iVar10 = iVar3 + 0x400;
  if (iVar10 == 0 || iVar10 < 0 != SCARRY4(iVar3,0x400)) {
    uVar1 = (uVar4 << 0x1e) >> 1;
    uVar7 = uVar7 | uVar8 << 0x14;
    uVar4 = uVar8 >> 0xc | 0x100000;
    uVar2 = -iVar10 + 1;
    uVar5 = -iVar10 - 0x1f;
    if ((int)uVar2 < 0x20) {
      uVar8 = uVar2 & 0xff;
      uVar13 = uVar2 & 0xff;
      uVar11 = uVar4 >> (uVar2 & 0xff);
      uVar6 = uVar7 >> (uVar2 & 0xff) | uVar4 << (0x20 - uVar2 & 0xff);
      uVar5 = 0x20 - uVar2 & 0xff;
      bVar14 = uVar5 == 0 &&
               (uVar13 == 0 &&
                (uVar8 == 0 && 0x1f < uVar2 || uVar8 != 0 && (uVar7 >> uVar8 - 1 & 1) != 0) ||
               uVar13 != 0 && (uVar4 >> uVar13 - 1 & 1) != 0) ||
               uVar5 != 0 && (uVar7 << uVar5 - 1 & 0x80000000) != 0;
      uVar1 = uVar1 | uVar7 << uVar5;
    }
    else {
      if (0x34 < (int)uVar2) {
        return ((ulonglong)uVar11 & 0x80000000) << 0x20;
      }
      uVar6 = uVar4 >> (uVar5 & 0xff);
      uVar11 = 0x20 - uVar5 & 0xff;
      bVar14 = uVar11 != 0 && (uVar4 << uVar11 - 1 & 0x80000000) != 0;
      uVar1 = (uVar1 | uVar7 << 1) >> 1 | uVar7 >> (uVar5 & 0xff) | uVar4 << uVar11;
      uVar11 = 0;
    }
    bVar14 = 0x80000000 < uVar1 || uVar1 + 0x80000000 < (uint)bVar14;
    return CONCAT44(uVar11 + uVar12 + CARRY4(uVar6,(uint)bVar14),uVar6 + bVar14);
  }
  bVar14 = 0x80000000 < uVar4 * 0x40000000 ||
           uVar4 * 0x40000000 + 0x80000000 < (uint)((uVar5 & 4) != 0);
  uVar4 = uVar8 * 0x100000;
  uVar11 = (uVar8 >> 0xc) +
           iVar10 * 0x100000 + (uint)(CARRY4(uVar7,uVar4) || CARRY4(uVar7 + uVar4,(uint)bVar14));
  if ((int)(uVar11 + 0x100000) < 0) {
    return (ulonglong)(uVar12 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar11 | uVar12,uVar7 + uVar4 + bVar14);
}

