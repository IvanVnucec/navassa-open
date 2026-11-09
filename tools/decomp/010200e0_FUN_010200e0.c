
longlong FUN_010200e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  if (-1 < (int)(param_2 ^ param_4)) {
    uVar6 = param_1 - param_3;
    iVar11 = (param_2 - param_4) - (uint)(param_3 > param_1);
    if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
      bVar12 = param_1 < uVar6;
      param_1 = param_1 - uVar6;
      param_2 = (param_2 - iVar11) - (uint)bVar12;
      bVar12 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      param_4 = param_4 + iVar11 + (uint)bVar12;
    }
    bVar12 = 0xffdfffff < param_2 << 1;
    if (!bVar12) {
      bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
    }
    if (bVar12) {
      if (0xffdfffff < param_2 << 1) {
        return CONCAT44(param_2,param_1);
      }
      if (param_3 == 0 && (param_4 & 0x7fffffff) == 0) {
LAB_01020352:
        return CONCAT44(param_2,param_1);
      }
      if (param_2 * 2 < 0x200000) {
        bVar12 = CARRY4(param_1,param_3);
        param_1 = param_1 + param_3;
        param_2 = param_2 + (param_4 & 0x7fffffff) + (uint)bVar12;
        goto LAB_01020352;
      }
      param_4 = param_4 & 0x7fffffff;
      uVar6 = (param_2 >> 0x14) - 1;
      if (0x34 < (int)uVar6) goto LAB_01020352;
    }
    else {
      uVar6 = (param_2 >> 0x14) - (param_4 >> 0x14);
      if (0x35 < (int)uVar6) goto LAB_01020352;
      param_4 = (param_4 << 0xb | 0x80000000) >> 0xb;
    }
    uVar10 = (int)(param_2 << 0xb | 0x80000000) >> 0xb;
    uVar5 = uVar6 - 0x20;
    if (uVar5 == 0 || (int)uVar6 < 0x20) {
      uVar7 = param_3 >> (uVar6 & 0xff);
      uVar4 = (param_3 >> (uVar6 & 0x1f) | param_3 << 0x20 - (uVar6 & 0x1f)) ^ uVar7;
      uVar5 = param_4 >> (uVar6 & 0x1f) | param_4 << 0x20 - (uVar6 & 0x1f);
      uVar8 = (uVar5 << (uVar6 & 0xff)) >> (uVar6 & 0xff);
      uVar7 = uVar7 ^ uVar5 ^ uVar8;
      uVar6 = param_1 + uVar7;
      uVar5 = uVar10 + uVar8 + (uint)CARRY4(param_1,uVar7);
      if (!CARRY4(uVar10,uVar8) && !CARRY4(uVar10 + uVar8,(uint)CARRY4(param_1,uVar7)))
      goto LAB_01020308;
    }
    else {
      uVar7 = param_4 >> (uVar5 & 0xff);
      uVar4 = (param_4 >> (uVar5 & 0x1f) | param_4 << 0x20 - (uVar5 & 0x1f)) ^ uVar7;
      if (param_3 != 0) {
        uVar4 = uVar4 | 1;
      }
      uVar6 = param_1 + uVar7;
      uVar5 = uVar10 + CARRY4(param_1,uVar7);
      if (!CARRY4(uVar10,(uint)CARRY4(param_1,uVar7))) goto LAB_01020308;
    }
    uVar10 = uVar5 & 1;
    uVar5 = uVar5 >> 1;
    bVar2 = (byte)uVar6;
    uVar6 = (uint)(uVar10 != 0) << 0x1f | uVar6 >> 1;
    uVar10 = uVar4 & 1;
    uVar4 = (uint)(bVar2 & 1) << 0x1f | uVar4 >> 1;
    if (uVar10 != 0) {
      uVar4 = uVar4 | 1;
    }
