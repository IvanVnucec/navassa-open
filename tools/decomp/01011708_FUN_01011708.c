
undefined4 FUN_01011708(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 1;
  iVar2 = param_2 * 0xbc + DAT_01011a40;
  switch(param_1) {
  case 0:
  case 4:
    uVar3 = *(uint *)(iVar2 + 0x19c);
    break;
  case 1:
    uVar3 = *(uint *)(iVar2 + 0x314);
    break;
  case 2:
    uVar3 = *(uint *)(iVar2 + 0x48c);
    break;
  case 3:
    uVar3 = *(uint *)(iVar2 + 0x604);
    break;
  default:
    goto switchD_0101171c_default;
  }
  if (DAT_01011a44 <= uVar3) {
    uVar1 = 0;
  }
switchD_0101171c_default:
  return uVar1;
}

