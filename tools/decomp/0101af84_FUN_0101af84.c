
/* WARNING: Removing unreachable block (ram,0x0101afba) */

undefined4
FUN_0101af84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 local_20;
  
  nmi_signal_helper(param_6 != 0);
  nmi_signal_helper(param_7 != 0);
  nmi_signal_helper(1);
  if (param_7 == 0 || param_6 == 0) {
    local_20 = 0;
  }
  else {
    *(int *)(param_7 + 0x30) = param_6;
    FUN_0101affa(param_1,param_2,param_3,param_4,param_5,&local_20,param_7,0);
    FUN_0101b07e(param_7);
  }
  return local_20;
}

