
undefined4 FUN_01033248(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_30 [7];
  undefined4 uStack_14;
  
  iVar3 = *(int *)(DAT_01033844 + param_1 * 0xbc + 0x24);
  uStack_14 = param_4;
  FUN_010331ee(param_1,local_30);
  iVar1 = 0xc;
  uVar2 = 0;
  do {
    if ((uint)(iVar3 * *(int *)(DAT_010335bc + 0x414)) < local_30[uVar2]) {
      iVar1 = uVar2 << 1;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  *param_2 = *(undefined2 *)(DAT_01033f3c + iVar1);
  return 0;
}

