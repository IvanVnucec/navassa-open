
undefined4 FUN_01029a46(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r6;
  
  if (1 < param_1) {
    return 0xc800;
  }
  FUN_01029a88();
  uVar1 = FUN_01029ae4();
  FUN_01029aea(uVar1,0x10,0x10);
  if (param_3 == 1) {
    heap_block_probe();
    do {
      uVar2 = FUN_01029adc();
      if (1 < uVar2) {
        return 0xc800;
      }
    } while (unaff_r6 << 0x1b < 0);
  }
  return 0;
}

