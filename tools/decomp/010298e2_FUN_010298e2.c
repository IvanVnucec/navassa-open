
longlong FUN_010298e2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint unaff_r7;
  
  uVar1 = DAT_010299a4;
  if ((param_1 != 0) && (uVar1 = DAT_010299ac, param_1 != 1)) {
    return CONCAT44(unaff_r7,0xc509);
  }
  FUN_0100f6e6(DAT_010299a8,uVar1,param_2);
  return (ulonglong)unaff_r7 << 0x20;
}

