
longlong FUN_01030fc0(void)

{
  int iVar1;
  uint in_r3;
  char in_ZR;
  
  FUN_01031138();
  if (in_ZR != '\0') {
    return CONCAT44(in_r3,0x2409);
  }
  iVar1 = FUN_01031128();
  if ((in_ZR == '\0') && (iVar1 != DAT_010313f0)) {
    return CONCAT44(in_r3,0x2408);
  }
  FUN_0103551c();
  FUN_01035588();
  return (ulonglong)in_r3 << 0x20;
}

