
undefined4 FUN_010225e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_01022724 + param_1 * 4);
  iVar3 = *(int *)(DAT_01022728 + param_1 * 4);
  switch(param_2) {
  case 0:
    iVar2 = iVar2 + 0x14;
    break;
  case 1:
    iVar2 = iVar2 + 0x38;
    break;
  case 2:
    iVar2 = iVar2 + 0x4c;
    break;
  case 3:
    *(char *)(iVar3 + 0x1f0) = (char)((uint)param_3 >> 0x10);
    *(char *)(iVar3 + 0x42) = (char)((uint)param_3 >> 8);
    *(char *)(iVar3 + 0x43) = (char)param_3;
  default:
    return param_4;
  }
  uVar1 = FUN_0102598c(iVar2,0xffff,param_3,param_4);
  return uVar1;
}

