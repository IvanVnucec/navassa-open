
undefined8 FUN_01016a54(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  int unaff_r5;
  int iVar2;
  char in_CY;
  undefined8 uVar3;
  
  FUN_01016c0e();
  if (in_CY == '\0') {
    iVar2 = unaff_r5 + 6;
    if (extraout_r1 == 0) {
      FUN_010168d2();
      uVar3 = FUN_01016b00();
      uVar1 = FUN_01016af8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),2);
      uVar1 = FUN_01016afa(uVar1,4,0);
      uVar3 = FUN_01016afa(uVar1,1,0);
      uVar3 = FUN_01016bfa((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
      uVar1 = FUN_01016c06((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
      FUN_01016c08(uVar1,2,2);
      iVar2 = unaff_r5 + 3;
    }
    else {
      if (extraout_r1 != 1) goto LAB_01016af2;
      FUN_01016c08(1,1,1);
      uVar1 = FUN_01016b00();
      uVar1 = FUN_01016afa(uVar1,1,1);
      uVar3 = FUN_01016afa(uVar1,8,0);
      uVar3 = FUN_01016af8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
      uVar1 = FUN_01016bf0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
      uVar1 = FUN_010168d6(uVar1,4,0);
      FUN_010168d6(uVar1,2,2);
    }
    pin_update(iVar2,1,0);
  }
  else {
    unaff_r4 = 0xe703;
  }
LAB_01016af2:
  return CONCAT44(in_r3,unaff_r4);
}

