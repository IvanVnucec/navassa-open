
undefined4 FUN_01032c8e(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *unaff_r4;
  
  iVar2 = FUN_01032b88();
  if (iVar2 != 0) {
    return 0xd203;
  }
  bVar1 = unaff_r4[4];
  FUN_0100d7b8();
  iVar2 = DAT_010335bc;
  if (param_1 << 0x1d < 0) {
    iVar3 = 0;
  }
  else {
    if (-1 < param_1 << 0x1c) {
      return 0x4402;
    }
    iVar3 = 1;
  }
  *unaff_r4 = bVar1;
  FUN_0101204c(unaff_r4 + 4,
               (short)iVar3 * 0x750 + iVar2 +
               (short)(ushort)*(byte *)(iVar2 + iVar3 * 0x1ac + (uint)bVar1) * 0xd0 + 0x418);
  return 0;
}

