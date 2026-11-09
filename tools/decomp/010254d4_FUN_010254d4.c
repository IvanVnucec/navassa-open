
undefined4 FUN_010254d4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  FUN_010256f4();
  FUN_010373a8(param_1);
  FUN_01029434(param_1);
  bVar1 = 0;
  do {
    if ((int)((param_1 >> (uint)bVar1) << 0x1f) < 0) {
      FUN_01003dea(bVar1);
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 2);
  return param_4;
}

