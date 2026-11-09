
undefined4 FUN_0103a09e(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  bVar1 = false;
  uVar2 = heap_block_probe();
  while ((iVar3 = FUN_0103dafa(param_1), iVar3 != 0 && (!bVar1))) {
    uVar4 = xPortGetFreeHeapSize(uVar2);
    if (499 < uVar4) {
      uVar5 = 0x2a01;
      bVar1 = true;
    }
  }
  return uVar5;
}

