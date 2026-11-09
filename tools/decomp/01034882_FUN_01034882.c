
undefined4 FUN_01034882(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    pin_update(*(int *)(DAT_010348b8 + param_1 * 4) + 0x1cd,2,(uint)(param_2 << 0x19) >> 0x18);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

