
longlong FUN_01029c52(int param_1,undefined4 param_2)

{
  int iVar1;
  uint unaff_r7;
  
  if (1 < param_1) {
    return CONCAT44(unaff_r7,0xc800);
  }
  iVar1 = FUN_01029c48(param_1,param_2,param_2);
  pin_update(iVar1 + 0xa0);
  return (ulonglong)unaff_r7 << 0x20;
}

