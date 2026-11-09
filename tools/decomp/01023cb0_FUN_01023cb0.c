
undefined8 FUN_01023cb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_18;
  
  local_18 = 0;
  puVar1 = (undefined4 *)FUN_0101b6a4(0,1);
  iVar2 = xTaskNotifyWait(0,6,&local_18,param_2);
  uVar3 = 1;
  if (iVar2 == 0) {
    FUN_01023f2c(param_1,puVar1);
    thunk_FUN_01015350(*(undefined1 *)(puVar1 + 1),2);
    FUN_0100adea(0x29);
    uVar3 = 4;
  }
  else {
    if ((int)(local_18 << 0x1d) < 0) {
      uVar3 = 2;
    }
    else if (-1 < (int)(local_18 << 0x1e)) {
      uVar3 = 3;
    }
    if ((local_18 & 0xfffffff9) != 0) {
      FUN_0101b7d8(*puVar1,0,0,0);
    }
  }
  iVar2 = FUN_0102b5a2(puVar1);
  if (iVar2 != 0) {
    uVar3 = 5;
  }
  heap_block_probe();
  FUN_01023d9a();
  return CONCAT44(local_18,uVar3);
}

