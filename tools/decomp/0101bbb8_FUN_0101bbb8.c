
undefined4
FUN_0101bbb8(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1 & 0xff);
  if (param_6 != (undefined4 *)0x0) {
    FUN_0101be78();
    *param_6 = param_1;
    param_6[6] = param_2;
    param_6[7] = param_3;
    param_6[8] = param_4;
    param_6[9] = param_5;
    uVar2 = FUN_01035932(param_6 + 1,param_4);
    return uVar2;
  }
  return param_4;
}

