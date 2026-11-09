
undefined4 FUN_0102f2e4(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    return 0xc801;
  }
  iVar3 = *(int *)(DAT_0102f494 + param_1 * 4);
  pin_update(iVar3 + 0xd7,1,1);
  switch(param_2) {
  case 0:
  case 4:
    iVar2 = iVar3 + 0x3b;
    break;
  case 1:
    iVar2 = iVar3 + 399;
    break;
  case 2:
    iVar2 = iVar3 + 0x1a9;
    break;
  case 3:
    iVar2 = iVar3 + 0x1c3;
    break;
  default:
    uVar1 = 0xe700;
    goto code_r0x0102f348;
  }
  pin_update(iVar2,1,1);
  pin_update(iVar2,1,0);
code_r0x0102f348:
  pin_update(iVar3 + 0x3c,1,0);
  return uVar1;
}

