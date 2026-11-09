
undefined8 FUN_0102f5d2(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0102f4ac();
  if (iVar1 == 0) {
    if (param_2 == 0) {
      uVar2 = DAT_0102f628;
      if (param_1 == 0) {
        param_3 = (param_3 << 0x1c) >> 0x18;
        uVar3 = 0x30;
      }
      else {
        if (param_1 != 1) goto LAB_0102f624;
        param_3 = (param_3 << 0x1e) >> 0x18;
        uVar3 = 0xc0;
      }
    }
    else {
      if (param_2 != 1) {
        iVar1 = 0xc201;
        goto LAB_0102f624;
      }
      uVar2 = DAT_0102f638;
      if (param_1 == 2) {
        uVar3 = 3;
      }
      else {
        if (param_1 != 3) goto LAB_0102f624;
        param_3 = (param_3 << 0x1a) >> 0x18;
        uVar3 = 0xc;
      }
    }
    pin_update(uVar2,uVar3,param_3);
  }
LAB_0102f624:
  return CONCAT44(param_4,iVar1);
}

