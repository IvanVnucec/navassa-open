
longlong FUN_0100d6ec(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = heap_block_probe();
  do {
    uVar2 = xPortGetFreeHeapSize(uVar1);
  } while (uVar2 < param_1);
  return (ulonglong)param_4 << 0x20;
}

