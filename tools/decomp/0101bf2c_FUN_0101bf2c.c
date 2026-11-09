
undefined4 FUN_0101bf2c(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0x13:
    uVar1 = DAT_0101caec;
    if (param_1 == 0) {
      uVar1 = DAT_0101caf0;
    }
    break;
  case 0x14:
    uVar1 = DAT_0101caf4;
    if (param_1 == 0) {
      uVar1 = DAT_0101caf8;
    }
    break;
  case 0x15:
    uVar1 = DAT_0101cafc;
    if (param_1 == 0) {
      uVar1 = DAT_0101cb00;
    }
    break;
  case 0x16:
    uVar1 = DAT_0101cb04;
    if (param_1 == 0) {
      uVar1 = DAT_0101cb08;
    }
    break;
  case 0x17:
    uVar1 = DAT_0101cb0c;
    if (param_1 != 0) {
      uVar1 = DAT_0101cb10;
    }
    break;
  default:
    return param_4;
  }
  FUN_0101c67c(param_1,param_2 + -0x13,0);
  uVar1 = pin_update(uVar1,0x10,(param_3 & 0xf) << 4,param_4);
  return uVar1;
}

