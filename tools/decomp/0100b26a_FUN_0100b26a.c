
int FUN_0100b26a(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1 & 0xff);
  return *(int *)(param_1 + 8) + -1;
}

