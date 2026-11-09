
undefined8 FUN_0100544c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    FUN_010054e4();
    FUN_01005528();
    FUN_01010aa8();
LAB_01005494:
    return CONCAT44(param_4,param_3);
  }
  if (param_4 == 1) {
    uVar1 = 1;
  }
  else if (param_4 == 3) {
    uVar1 = 3;
  }
  else {
    if (param_4 != 2) goto LAB_01005494;
    uVar1 = 2;
  }
  uVar2 = FUN_01010cc4(param_3,uVar1,param_2,param_1);
  return uVar2;
}

