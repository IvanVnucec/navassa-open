
undefined8 FUN_01023d26(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  undefined4 uStack_1c;
  
  local_20 = 2;
  uStack_1c = param_4;
  iVar1 = FUN_01023e86();
  uVar3 = 0;
  iVar2 = 1;
  while ((local_20 & 5) == 0) {
    if (iVar2 == 0) goto LAB_01023d68;
    iVar2 = xTaskNotifyWait(0,0xf,&local_20,param_2);
  }
  if (iVar2 == 0) {
LAB_01023d68:
    FUN_01023f2c(param_1,iVar1);
    thunk_FUN_01015350(*(undefined1 *)(iVar1 + 4),2);
    FUN_0100adea(0x29);
    uVar3 = 4;
  }
  else if ((int)(local_20 << 0x1d) < 0) {
    uVar3 = 2;
  }
  else if (-1 < (int)(local_20 << 0x1f)) {
    uVar3 = 3;
  }
  iVar1 = FUN_0102b5a2(iVar1);
  if (iVar1 != 0) {
    uVar3 = 5;
  }
  heap_block_probe();
  FUN_01023d9a();
  return CONCAT44(local_20,uVar3);
}