LAB_01020308:
    bVar12 = 0x80000000 < uVar4 || uVar4 + 0x80000000 < (uint)((uVar6 & 1) != 0);
    uVar10 = uVar5 + 0x100000 + (param_2 & 0xfff00000) + (uint)CARRY4(uVar6,(uint)bVar12);
    if (0xffdfffff < uVar10 * 2) {
      return (ulonglong)(uVar10 & 0xfff00000) << 0x20;
    }
    return CONCAT44(uVar10,uVar6 + bVar12);
  }
  param_4 = param_4 ^ 0x80000000;
  uVar6 = param_1 - param_3;
  if (param_2 <= param_4 && (uint)(param_3 <= param_1) <= param_2 - param_4) {
    uVar10 = (param_2 - param_4) - (uint)(param_3 > param_1) ^ 0x80000000;
    bVar12 = param_1 < uVar6;
    param_1 = param_1 - uVar6;
    param_2 = (param_2 - uVar10) - (uint)bVar12;
    bVar12 = CARRY4(param_3,uVar6);
    param_3 = param_3 + uVar6;
    param_4 = param_4 + uVar10 + (uint)bVar12;
  }
  bVar12 = 0xffdfffff < param_2 << 1;
  if (!bVar12) {
    bVar12 = param_4 * 2 < 0x200000 || param_4 * -2 + 0x200000 < (uint)bVar12;
  }
  if (bVar12) {
    bVar12 = 0xffdfffff < param_2 * 2;
    if (bVar12) {
      if (param_2 * 2 == 0xffe00000) {
        bVar12 = 0xffdfffff < param_4 << 1;
      }
      if (bVar12) {
        param_2 = 0xffffffff;
      }
      goto LAB_01020216;
    }
    uVar5 = param_4 & 0x7fffffff;
    if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) {
      if (0x3fffff < param_2 * 2) {
        uVar10 = (param_2 >> 0x14) - 1;
        if (0x34 < (int)uVar10) goto LAB_01020216;
        goto LAB_010201ac;
      }
      bVar12 = param_1 < param_3;
      param_1 = param_1 - param_3;
      param_2 = (param_2 - uVar5) - (uint)bVar12;
    }
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0) {
      param_2 = 0;
    }
  }
  else {
    uVar6 = param_2 >> 0x14;
    uVar10 = uVar6 - (param_4 >> 0x14);
    if (0x36 < (int)uVar10) goto LAB_01020216;
    uVar5 = param_4 << 0xb | 0x80000000;
    if ((int)uVar10 < 2) {
      uVar5 = uVar5 | param_3 >> 0x15;
      if (uVar10 == 1) {
        param_3 = param_3 << 10;
        uVar5 = uVar5 >> 1;
      }
      else {
        param_3 = param_3 << 0xb;
      }
      uVar7 = param_1 >> 0x15;
      uVar10 = param_1 * 0x800;
      param_1 = uVar10 - param_3;
      param_2 = ((param_2 << 0xb | 0x80000000 | uVar7) - uVar5) - (uint)(uVar10 < param_3);
      uVar10 = uVar6 << 0x14;
      if (-1 < (int)param_2) {
        if (param_2 == 0) {
          iVar11 = LZCOUNT(param_1);
          param_2 = param_1 << iVar11;
          if (param_2 == 0) goto LAB_01020216;
          param_1 = 0;
          iVar11 = iVar11 + 0x20;
        }
        else {
          iVar11 = LZCOUNT(param_2);
          param_2 = param_2 << iVar11 | param_1 >> (0x20U - iVar11 & 0xff);
          param_1 = param_1 << iVar11;
        }
        iVar3 = (int)(uVar6 << 0x14) >> 0x1f;
        uVar5 = -iVar3 | uVar6 << 0x15;
        uVar10 = uVar5 + iVar11 * -0x200000;
        uVar7 = uVar10 & 0xfffffffe;
        uVar6 = iVar3 * -0x80000000;
        uVar10 = uVar10 >> 1 | uVar6;
        if (uVar5 < (uint)(iVar11 * 0x200000) || uVar7 == 0) {
          uVar7 = 0x200000 - uVar7 >> 0x15;
          uVar10 = param_2 >> (uVar7 & 0x1f);
          uVar5 = param_2 << 0x20 - (uVar7 & 0x1f);
          param_2 = param_2 >> (uVar7 & 0xff);
          param_1 = param_1 >> (uVar7 & 0xff) ^ (uVar10 | uVar5) ^ param_2;
          uVar10 = uVar6;
        }
      }
      uVar6 = param_1 >> 0xb | param_2 << 0x15;
      bVar12 = (param_1 >> 10 & 1) != 0 && (param_1 >> 0xb & 1) != 0;
      param_1 = uVar6 + bVar12;
      param_2 = uVar10 + ((param_2 & 0x7fffffff) >> 0xb) + (uint)CARRY4(uVar6,(uint)bVar12);
      goto LAB_01020216;
    }
    uVar5 = uVar5 >> 0xb;
LAB_010201ac:
    uVar7 = param_2 >> 0x14;
    uVar6 = (param_2 << 0xb | 0x80000000) >> 0xb;
    uVar8 = uVar10 - 0x20;
    if (uVar8 == 0 || (int)uVar10 < 0x20) {
      uVar8 = param_3 >> (uVar10 & 0xff);
      uVar9 = (param_3 >> (uVar10 & 0x1f) | param_3 << 0x20 - (uVar10 & 0x1f)) ^ uVar8;
      uVar4 = uVar5 >> (uVar10 & 0xff);
      uVar5 = uVar8 ^ (uVar5 >> (uVar10 & 0x1f) | uVar5 << 0x20 - (uVar10 & 0x1f)) ^ uVar4;
      uVar10 = (param_1 - uVar5) - (uint)(uVar9 != 0);
      uVar6 = (uVar6 - uVar4) - (uint)(param_1 <= uVar5 && (uint)(uVar9 == 0) <= param_1 - uVar5);
    }
    else {
      uVar4 = uVar5 >> (uVar8 & 0xff);
      uVar9 = (param_3 | param_3 << 0x10) >> 0x10 | uVar5 << (0x20 - uVar8 & 0xff);
      uVar10 = (param_1 - uVar4) - (uint)(uVar9 != 0);
      uVar6 = uVar6 - (param_1 <= uVar4 && (uint)(uVar9 == 0) <= param_1 - uVar4);
    }
    uVar5 = -uVar9;
    if (((uVar6 & 0x100000) == 0) && (uVar7 = uVar7 - 1, (uVar7 & 0x7ff) != 0)) {
      bVar1 = (uVar5 & 0x80000000) != 0;
      uVar5 = uVar9 * -2;
      uVar8 = uVar10 * 2;
      bVar12 = CARRY4(uVar10,uVar10);
      uVar10 = uVar10 * 2 + (uint)bVar1;
      uVar6 = uVar6 * 2 + (uint)(bVar12 || CARRY4(uVar8,(uint)bVar1));
    }
    bVar12 = 0x80000000 < uVar5 || uVar5 + 0x80000000 < (uint)((uVar10 & 1) != 0);
    param_1 = uVar10 + bVar12;
    param_2 = (uVar6 & 0xffefffff) + uVar7 * 0x100000 + (uint)CARRY4(uVar10,(uint)bVar12);
  }
LAB_01020216:
  return CONCAT44(param_2,param_1);
}

