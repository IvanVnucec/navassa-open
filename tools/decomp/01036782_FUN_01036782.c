
void FUN_01036782(int param_1)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  if (param_1 == 0) {
    uVar1 = 0x40000000;
  }
  else {
    uVar1 = 0x8000000;
  }
  *DAT_01036860 = uVar1;
  FUN_01002880(0x35);
  FUN_010028fc(0x35,6);
  FUN_010028ac(0x35,unaff_r7);
  return;
}

