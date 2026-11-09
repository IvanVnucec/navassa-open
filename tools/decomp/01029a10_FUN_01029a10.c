
undefined4 FUN_01029a10(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r6;
  
  if (1 < param_1) {
    return 0xc800;
  }
  uVar1 = FUN_01029b32();
  FUN_01029aea(uVar1,0x40,0x40);
  if (param_2 == 1) {
    heap_block_probe();
    do {
      uVar2 = FUN_01029adc();
      if (1 < uVar2) {
        return 0xc800;
      }
    } while (unaff_r6 << 0x19 < 0);
  }
  return 0;
}

