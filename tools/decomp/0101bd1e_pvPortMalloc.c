
undefined8
pvPortMalloc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = heap_block_probe();
  puVar1 = DAT_0101bf00;
  if (uVar2 < (uint)DAT_0101bf00[4]) {
    while (piVar5 = (int *)*puVar1, *piVar5 != 0) {
      uVar7 = *(uint *)piVar5[3];
      uVar6 = ((uint *)piVar5[3])[3];
      vListRemove(uVar6 + 4);
      (**(code **)(uVar6 + 0x24))(uVar6);
      if (*(int *)(uVar6 + 0x1c) == 1) {
        uVar3 = *(int *)(uVar6 + 0x18) + uVar7;
        if (uVar7 < uVar3) {
          *(uint *)(uVar6 + 4) = uVar3;
          *(uint *)(uVar6 + 0x10) = uVar6;
          vListInsertGeneric(*puVar1,uVar6 + 4);
        }
        else {
          param_3 = 0;
          FUN_0101bbf6(uVar6,0,uVar7,0,0,param_4);
          nmi_signal_helper();
        }
      }
    }
    uVar4 = puVar1[1];
    puVar1[1] = piVar5;
    *puVar1 = uVar4;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  *param_1 = uVar4;
  puVar1[4] = uVar2;
  return CONCAT44(param_3,uVar2);
}

