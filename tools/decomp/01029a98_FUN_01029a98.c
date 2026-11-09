
undefined4 FUN_01029a98(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined2 extraout_r1;
  int unaff_r5;
  int unaff_r6;
  
  if (1 < param_1) {
    return 0xc800;
  }
  FUN_01029a88();
  *(undefined1 *)(unaff_r5 + 0xd1) = (char)extraout_r1;
  *(char *)(unaff_r5 + 0xd2) = (char)((ushort)extraout_r1 >> 8);
  FUN_01029aea((undefined1 *)(unaff_r5 + 0xd1),8,8);
  if (param_3 == 1) {
    heap_block_probe();
    do {
      uVar1 = FUN_01029adc();
      if (1 < uVar1) {
        return 0xc800;
      }
    } while (unaff_r6 << 0x1c < 0);
  }
  return 0;
}

