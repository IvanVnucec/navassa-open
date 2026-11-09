
void FUN_01024de2(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  
  uVar3 = 1;
  switch(unaff_r5) {
  case 0:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar2 = 1;
    break;
  case 1:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar3 = 2;
    uVar2 = 2;
    break;
  case 2:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar3 = 4;
    uVar2 = 4;
    break;
  case 3:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar2 = 8;
    uVar3 = 8;
    break;
  case 4:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4);
    uVar2 = 0x10;
    uVar3 = 0x10;
    break;
  case 5:
    uVar2 = 1;
    goto LAB_01024c90;
  case 6:
    uVar3 = 2;
    uVar2 = 2;
    goto LAB_01024c90;
  case 7:
    uVar3 = 4;
    uVar2 = 4;
    goto LAB_01024c90;
  case 8:
    uVar2 = 8;
    uVar3 = 8;
LAB_01024c90:
    iVar1 = *(int *)(DAT_01025380 + unaff_r4 * 4) + 0x1d3;
    goto LAB_01024c98;
  default:
    return;
  }
  iVar1 = iVar1 + 0x19e;
LAB_01024c98:
  pin_update(iVar1,uVar2,uVar3);
  return;
}

