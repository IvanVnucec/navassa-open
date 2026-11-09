
undefined8 FUN_01032cec(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  byte *unaff_r4;
  short sVar5;
  int unaff_r5;
  int iVar6;
  
  iVar3 = FUN_01032b86();
  iVar2 = DAT_010335bc;
  if (iVar3 == 0) {
    if (unaff_r5 << 0x1d < 0) {
      sVar5 = 0;
    }
    else {
      if (-1 < unaff_r5 << 0x1c) {
        uVar4 = 0x4402;
        goto LAB_01032d66;
      }
      sVar5 = 1;
    }
    bVar1 = *unaff_r4;
    if (bVar1 < 8) {
      iVar3 = DAT_010335bc + sVar5 * 0x1ac;
      iVar6 = iVar3 + 0xbc;
      FUN_0101204c(iVar6,unaff_r4 + 4,0xd0);
      bVar1 = *(byte *)(iVar3 + (uint)bVar1);
      FUN_0101204c(sVar5 * 0x750 + iVar2 + (short)(ushort)bVar1 * 0xd0 + 0x418,iVar6);
      FUN_01033dac(sVar5,bVar1);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x4400;
    }
  }
  else {
    uVar4 = 0xd203;
  }
LAB_01032d66:
  return CONCAT44(in_r3,uVar4);
}

