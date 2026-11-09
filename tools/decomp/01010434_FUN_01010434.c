
undefined8 FUN_01010434(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 < 2) {
    iVar4 = *(int *)(DAT_01010658 + param_1 * 4);
    iVar3 = *(int *)(DAT_01010678 + param_1 * 4);
    pin_update(iVar4 + 0x4a,3,0);
    pin_update(iVar4 + 0x4b,1,0);
    pin_update(iVar4 + 0x56,1,0);
    iVar4 = iVar3 + 0x167;
    if (param_2 == 0) {
      uVar1 = 0;
      iVar3 = iVar4;
    }
    else {
      iVar3 = iVar3 + 0x165;
      if (param_2 == 1) {
        pin_update(iVar4,1,1);
        uVar1 = 0;
      }
      else {
        if (param_2 != 2) goto LAB_010104aa;
        pin_update(iVar4,1,1);
        uVar1 = 1;
      }
    }
    pin_update(iVar3,1,uVar1);
  }
  else {
    uVar2 = 0xc400;
  }
LAB_010104aa:
  return CONCAT44(param_4,uVar2);
}

