
undefined8 FUN_01018330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_010186f6(DAT_01018e2c,param_1);
  if (iVar1 == 0) {
    FUN_01018e3c(param_1);
    pin_update(*(int *)(DAT_010190bc + param_1 * 4) + 0xc4,1,1);
  }
  return CONCAT44(param_4,iVar1);
}

