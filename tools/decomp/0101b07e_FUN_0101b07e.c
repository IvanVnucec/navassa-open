
void FUN_0101b07e(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  uint uVar3;
  
  FUN_0101b168();
  iVar2 = DAT_0101b9d4;
  iVar1 = DAT_0101b94c;
  *(int *)(DAT_0101b94c + 0x48) = *(int *)(DAT_0101b94c + 0x48) + 1;
  if (*(int *)(iVar2 + 0x78) == 0) {
    *(int *)(iVar2 + 0x78) = unaff_r4;
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar3 = 0;
      do {
        FUN_01035918(uVar3 * 0x14 + iVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 6);
      FUN_01035918(iVar1 + 0x70);
      FUN_01035918(iVar1 + 0x84);
      FUN_01035918(iVar1);
      FUN_01035918(iVar1 + 0x14);
      FUN_01035918(iVar1 + 0x34);
      *(int *)(iVar1 + 0x28) = iVar1 + 0x70;
      *(int *)(iVar1 + 0x2c) = iVar1 + 0x84;
    }
  }
  else if ((*(int *)(iVar1 + 0x50) == 0) &&
          (*(uint *)(*(int *)(iVar2 + 0x78) + 0x2c) <= *(uint *)(unaff_r4 + 0x2c))) {
    *(int *)(iVar2 + 0x78) = unaff_r4;
  }
  *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
  uVar3 = *(uint *)(unaff_r4 + 0x2c);
  *(uint *)(iVar2 + 0x7c) = *(uint *)(iVar2 + 0x7c) | 1 << (uVar3 & 0xff);
  vListInsert(iVar2 + uVar3 * 0x14,unaff_r4 + 4);
  FUN_0102bf96();
  if (*(int *)(iVar1 + 0x50) != 0) {
    if (*(uint *)(*(int *)(iVar2 + 0x78) + 0x2c) < *(uint *)(unaff_r4 + 0x2c)) {
      FUN_0101b882();
      FUN_0101b228();
    }
  }
  return;
}

