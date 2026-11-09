
undefined8 xTaskIncrementTick(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_r3;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar1 = DAT_0101ba44;
  uVar7 = 0;
  if (*(int *)(DAT_0101ba44 + 0x6c) == 0) {
    uVar8 = *(int *)(DAT_0101ba44 + 0x4c) + 1;
    *(uint *)(DAT_0101ba44 + 0x4c) = uVar8;
    if (uVar8 == 0) {
      FUN_0101b134(*(undefined4 **)(iVar1 + 0x28),**(undefined4 **)(iVar1 + 0x28));
      uVar3 = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(iVar1 + 0x2c) = uVar3;
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
      prvGetNextUnblockTime();
    }
    iVar2 = DAT_0101ba48;
    if (*(uint *)(iVar1 + 100) <= uVar8) {
      while (**(int **)(iVar1 + 0x28) != 0) {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x28) + 0xc) + 0xc);
        uVar5 = *(uint *)(iVar6 + 4);
        if (uVar8 < uVar5) goto LAB_0101b3e4;
        FUN_0101b570();
        if (*(int *)(iVar6 + 0x28) != 0) {
          FUN_0101b426();
        }
        iVar4 = FUN_0101b418();
        vListInsert(iVar2 + iVar4 * 0x14,iVar6 + 4);
        if (*(uint *)(*(int *)(iVar2 + 0x78) + 0x2c) <= *(uint *)(iVar6 + 0x2c)) {
          uVar7 = 1;
        }
      }
      uVar5 = 0xffffffff;
LAB_0101b3e4:
      *(uint *)(iVar1 + 100) = uVar5;
    }
    if (1 < *(uint *)(iVar2 + *(int *)(*(int *)(iVar2 + 0x78) + 0x2c) * 0x14)) {
      uVar7 = 1;
    }
    if (*(int *)(iVar1 + 0x54) != 0) goto LAB_0101b40c;
  }
  else {
    *(int *)(DAT_0101ba44 + 0x54) = *(int *)(DAT_0101ba44 + 0x54) + 1;
  }
  FUN_01035c14();
LAB_0101b40c:
  if (*(int *)(iVar1 + 0x58) != 0) {
    uVar7 = 1;
  }
  return CONCAT44(in_r3,uVar7);
}

