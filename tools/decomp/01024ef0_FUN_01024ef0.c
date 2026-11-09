
undefined4 FUN_01024ef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = heap_block_probe();
  iVar1 = DAT_01025448;
  do {
    iVar4 = **(int **)(iVar1 + param_1 * 4);
    uVar3 = xPortGetFreeHeapSize(uVar2);
    if (0x32 < uVar3) {
      return 0x4401;
    }
  } while (iVar4 << 0x1f < 0);
  return 0;
}

