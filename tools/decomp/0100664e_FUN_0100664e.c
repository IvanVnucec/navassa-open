
undefined8 FUN_0100664e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    pin_update(*(int *)(DAT_0100669c + param_1 * 4) + 0x1cd,1,param_2);
  }
  else {
    uVar1 = 0xc801;
  }
  return CONCAT44(param_4,uVar1);
}

