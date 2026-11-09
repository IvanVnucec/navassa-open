
undefined8 FUN_01021172(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  
  puVar2 = DAT_01021d8c;
  piVar1 = DAT_01021d84;
  iVar7 = DAT_01021d80;
  iVar6 = DAT_01021d7c + (short)param_1 * 0x24;
  uVar8 = 0;
  if (param_4 == 0) {
    if (*(int *)(DAT_01021d80 + 0x50) == -1) {
      *DAT_01021d8c = (char)param_1;
      *(undefined4 *)(iVar7 + 0x50) = param_3;
      FUN_0101bab6();
      do {
      } while (*(int *)(iVar7 + 0x50) != -1);
    }
    else if (*(int *)(DAT_01021d80 + 0x50) == -2) {
      if (*(int *)(iVar6 + 8) != 0) {
        *DAT_01021d8c = (char)param_1;
        FUN_0101bab6();
        uVar8 = xPortGetFreeHeapSize(*(undefined4 *)(iVar7 + 0x54));
        *(undefined4 *)(puVar2 + 8) = uVar8;
        uVar4 = heap_block_probe();
        uVar8 = (**(code **)(iVar6 + 8))(param_2,param_3);
        uVar4 = xPortGetFreeHeapSize(uVar4);
        *(undefined4 *)(puVar2 + 4) = uVar4;
        *(undefined4 *)(iVar7 + 0x50) = param_3;
        do {
        } while (*(int *)(iVar7 + 0x50) != -2);
        uVar4 = heap_block_probe();
        *(undefined4 *)(iVar7 + 0x54) = uVar4;
      }
    }
    else if ((*(int *)(iVar6 + 8) != 0) &&
            ((*DAT_01021f14 == '\0' || ((int)((uint)*(byte *)(iVar6 + 0x20) << 0x1f) < 0)))) {
      if (*DAT_01021d78 == 2) {
        pcVar5 = *(code **)(iVar6 + 0xc);
        if (pcVar5 == (code *)0x0) goto LAB_01021266;
      }
      else {
        pcVar5 = *(code **)(iVar6 + 8);
      }
      uVar8 = (*pcVar5)(param_2,param_3);
    }
  }
  else {
    uVar3 = (uint)*DAT_01021d78;
    bVar9 = uVar3 == 1;
    if (bVar9) {
      uVar3 = *(uint *)(DAT_01021d80 + 0x50);
    }
    if ((bVar9 && uVar3 == 0) && (*(code **)(iVar6 + 0xc) != (code *)0x0)) {
      if (param_1 == 0xd) {
        uVar3 = (uint)*DAT_01021d78;
      }
      if (param_1 != 0xd || uVar3 != 2) {
        iVar7 = *DAT_01021d84;
        uVar8 = (**(code **)(iVar6 + 0xc))(param_2,param_3);
        *(int *)(DAT_01021d88 + param_1 * 4) =
             (*piVar1 + *(int *)(DAT_01021d88 + param_1 * 4)) - iVar7;
      }
    }
  }
LAB_01021266:
  return CONCAT44(param_4,uVar8);
}

