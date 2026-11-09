
undefined4 FUN_01009ae4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_0100a02c + param_2);
  switch(param_1) {
  case 0:
  case 4:
    cVar1 = *(char *)(*(int *)(DAT_0100a030 + uVar2 * 4) + 0x2f);
    break;
  case 1:
  case 3:
    cVar1 = *(char *)(*(int *)(DAT_0100a030 + uVar2 * 4) + 0x30);
    break;
  case 2:
    FUN_010078d4(uVar2,param_3,param_4);
    return 0;
  default:
    return 0xe700;
  }
  if (cVar1 == '\0') {
    FUN_0100788a();
  }
  else if (cVar1 == '\x01') {
    FUN_010078a0();
  }
  return 0;
}

