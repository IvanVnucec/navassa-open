
undefined8 FUN_01005498(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    FUN_010054e4();
    FUN_01005528();
    FUN_01010b3e();
LAB_010054e0:
    return CONCAT44(param_4,param_3);
  }
  if (param_4 == 1) {
    uVar1 = 1;
  }
  else if (param_4 == 2) {
    uVar1 = 2;
  }
  else {
    if (param_4 != 3) goto LAB_010054e0;
    uVar1 = 3;
  }
  uVar2 = FUN_01010d70(param_3,uVar1,param_2,param_1);
  return uVar2;
}

