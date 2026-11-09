
void FUN_01036bca(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_01036bb2();
  if (unaff_r4 == 0) {
    pin_update(unaff_r5 + 0x9c,2,0);
  }
  else {
    pin_update(unaff_r5 + 0x9c,2,2);
  }
  pin_update(unaff_r5 + 0x9d,1);
  return;
}

