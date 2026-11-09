
void FUN_010226d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01022730 + param_1 * 4) + 0x103;
  switch(param_2) {
  case 0:
    uVar2 = (uint)*(byte *)(param_3 + 0x10);
    uVar1 = 1;
    break;
  case 1:
    uVar2 = ((uint)*(byte *)(param_3 + 0x10) << 0x19) >> 0x18;
    uVar1 = 2;
    break;
  case 2:
    uVar2 = ((uint)*(byte *)(param_3 + 0x10) << 0x1a) >> 0x18;
    uVar1 = 4;
    break;
  case 3:
    iVar3 = DAT_01022734;
    if (param_1 == 0) {
      uVar2 = ((uint)*(byte *)(param_3 + 0x10) << 0x1c) >> 0x18;
      uVar1 = 0x10;
    }
    else {
      uVar2 = ((uint)*(byte *)(param_3 + 0x10) << 0x1d) >> 0x18;
      uVar1 = 0x20;
    }
    break;
  default:
    return;
  }
  pin_update(iVar3,uVar1,uVar2);
  return;
}

