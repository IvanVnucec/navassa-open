
undefined4 FUN_01022500(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_01022724 + param_1 * 4);
  iVar3 = *(int *)(DAT_01022728 + param_1 * 4);
  switch(param_2) {
  case 0:
    iVar2 = iVar2 + 0x10;
    break;
  case 1:
    iVar2 = iVar2 + 0x34;
    break;
  case 2:
    iVar2 = iVar2 + 0x48;
    break;
  case 3:
    uVar1 = FUN_010225d0(param_3,0xf,param_3 & 0xff);
    FUN_010225d0(uVar1,0x10,0x10);
    iVar3 = iVar3 + 0x2c;
    pin_update(iVar3,4,0);
    uVar1 = pin_update(iVar3,4,4,param_4);
    return uVar1;
  default:
    return param_4;
  }
  FUN_0102598c(iVar2,0x78000000,param_3 << 0x1b);
  uVar1 = FUN_0102598c(iVar2,0x4000000,0x4000000,param_4);
  return uVar1;
}

