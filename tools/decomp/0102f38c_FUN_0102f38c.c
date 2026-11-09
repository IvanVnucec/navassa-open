
undefined4 FUN_0102f38c(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar1 = *(int *)(DAT_0102f494 + param_1 * 4);
    switch(param_2) {
    case 0:
    case 4:
      iVar1 = iVar1 + 0xfa;
      break;
    case 1:
      iVar1 = iVar1 + 0x18e;
      break;
    case 2:
      iVar1 = iVar1 + 0x1a8;
      break;
    case 3:
      iVar1 = iVar1 + 0x1c2;
      break;
    default:
      return 0xe700;
    }
    pin_update(iVar1,1,1);
  }
  else {
    uVar2 = 0xc801;
  }
  return uVar2;
}

