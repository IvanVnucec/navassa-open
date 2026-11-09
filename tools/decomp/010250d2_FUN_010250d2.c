
longlong FUN_010250d2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint unaff_r7;
  
  uVar1 = DAT_01025450;
  uVar2 = DAT_01025458;
  if ((param_1 != 0) && (uVar1 = DAT_01025454, uVar2 = DAT_0102545c, param_1 != 1)) {
    return CONCAT44(unaff_r7,0x4400);
  }
  FUN_0100f6e6(uVar1,uVar2,param_2);
  return (ulonglong)unaff_r7 << 0x20;
}

