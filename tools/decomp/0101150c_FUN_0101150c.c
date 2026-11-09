
undefined8 FUN_0101150c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  iVar2 = FUN_01011628();
  uVar11 = 1;
  do {
    iVar3 = FUN_010115ec(param_2 + 0x4c,param_2 + 0x4c + uVar11 * 4);
    iVar4 = FUN_010115ec(param_2 + 0x18,param_2 + 0x18 + uVar11 * 4);
    iVar5 = FUN_010115e8(param_2 + 0x4c);
    iVar6 = FUN_010115e8(param_2 + 0x18);
    iVar8 = 1 << (uint)*(byte *)((int)&DAT_01011a88 + uVar11 + 3);
    iVar9 = iVar8 + -1;
    iVar7 = -iVar8;
    bVar14 = SBORROW4(iVar3,iVar7);
    bVar13 = iVar3 + iVar8 < 0;
    if (bVar13 == bVar14) {
      bVar14 = SBORROW4(iVar9,iVar3);
      bVar13 = iVar9 - iVar3 < 0;
    }
    if (bVar13 == bVar14) {
      bVar14 = SBORROW4(iVar5,iVar7);
      bVar13 = iVar5 + iVar8 < 0;
    }
    if (bVar13 != bVar14) {
LAB_010115e4:
      uVar11 = 0;
      goto LAB_010115de;
    }
    bVar13 = SBORROW4(iVar9,iVar5);
    iVar1 = iVar9 - iVar5;
    if (iVar5 <= iVar9) {
      bVar13 = SBORROW4(iVar4,iVar7);
      iVar1 = iVar4 + iVar8;
    }
    if (iVar1 < 0 != bVar13) goto LAB_010115e4;
    bVar13 = SBORROW4(iVar9,iVar4);
    iVar1 = iVar9 - iVar4;
    if (iVar4 <= iVar9) {
      bVar13 = SBORROW4(iVar6,iVar7);
      iVar1 = iVar6 + iVar8;
    }
    bVar14 = iVar1 < 0;
    if (bVar14 == bVar13) {
      bVar13 = SBORROW4(iVar9,iVar6);
      bVar14 = iVar9 - iVar6 < 0;
    }
    if (bVar14 != bVar13) goto LAB_010115e4;
    *(int *)(iVar2 + 0xa4 + uVar11 * 4) = iVar3 << 0xe;
    *(int *)(iVar2 + 0xa4 + uVar11 * -4) = iVar5 << 0xe;
    *(int *)(iVar2 + 0x24 + uVar11 * 4) = iVar4 << 0xe;
    uVar10 = iVar2 + 0x24;
    uVar12 = uVar11 + 1;
    *(int *)(uVar10 + uVar11 * -4) = iVar6 << 0xe;
    uVar11 = uVar12;
  } while (uVar12 < 7);
  iVar7 = FUN_010114b8(*(undefined4 *)(param_2 + 0x4c));
  iVar3 = FUN_010114b8(*(undefined4 *)(param_2 + 0x18));
  bVar13 = iVar7 + 0x20000U < 0x40000;
  if (bVar13) {
    uVar10 = iVar3 + 0x20000;
  }
  uVar11 = (uint)(bVar13 && uVar10 < 0x40000);
  *(int *)(iVar2 + 0xa4) = iVar7 << 0xe;
  *(int *)(iVar2 + 0x24) = iVar3 << 0xe;
LAB_010115de:
  return CONCAT44(param_4,uVar11);
}

