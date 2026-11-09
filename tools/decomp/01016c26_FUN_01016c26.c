
undefined4 FUN_01016c26(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  char in_CY;
  undefined8 uVar2;
  
  uVar2 = FUN_01016c64();
  if (in_CY == '\0') {
    FUN_01016c5a((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x10);
    uVar1 = FUN_01016c04();
    FUN_01016c08(uVar1,1,1);
    pin_update(unaff_r5 + 0x2c,1,1);
  }
  else {
    unaff_r4 = 0xe701;
  }
  return unaff_r4;
}

