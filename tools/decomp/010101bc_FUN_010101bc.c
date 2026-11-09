
undefined4
FUN_010101bc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5)

{
  undefined4 uVar1;
  
  if (param_5 == 1) {
    uVar1 = FUN_0100fdd6();
    *param_1 = uVar1;
    uVar1 = FUN_0100fe18(param_3,param_4);
  }
  else {
    uVar1 = FUN_0100ff82(param_3,param_4);
    *param_1 = uVar1;
    uVar1 = FUN_0100ff92(param_3,param_4);
  }
  *param_2 = uVar1;
  return param_4;
}

