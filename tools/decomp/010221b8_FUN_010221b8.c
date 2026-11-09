
uint FUN_010221b8(uint param_1)

{
  nmi_signal_helper(~-(uint)(param_1 < 0x10000) >> 0x1f);
  return param_1;
}

