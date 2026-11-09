
void FUN_010224a8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01022724 + param_1 * 4);
  switch(param_2) {
  case 0:
    iVar1 = iVar1 + 0x10;
    break;
  case 1:
    iVar1 = iVar1 + 0x34;
    break;
  case 2:
    iVar1 = iVar1 + 0x48;
    break;
  case 3:
    pin_update(*(int *)(DAT_01022728 + param_1 * 4) + 0x1e,1,param_3);
    return;
  default:
    return;
  }
  FUN_0102598c(iVar1,0x1000000,param_3 << 0x18);
  return;
}

