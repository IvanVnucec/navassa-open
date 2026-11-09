
undefined4 FUN_01016b42(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  int unaff_r5;
  char in_CY;
  undefined8 uVar2;
  
  FUN_01016c64();
  if (in_CY == '\0') {
    pin_update(unaff_r5 + 3,1,1);
    uVar1 = pin_update(unaff_r5 + 6,1,1);
    FUN_01016c08(uVar1,2,2);
    uVar1 = FUN_01016c04();
    uVar2 = FUN_01016c08(uVar1,1,0);
    uVar2 = FUN_01016c5a((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
    uVar1 = FUN_01016c1e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
    uVar1 = FUN_01016c20(uVar1,2,2);
    FUN_01016c20(uVar1,1,0);
  }
  else {
    unaff_r4 = 0xe701;
  }
  return unaff_r4;
}

