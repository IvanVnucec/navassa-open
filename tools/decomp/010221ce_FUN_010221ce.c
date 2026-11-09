
undefined8 FUN_010221ce(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  char in_ZR;
  
  FUN_0102223c();
  FUN_0102222a();
  do {
    FUN_010221b8();
    FUN_0102221e();
    if (in_ZR != '\0') {
      uVar2 = 0;
      goto LAB_010221f0;
    }
    iVar1 = FUN_01022236();
    in_ZR = iVar1 == 0;
  } while ((bool)in_ZR);
  uVar2 = 0xe102;
LAB_010221f0:
  FUN_01015d2e(0);
  return CONCAT44(in_r3,uVar2);
}

