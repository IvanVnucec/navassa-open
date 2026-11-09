
void FUN_01036c10(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int unaff_r4;
  int unaff_r5;
  char in_ZR;
  undefined8 uVar2;
  
  uVar2 = FUN_01036c40();
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (in_ZR == '\0') {
    FUN_01036c80((int)uVar2,uVar1,2);
    if (unaff_r4 == 2) {
      uVar1 = 1;
      goto LAB_01036c34;
    }
  }
  else {
    FUN_01036c80((int)uVar2,uVar1,0);
  }
  uVar1 = 0;
LAB_01036c34:
  pin_update(unaff_r5 + 0x174,1,uVar1,in_r3);
  return;
}

