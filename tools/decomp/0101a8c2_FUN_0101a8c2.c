
undefined4 FUN_0101a8c2(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    pin_update(*(int *)(DAT_0101a908 + param_1 * 4) + 0x5a,8,(uint)(param_2 << 0x1b) >> 0x18);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

