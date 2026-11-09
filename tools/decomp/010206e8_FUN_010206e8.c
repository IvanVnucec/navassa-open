
void FUN_010206e8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01020770 + param_1 * 4) + 0xfa;
  iVar1 = *(int *)(DAT_0102076c + param_1 * 4) + 0x20;
  switch(param_2) {
  case 0:
    FUN_01020744(iVar1,param_2,0);
    uVar2 = 0;
    break;
  case 1:
    FUN_01020744(iVar1,param_2,0x20);
    uVar2 = 0x10;
    break;
  case 2:
    FUN_01020744(iVar1,param_2,0x40);
    uVar2 = 0x30;
    break;
  case 3:
    FUN_01020744(iVar1,param_2,0x60);
    uVar2 = 0x20;
    break;
  default:
    goto switchD_01020700_default;
  }
  pin_update(iVar3,0x30,uVar2);
switchD_01020700_default:
  pin_update(iVar3,8,8);
  return;
}

