
undefined4 FUN_010442e4(void)

{
  int *piVar1;
  undefined4 unaff_r7;
  
  piVar1 = (int *)FUN_01044314();
  if (*piVar1 != -1) {
    software_bkpt(0xab);
    *piVar1 = 0;
  }
  if (piVar1[1] != -1) {
    software_bkpt(0xab);
    piVar1[1] = 0;
  }
  return unaff_r7;
}

