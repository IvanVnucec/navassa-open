
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_010364a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar2 = _DAT_0100d2cc;
  iVar1 = DAT_0100d2a0;
  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0x10) + 1);
  iVar8 = *(int *)(*(int *)(DAT_010364f8 + param_2 * 8 + uVar5 * 4) + 0xc);
  iVar3 = *(int *)(_DAT_0100d2c8 + param_2 * 8 + uVar5 * 4);
  iVar9 = *(int *)(DAT_0100d2a0 + uVar5 * 4 + 0x34);
  iVar4 = iVar9 * 0x60 + _DAT_0100d2cc;
  uVar6 = *(undefined4 *)(iVar4 + 0x1c);
  uVar10 = 0;
  if (*(char *)(DAT_0100d2a0 + iVar9 + 2) == '\x01') {
    iVar4 = DAT_0100d2a0 + uVar5 * 8;
    uVar11 = FUN_01020074(*(undefined4 *)(iVar4 + 0xa0),*(undefined4 *)(iVar4 + 0xa4));
  }
  else {
    uVar11 = FUN_010200bc(uVar6);
    FUN_010200bc((uint)*(uint3 *)(iVar4 + 0x2c));
    uVar12 = FUN_0100d142();
    uVar13 = FUN_010200bc((uint)*(byte *)(iVar4 + 0x2f) | (*(byte *)(iVar4 + 0x30) & 7) << 8);
    uVar12 = FUN_010200e0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
    FUN_0101f250((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                 (int)((ulonglong)uVar11 >> 0x20));
    FUN_010200bc((uint)*(ushort *)(iVar1 + iVar9 * 2 + 10) << 1);
    uVar11 = FUN_0100d154();
  }
  uVar12 = FUN_010200bc(uVar6);
  uVar13 = FUN_010200bc((uint)*(byte *)(iVar2 + 0xed) << 8 | (uint)*(byte *)(iVar2 + 0xee) << 0x10 |
                        (uint)*(byte *)(iVar2 + 0xec));
  FUN_0101f250((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
               (int)((ulonglong)uVar12 >> 0x20));
  uVar12 = FUN_0100d142();
  uVar13 = FUN_010200bc(uVar6);
  uVar14 = FUN_010200bc(*(undefined2 *)(iVar2 + 0xef));
  uVar13 = FUN_0101f250((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                        (int)((ulonglong)uVar13 >> 0x20));
  uVar12 = FUN_010200e0((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                        (int)((ulonglong)uVar12 >> 0x20));
  FUN_010200bc((uint)*(ushort *)(iVar1 + 0xe) << 1);
  uVar13 = FUN_0100d154();
  uVar14 = FUN_0102025c(*(undefined4 *)(*(int *)(_DAT_0100d2d0 + param_2 * 8 + uVar5 * 4) + 0xc));
  uVar7 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar12 = FUN_01020278((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar13,
                        (int)((ulonglong)uVar13 >> 0x20),uVar12);
  FUN_0102035c(0,_DAT_0100d2d4,(int)uVar14,uVar7);
  uVar11 = FUN_0100d14c();
  uVar6 = FUN_0101f250((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,_DAT_0100d2d8);
  uVar11 = FUN_010205a4(uVar6);
  uVar6 = FUN_01020608((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  uVar11 = FUN_0101f250(0,0x3e400000,(int)uVar14,uVar7);
  uVar13 = FUN_010200bc(uVar6);
  uVar11 = FUN_0101f250((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
  uVar11 = FUN_0101f250((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,_DAT_0100d2dc);
  *(undefined4 *)(iVar3 + 100) = uVar6;
  *(undefined8 *)(iVar3 + 0x68) = uVar11;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(int *)(iVar3 + 0x74) = -iVar8;
  uVar11 = FUN_01020278((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                        (int)((ulonglong)uVar11 >> 0x20));
  uVar11 = FUN_0101f250((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,_DAT_0100d2e0);
  uVar6 = FUN_0101f3f4((int)uVar11,(uint)((ulonglong)uVar11 >> 0x20) & 0x7fffffff);
  *(undefined4 *)(iVar3 + 0x70) = uVar6;
  if (*(float *)(iVar3 + 0x70) < fRam0100d288 ==
      (NAN(*(float *)(iVar3 + 0x70)) || NAN(fRam0100d288))) {
    uVar10 = 0x210d;
  }
  return CONCAT44(param_2,uVar10);
}

