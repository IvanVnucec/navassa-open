
void FUN_01024de4(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined4 unaff_r5;
  
  switch(unaff_r5) {
  case 0:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar2 = 1;
    break;
  case 1:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    param_3 = param_3 << 1 & 0xff;
    uVar2 = 2;
    break;
  case 2:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    param_3 = param_3 << 2 & 0xff;
    uVar2 = 4;
    break;
  case 3:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    param_3 = param_3 << 3 & 0xff;
    uVar2 = 8;
    break;
  case 4:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    param_3 = (param_3 << 0x1c) >> 0x18;
    uVar2 = 0x10;
    break;
  case 5:
    uVar2 = 1;
    goto LAB_01024c90;
  case 6:
    param_3 = param_3 << 1 & 0xff;
    uVar2 = 2;
    goto LAB_01024c90;
  case 7:
    param_3 = param_3 << 2 & 0xff;
    uVar2 = 4;
    goto LAB_01024c90;
  case 8:
    param_3 = param_3 << 3 & 0xff;
    uVar2 = 8;
LAB_01024c90:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4) + 0x1d3;
    goto LAB_01024c98;
  default:
    return;
  }
  iVar1 = iVar1 + 0x19e;
LAB_01024c98:
  pin_update(iVar1,uVar2,param_3);
  return;
}

