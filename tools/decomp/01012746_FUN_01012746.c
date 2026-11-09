
longlong FUN_01012746(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  iVar2 = FUN_010292c8((&DAT_01012c08)[*(byte *)(param_1 + 5)]);
  if (iVar2 != 1) {
    uVar5 = 0;
    iVar2 = 0;
    uVar7 = 1;
    do {
      iVar8 = param_1 + uVar7 * 4;
      uVar3 = *(uint *)(iVar8 + 0x38) * 0x10;
      bVar9 = CARRY4(uVar5,uVar3);
      uVar3 = uVar5 + uVar3;
      uVar1 = *(uint *)(iVar8 + 0x98) * 0x10;
      uVar6 = uVar3 + uVar1;
      uVar4 = *(uint *)(iVar8 + 0xf8);
      uVar5 = uVar6 + uVar4 * 2;
      iVar2 = (*(uint *)(iVar8 + 0x98) >> 0x1c) +
              (*(uint *)(iVar8 + 0x38) >> 0x1c) + iVar2 + (uint)bVar9 + (uint)CARRY4(uVar3,uVar1) +
              (((int)uVar4 >> 0x1f) << 1 | uVar4 >> 0x1f) + (uint)CARRY4(uVar6,uVar4 * 2);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x18);
    iVar8 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    if ((iVar8 < iVar2) || ((iVar8 <= iVar2 && (*(uint *)(*(int *)(param_1 + 8) + 8) <= uVar5)))) {
      return CONCAT44(param_4,1);
    }
  }
  return (ulonglong)param_4 << 0x20;
}

