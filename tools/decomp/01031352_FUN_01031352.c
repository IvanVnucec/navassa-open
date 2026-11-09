
undefined8 FUN_01031352(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FUN_01015e2c(5);
  uVar1 = heap_block_probe();
  uVar4 = 0;
  do {
    iVar2 = FUN_01035486(param_1);
    if (iVar2 == 1) goto LAB_0103137e;
    uVar3 = xPortGetFreeHeapSize(uVar1);
  } while (uVar3 < param_2);
  uVar4 = 0x2401;
LAB_0103137e:
  return CONCAT44(param_4,uVar4);
}

