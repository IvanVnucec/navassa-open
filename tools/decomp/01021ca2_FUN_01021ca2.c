
int FUN_01021ca2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_48 [48];
  undefined4 uStack_18;
  
  uVar1 = *DAT_01021f18;
  iVar7 = 0;
  if (((*(uint *)(param_2 + 4) & DAT_01021f50) != 0) && ((uVar1 & 0x151) == 0)) {
    iVar7 = 0xe108;
  }
  if (((*(uint *)(param_2 + 8) & DAT_01021f50) != 0) && ((uVar1 & 0x2a2) == 0)) {
    iVar7 = 0xe108;
  }
  if (((*(uint *)(param_2 + 4) & 0x1ff) != 0) &&
     (((uVar1 & 0x140) == 0 || (-1 < (int)((uint)uVar1 << 0x1d))))) {
    iVar7 = 0xe108;
  }
  if (((*(uint *)(param_2 + 8) & 0x1ff) != 0) &&
     (((uVar1 & 0x280) == 0 || (-1 < (int)((uint)uVar1 << 0x1c))))) {
    return 0xe108;
  }
  if (iVar7 != 0) {
    return iVar7;
  }
  uVar12 = 1;
  uStack_18 = param_4;
  uVar10 = FUN_01021d90();
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar10 != 0) {
    return (int)uVar10;
  }
  uVar3 = (uint)*(byte *)(param_2 + 0xd);
  lVar11 = CONCAT44(uVar4,uVar3);
  if ((uVar3 == 0) || (lVar11 = FUN_01021d9a(uVar3,uVar4,2,auStack_48,uVar12), (int)lVar11 == 0)) {
    lVar11 = FUN_01021d9a((int)lVar11,(int)((ulonglong)lVar11 >> 0x20),1,auStack_48,uVar12);
  }
  iVar7 = DAT_01021d80;
  if ((int)lVar11 == 0) {
    uVar12 = 0;
    lVar11 = FUN_01021d90();
    iVar2 = DAT_01022114;
    if ((int)lVar11 == 0) {
      iVar5 = 0;
      do {
        iVar8 = iVar2 + iVar5 * 8;
        uVar4 = *(undefined4 *)(iVar8 + 0x90);
        uVar3 = *(uint *)(iVar8 + 0x94);
        lVar11 = (ulonglong)uVar3 << 0x20;
        puVar9 = (undefined4 *)(iVar7 + 0x30 + iVar5 * 8);
        iVar5 = iVar5 + 1;
        *puVar9 = uVar4;
        puVar9[1] = uVar3;
      } while (iVar5 < 4);
      uVar6 = 3;
      goto LAB_01021d62;
    }
  }
  uVar4 = (undefined4)lVar11;
  uVar6 = 4;
LAB_01021d62:
  FUN_01021d9a(uVar4,(int)((ulonglong)lVar11 >> 0x20),uVar6,auStack_48,uVar12);
  return (int)lVar11;
}

