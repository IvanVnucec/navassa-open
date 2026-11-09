
longlong FUN_010081fc(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_010084dc;
  uVar1 = DAT_010084d8;
  if (param_2 < 0xc) {
    if (param_2 == 0x1c) {
      if (param_1 == 0) {
        uVar3 = 0;
      }
      else {
        if (param_1 != 1) goto LAB_0100824e;
        uVar3 = 0;
        uVar2 = uVar1;
      }
    }
    else if (param_1 == 0) {
      pin_update(DAT_010084dc,0xf0,param_2 << 4 & 0xff);
      uVar3 = 2;
    }
    else {
      if (param_1 != 1) goto LAB_0100824e;
      pin_update(DAT_010084d8,0xf0,param_2 << 4 & 0xff);
      uVar3 = 2;
      uVar2 = uVar1;
    }
    pin_update(uVar2,2,uVar3);
  }
LAB_0100824e:
  return (ulonglong)param_4 << 0x20;
}

