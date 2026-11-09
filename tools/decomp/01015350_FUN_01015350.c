
undefined4 FUN_01015350(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = DAT_010154c8 + param_1 * 0x4c;
  if (param_2 == 0) {
    uVar1 = heap_block_probe();
    *(undefined4 *)(iVar3 + 0x24) = uVar1;
  }
  else if (param_2 == 2) {
    iVar2 = *(int *)(iVar3 + 0x20) + 1;
    *(int *)(iVar3 + 0x20) = iVar2;
    bVar4 = iVar2 == -1;
    if (bVar4) {
      iVar2 = 0;
    }
    if (bVar4) {
      *(int *)(iVar3 + 0x20) = iVar2;
    }
  }
  else if (param_2 < 2) {
    uVar1 = heap_block_probe();
    *(undefined4 *)(iVar3 + 0x28) = uVar1;
  }
  return 0;
}

