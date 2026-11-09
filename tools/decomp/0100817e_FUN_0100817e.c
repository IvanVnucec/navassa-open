
undefined4 FUN_0100817e(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar6 = *(int *)(&DAT_0100857c + param_1 * 4);
  uVar7 = *(undefined4 *)(&DAT_01008590 + param_1 * 4);
  uVar1 = heap_block_probe();
  uVar4 = 0;
  puVar5 = (uint *)(iVar6 + 0x10);
  do {
    if (-1 < (int)(*puVar5 << 1)) break;
    uVar2 = xPortGetFreeHeapSize(uVar1);
  } while (uVar2 < 10);
  if ((int)(*puVar5 << 1) < 0) {
    uVar4 = 0xc10e;
  }
  else {
    *puVar5 = param_2 | 0x40000000;
    if (param_3 == 1) {
      uVar1 = heap_block_probe();
      do {
        uVar2 = *puVar5;
        if (-1 < (int)(uVar2 << 1)) break;
        uVar3 = xPortGetFreeHeapSize(uVar1);
      } while (uVar3 < 10);
      if ((int)*puVar5 < 0 || (int)(uVar2 << 1) < 0) {
        uVar4 = FUN_0100827a(iVar6,uVar7,DAT_010084d4);
      }
    }
  }
  return uVar4;
}

