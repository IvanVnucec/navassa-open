
void FUN_01042544(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_010425c4 + param_1 * 4);
  iVar1 = *(int *)(DAT_010425c0 + param_1 * 4) + 0x20;
  switch(param_2) {
  case 0:
    FUN_010425a4(iVar1,param_2,0);
    uVar2 = 0;
    break;
  case 1:
    FUN_010425a4(iVar1,param_2,0x20);
    uVar2 = 4;
    break;
  case 2:
    FUN_010425a4(iVar1,param_2,0x40);
    uVar2 = 8;
    break;
  case 3:
    FUN_010425a4(iVar1,param_2,0x60);
    uVar2 = 0xc;
    break;
  default:
    goto switchD_0104255e_default;
  }
  pin_update(iVar3 + 0x1a5,0xc,uVar2);
switchD_0104255e_default:
  pin_update(iVar3 + 0xdc,0x40,0x40,param_4);
  return;
}

