
undefined4 FUN_0102f3e4(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    switch(param_2) {
    case 0:
    case 4:
      uVar1 = 0;
      break;
    case 1:
      uVar1 = 3;
      break;
    case 2:
      uVar1 = 0x53;
      break;
    case 3:
      uVar1 = 0xa3;
      break;
    default:
      return 0xe700;
    }
    FUN_010027dc(*(int *)(DAT_0102f494 + param_1 * 4) + 0xd6,0xf3,uVar1);
  }
  else {
    uVar2 = 0xc801;
  }
  return uVar2;
}

