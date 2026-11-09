
undefined4 FUN_010130a8(uint param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    return 0xc801;
  }
  iVar1 = param_1 * 0xbc + DAT_010134dc;
  switch(param_2) {
  case 0:
  case 4:
    iVar1 = iVar1 + 0x200;
    break;
  case 1:
    iVar1 = iVar1 + 0x378;
    goto LAB_010130ec;
  case 2:
    iVar1 = iVar1 + 0x4f0;
    break;
  case 3:
    iVar1 = iVar1 + 0x668;
LAB_010130ec:
    *param_3 = iVar1;
    return 0;
  default:
    return 0xe700;
  }
  *param_3 = iVar1;
  return 0;
}

