
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01026ed4(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  undefined8 uVar22;
  ushort local_78 [2];
  int local_74;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 local_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_28;
  
  bVar1 = *param_1;
  uVar19 = (uint)bVar1;
  pbVar16 = param_1 + 0x5c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x60] = bVar1;
  param_1[0x59] = bVar1;
  iVar9 = DAT_01027254;
  local_28 = param_2;
  switch(param_1[1]) {
  case 0:
    uVar22 = FUN_0102723c();
    iVar17 = 0;
    puVar18 = (uint *)((int)((ulonglong)uVar22 >> 0x20) + 0x19c);
    iVar15 = (int)uVar22 + 0x2b0;
    break;
  case 1:
    uVar22 = FUN_0102723c();
    iVar17 = 1;
    puVar18 = (uint *)((int)((ulonglong)uVar22 >> 0x20) + 0x314);
    iVar15 = (int)uVar22 + 0x3b0;
    break;
  case 2:
    uVar22 = FUN_0102723c();
    iVar17 = 2;
    puVar18 = (uint *)((int)((ulonglong)uVar22 >> 0x20) + 0x48c);
    iVar15 = (int)uVar22 + 0x4b0;
    break;
  case 3:
    iVar17 = 3;
    puVar18 = (uint *)((short)(ushort)*param_1 * 0xbc + DAT_01027254 + 0x604);
    iVar15 = DAT_01027258 + (uint)*param_1 * 0x80 + 0x5b0;
    break;
  default:
    goto switchD_01026efa_default;
  }
  uVar6 = FUN_0101175c(iVar17,*param_1);
  if (*(char *)((int)puVar18 + 0x2a) == '\x01') {
    uVar11 = puVar18[8];
    cVar2 = *(char *)((int)puVar18 + 0x12);
  }
  else {
    uVar11 = puVar18[9];
    cVar2 = *(char *)((int)puVar18 + 0x13);
  }
  uVar13 = uVar11 >> 1;
  if (cVar2 != '\x01') {
    fVar21 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    uVar13 = VectorFloatToUnsigned(fVar21 / DAT_01027250,3);
  }
  uVar13 = uVar13 << 1;
  if (uVar6 < uVar13) {
    uVar13 = *puVar18;
  }
  param_1[100] = 2;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(int *)pbVar16 = iVar17;
  if (*(int *)(*(int *)(param_1 + 4) + 0x20) == 2) {
    *(undefined4 *)(param_1 + 100) =
         *(undefined4 *)(DAT_01027260 + (uint)*(byte *)(DAT_0102725c + uVar19) * 4 + 0x34);
  }
  iVar7 = FUN_0100929c(auStack_70,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20));
  if (iVar7 == 0) {
    uVar6 = FUN_0101175c(*(undefined4 *)pbVar16,param_1[0x60]);
    if (uVar6 == 0) {
switchD_01026efa_default:
      uVar19 = *(uint *)(param_1 + 0x10) | 8;
      goto LAB_01026fca;
    }
    if (*(uint *)(iVar9 + 8) < uVar6 << 2) {
      local_74 = 0;
    }
    else {
      local_74 = 1;
      uVar11 = 0;
      local_78[0] = *(ushort *)(*(int *)(param_1 + 4) + 8);
      local_78[1] = *(ushort *)(*(int *)(param_1 + 4) + 10);
      do {
        uVar3 = local_78[uVar11];
        uVar14 = uVar3 & 0x3ff;
        uVar8 = ((uint)uVar3 << 0x14) >> 0x1e;
        uVar12 = uVar14 * (uVar6 / 1000);
        if (uVar8 == 0) {
          uVar14 = uVar12 / 1000;
        }
        else if (uVar8 == 1) {
          lVar4 = (ulonglong)DAT_01027264 * (ulonglong)uVar12;
          uVar14 = (uint)lVar4 >> 0x1f | (int)((ulonglong)lVar4 >> 0x20) << 1;
        }
        if (0x3ff < uVar14) {
          uVar14 = 0x3ff;
        }
        local_78[uVar11] = uVar3 & 0xf000 | (ushort)uVar14 | 0x800;
        uVar11 = uVar11 + 1;
      } while (uVar11 < 2);
    }
    if ((uVar6 >> 5 == 0) || (uVar6 = ((uVar13 >> 6) * 0x30) / (uVar6 >> 5), uVar6 + 2 < 5)) {
      uVar6 = 5;
    }
    else {
      uVar6 = uVar6 + 3;
    }
    uVar11 = (*(uint **)(param_1 + 4))[1];
    uVar6 = (1 << (uVar6 & 0xff)) - 1;
    uVar13 = **(uint **)(param_1 + 4) & uVar6;
    *(uint *)(param_1 + 0x14) = uVar13;
    *(uint *)(param_1 + 0x50) = uVar13;
    uVar6 = uVar6 & uVar11;
    *(uint *)(param_1 + 0x18) = uVar6;
    *(uint *)(param_1 + 0x54) = uVar6;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    iVar9 = FUN_01009518(*(undefined4 *)(param_1 + 100),*(undefined4 *)pbVar16,param_1[0x60],0);
    if (iVar9 != 0) {
      uVar19 = *(uint *)(param_1 + 0x10) | 2;
LAB_010270c0:
      FUN_01027270(uVar19);
      return 0;
    }
    iVar9 = FUN_010102be(uVar19,auStack_68);
    uVar10 = local_28;
    if (iVar9 != 0) {
      uVar19 = FUN_01027234();
      goto LAB_010270c0;
    }
    iVar9 = FUN_01010434(uVar19,0);
    if (iVar9 != 0) {
LAB_01027122:
      FUN_01027234();
      FUN_01027270();
      FUN_0102722a();
      return 0;
    }
    if (iVar17 == 2) {
      iVar9 = FUN_010104ae(uVar19,2,*(undefined1 *)(*(int *)(param_1 + 4) + 0x1c),uVar10);
    }
    else {
      iVar9 = FUN_0101054c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),uVar19,iVar17,uVar10);
    }
    if (iVar9 != 0) goto LAB_01027122;
    iVar9 = FUN_010298b6(0,auStack_58);
    if (iVar9 == 0) {
      FUN_0101206c(local_40,auStack_58,0x18);
      local_40[0] = 1;
      local_3c = 1;
      local_3b = 1;
      uVar22 = FUN_0102721a(1,local_40);
      FUN_01027222((int)uVar22,(int)((ulonglong)uVar22 >> 0x20),0x10);
      FUN_01025880(uVar19,iVar15 + 0x2c);
      if ((int)uVar22 == 0) {
        while (*(int *)(param_1 + 0x48) == 0) {
          iVar9 = *(int *)(param_1 + 0x50);
          bVar20 = iVar9 == 0;
          if (bVar20) {
            iVar9 = *(int *)(param_1 + 0x54);
          }
          if (bVar20 && iVar9 == 0) break;
          param_1[0x4c] = 0;
          param_1[0x4d] = 0;
          param_1[0x4e] = 0;
          param_1[0x4f] = 0;
          FUN_010112c4(*(undefined4 *)(param_1 + 4));
          puVar5 = DAT_0102726c;
          if (local_74 != 0) {
            *DAT_0102726c = local_78[0];
            puVar5[1] = local_78[1];
          }
          uVar19 = 1;
          do {
            while (*(int *)(param_1 + 0x4c) == 0) {
              if (-1 < (int)((*(uint *)(param_1 + 0x54) >> (uVar19 & 0xff)) << 0x1f))
              goto LAB_010271d4;
              FUN_01026d80(param_1,uVar19,*(undefined1 *)(*(int *)(param_1 + 4) + 0x1e));
            }
            while (*(int *)(param_1 + 0x4c) == 0) {
LAB_010271d4:
              if (-1 < (int)((*(uint *)(param_1 + 0x50) >> (uVar19 & 0xff)) << 0x1f)) break;
              FUN_01026d80(param_1,-uVar19,*(undefined1 *)(*(int *)(param_1 + 4) + 0x1e));
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < 0x18);
          FUN_0101133e();
        }
        iVar9 = FUN_01027218();
        if (iVar9 != 0) {
          uVar10 = FUN_01027234();
          *(undefined4 *)(param_1 + 0x10) = uVar10;
        }
        FUN_01027220();
        FUN_0102722a();
        iVar9 = FUN_01027272();
        if (iVar9 == 0) {
          iVar9 = *(int *)(param_1 + 0x50);
          bVar20 = iVar9 == 0;
          if (bVar20) {
            iVar9 = *(int *)(param_1 + 0x54);
          }
          if (!bVar20 || iVar9 != 0) {
            return 0;
          }
          return 1;
        }
        goto LAB_01026fc4;
      }
      FUN_01027272();
      FUN_0102722a();
      FUN_01027218();
      FUN_01027220();
    }
    else {
      FUN_01027272();
      FUN_0102722a();
    }
    uVar19 = FUN_01027234();
  }
  else {
LAB_01026fc4:
    uVar19 = *(uint *)(param_1 + 0x10) | 2;
  }
LAB_01026fca:
  *(uint *)(param_1 + 0x10) = uVar19;
  return 0;
}

