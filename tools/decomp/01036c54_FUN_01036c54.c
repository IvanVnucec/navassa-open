
void FUN_01036c54(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int unaff_r4;
  int unaff_r5;
  char in_ZR;
  
  uVar1 = FUN_01036c40();
  if (in_ZR == '\0') {
    FUN_01036c82(uVar1,1,1);
    if (unaff_r4 == 2) {
      uVar1 = 4;
      goto LAB_01036c7c;
    }
  }
  else {
    FUN_01036c82(uVar1,1,0);
  }
  uVar1 = 0;
LAB_01036c7c:
  pin_update(unaff_r5 + 0x1ca,4,uVar1,in_r3);
  return;
}

