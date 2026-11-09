
undefined4 FUN_01016b9e(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char in_CY;
  
  FUN_01016c0e();
  if (in_CY == '\0') {
    if (extraout_r1 == 0) {
      FUN_01016bfa(0,0,0x10);
      uVar1 = FUN_01016c1c();
      uVar1 = FUN_01016c20(uVar1,1,1);
      uVar2 = 1;
    }
    else {
      if (extraout_r1 != 1) {
        return unaff_r4;
      }
      FUN_01016bf0(1,1,0x10);
      uVar1 = FUN_01016c1c();
      uVar1 = FUN_01016c20(uVar1,1,1);
      uVar2 = 2;
    }
    FUN_01016c08(uVar1,uVar2);
  }
  else {
    unaff_r4 = 0xe703;
  }
  return unaff_r4;
}

