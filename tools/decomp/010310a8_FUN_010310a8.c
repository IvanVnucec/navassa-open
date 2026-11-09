
longlong FUN_010310a8(void)

{
  int iVar1;
  uint in_r3;
  char in_ZR;
  
  FUN_01031138();
  if (in_ZR != '\0') {
    return CONCAT44(in_r3,0x2409);
  }
  iVar1 = FUN_01031128();
  if (in_ZR == '\0') {
    in_ZR = iVar1 == DAT_010313f0;
  }
  if (in_ZR == '\0') {
    return CONCAT44(in_r3,0x2408);
  }
  FUN_01030ff0();
  iVar1 = FUN_0103563e();
  FUN_0103561e();
  FUN_0103551c();
  FUN_01035588();
  FUN_01030e2c(100);
  FUN_0103568e();
  FUN_0103568e();
  FUN_010356ae();
  FUN_010356ae();
  FUN_0103561e();
  if (-1 < iVar1 << 0x1f) {
    FUN_01035672();
  }
  return (ulonglong)in_r3 << 0x20;
}

