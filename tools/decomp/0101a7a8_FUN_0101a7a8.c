
undefined4 FUN_0101a7a8(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    pin_update(*(int *)(DAT_0101a908 + param_1 * 4) + 0x51,1,1);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

