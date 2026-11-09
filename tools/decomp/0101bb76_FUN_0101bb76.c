
/* WARNING: Removing unreachable block (ram,0x0101bb90) */

undefined8
FUN_0101bb76(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0x28;
  nmi_signal_helper(1);
  nmi_signal_helper(param_6);
  if (param_6 != 0) {
    FUN_0101bbb8(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar1 = param_5;
  }
  return CONCAT44(uVar1,param_6);
}

