
void nmi_signal_helper(int param_1)

{
  if (param_1 == 0) {
    *DAT_0100accc = 0x80000000;
  }
  return;
}

