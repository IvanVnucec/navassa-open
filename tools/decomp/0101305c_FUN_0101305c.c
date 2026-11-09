
undefined8 FUN_0101305c(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  char in_NG;
  
  FUN_01013050();
  if (in_NG == '\0') {
    unaff_r4 = 0xc801;
  }
  else {
    iVar1 = FUN_0101307a();
    pin_update(iVar1 + 0x138);
  }
  return CONCAT44(in_r3,unaff_r4);
}

