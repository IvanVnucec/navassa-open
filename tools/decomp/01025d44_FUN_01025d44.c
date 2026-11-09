
undefined4 FUN_01025d44(void)

{
  uint *unaff_r7;
  uint unaff_r8;
  int unaff_r10;
  
  if (unaff_r10 == 0) {
    if ((*unaff_r7 & unaff_r8) == 0) {
      return 0;
    }
  }
  else if ((*unaff_r7 & unaff_r8) != unaff_r8) {
    return 0;
  }
  return 1;
}

