
undefined8 FUN_0102f358(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar2 = *(int *)(DAT_0102f494 + param_1 * 4);
    pin_update(iVar2 + 0x3c,1,1);
    pin_update(iVar2 + 0xd7,1,0);
  }
  else {
    uVar1 = 0xc801;
  }
  return CONCAT44(param_4,uVar1);
}

