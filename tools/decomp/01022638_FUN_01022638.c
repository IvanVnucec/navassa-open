
undefined4 FUN_01022638(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01022724 + param_1 * 4);
  iVar2 = *(int *)(DAT_01022728 + param_1 * 4);
  switch(param_2) {
  case 0:
    iVar3 = iVar3 + 0x14;
    break;
  case 1:
    iVar3 = iVar3 + 0x38;
    break;
  case 2:
    iVar3 = iVar3 + 0x4c;
    break;
  case 3:
    *(char *)(iVar2 + 0xa6) = (char)((uint)param_3 >> 8);
    *(char *)(iVar2 + 0xa5) = (char)param_3;
  default:
    return param_4;
  }
  uVar1 = FUN_0102598c(iVar3,DAT_0102272c,param_3 << 0x10,param_4);
  return uVar1;
}

