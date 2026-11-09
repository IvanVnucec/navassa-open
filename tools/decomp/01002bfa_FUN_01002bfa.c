
undefined8 FUN_01002bfa(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01002b00();
  uVar3 = DAT_01002da0;
  uVar4 = DAT_01002d94;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      if (param_1 == 0) {
        FUN_01002c80(DAT_01002d90);
        uVar2 = DAT_01002d98;
        uVar3 = uVar4;
      }
      else {
        if (param_1 != 1) goto LAB_01002c7c;
        FUN_01002c80(DAT_01002d9c);
        uVar2 = DAT_01002da4;
      }
      pin_update(uVar2,3,param_3);
      param_3 = 0;
      uVar4 = 4;
    }
    else {
      uVar3 = DAT_01002da8;
      if (param_2 == 1) {
        if (param_1 == 2) {
          uVar4 = 3;
        }
        else {
          if (param_1 != 3) goto LAB_01002c7c;
          param_3 = (param_3 & 1) << 4;
          uVar4 = 0x30;
        }
      }
      else if (param_1 == 2) {
        param_3 = (param_3 << 0x1a) >> 0x18;
        uVar4 = 0xc;
      }
      else {
        if (param_1 != 3) goto LAB_01002c7c;
        param_3 = (param_3 & 1) << 6;
        uVar4 = 0xc0;
      }
    }
    pin_update(uVar3,uVar4,param_3);
  }
LAB_01002c7c:
  return CONCAT44(param_4,iVar1);
}

