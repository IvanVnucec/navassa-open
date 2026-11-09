
/* WARNING: Removing unreachable block (ram,0x01025c7c) */

undefined8 FUN_01025c68(undefined4 *param_1)

{
  nmi_signal_helper();
  nmi_signal_helper(1);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    FUN_01035918(param_1 + 1);
  }
  return CONCAT44(0x18,param_1);
}

