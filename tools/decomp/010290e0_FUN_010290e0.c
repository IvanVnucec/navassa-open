
undefined4 FUN_010290e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = DAT_010291f0;
  uVar4 = 0;
  *DAT_010291ec = 0;
  do {
    iVar5 = param_1 + uVar4 * 4;
    *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(DAT_010291f4 + uVar4 * 4);
    iVar3 = DAT_010291f8;
    *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(iVar2 + uVar4 * 4);
    *(undefined4 *)(iVar5 + 0xf8) = *(undefined4 *)(DAT_010291fc + uVar4 * 4);
    iVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(iVar5 + 0x158) = -*(int *)(iVar3 + iVar1);
  } while (uVar4 < 0x18);
  FUN_010126ca();
  FUN_010290d8();
  return 0;
}

