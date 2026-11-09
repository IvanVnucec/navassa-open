
undefined8
FUN_010497b8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = param_2 >> 5;
  if (uVar2 == 1) {
    FUN_0104980c();
    FUN_0104b500();
  }
  else if (uVar2 == 2) {
    FUN_0104980c();
    uVar1 = FUN_0104bb00();
  }
  else if ((uVar2 == 5) && ((param_2 & 0x1f) < 0x19)) {
    if (*(code **)(&DAT_01049818 + (param_2 & 0x1f) * 8) == (code *)0x0) {
      uVar1 = 0x8f05;
    }
    else {
      uVar1 = (**(code **)(&DAT_01049818 + (param_2 & 0x1f) * 8))(param_1,param_3,param_4,param_5);
    }
  }
  else {
    uVar1 = 0x8f00;
  }
  return CONCAT44(param_4,uVar1);
}

