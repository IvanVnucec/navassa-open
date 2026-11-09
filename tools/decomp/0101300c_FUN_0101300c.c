
undefined4 FUN_0101300c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 unaff_r4;
  char in_NG;
  
  iVar1 = FUN_01013050();
  if (in_NG == '\0') {
    unaff_r4 = 0xc801;
  }
  else {
    pin_update(*(int *)(DAT_01013090 + iVar1 * 4) + 0x108,2,(uint)(param_3 << 0x19) >> 0x18);
  }
  return unaff_r4;
}

