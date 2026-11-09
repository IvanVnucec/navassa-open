
/* WARNING: Removing unreachable block (ram,0x0102ae8e) */

undefined8 FUN_0102ae42(uint param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int local_18;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1 & 0xff);
  nmi_signal_helper(param_4 != 0);
  if ((param_3 == 0) || (uVar1 = param_2, param_2 != 0)) {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1 & 0xff);
  if (param_3 == 0) {
    uVar1 = -(uint)(param_2 == 0) >> 0x1f;
  }
  else {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1);
  local_18 = 0x48;
  nmi_signal_helper(1);
  if (param_4 != 0) {
    FUN_0102aeaa(param_1,param_2,param_3,param_5);
    local_18 = param_4;
  }
  return CONCAT44(local_18,param_4);
}

