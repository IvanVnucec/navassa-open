
void FUN_0102b046(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r7;
  
  if ((unaff_r7 == 2) && (*(int *)(unaff_r6 + 0x3c) != 1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  nmi_signal_helper(uVar1);
  return;
}

