
undefined4 FUN_01029af0(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r5;
  int unaff_r6;
  
  if (1 < param_1) {
    return 0xc800;
  }
  FUN_01029b32();
  uVar1 = pin_update(unaff_r5 + 0xce,0x40,0x40);
  FUN_01029aea(uVar1,4,4);
  if (param_2 == 1) {
    heap_block_probe();
    do {
      uVar2 = FUN_01029adc();
      if (1 < uVar2) {
        return 0xc800;
      }
    } while (unaff_r6 << 0x1d < 0);
  }
  return 0;
}

