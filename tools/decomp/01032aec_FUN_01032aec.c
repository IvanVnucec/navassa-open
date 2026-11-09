
undefined4 FUN_01032aec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char *unaff_r4;
  uint unaff_r5;
  
  iVar3 = FUN_01032b86();
  if (iVar3 == 0) {
    iVar3 = FUN_0102229c();
    if ((unaff_r5 & 0xc) == 0) {
      uVar4 = 0x4402;
    }
    else {
      if ((int)(unaff_r5 << 0x1d) < 0) {
        iVar3 = 0;
      }
      else if ((int)(unaff_r5 << 0x1c) < 0) {
        iVar3 = 1;
      }
      iVar6 = iVar3 * 0x5c + DAT_010335bc;
      cVar5 = *(char *)(iVar6 + 0x358);
      if (cVar5 != '\0') {
        cVar5 = '\x01';
      }
      *unaff_r4 = cVar5;
      iVar1 = DAT_010335c0;
      unaff_r4[1] = *(char *)(iVar6 + 0x359);
      unaff_r4[2] = *(char *)(iVar6 + 0x35b);
      iVar7 = 0;
      unaff_r4[3] = *(char *)(iVar6 + 0x35a);
      unaff_r4[4] = '\0';
      do {
        *(undefined4 *)(unaff_r4 + iVar7 * 4 + 5) =
             *(undefined4 *)
              (iVar1 + iVar3 * 4 + iVar7 * 0xc + (short)(ushort)(byte)unaff_r4[3] * 0x38);
        iVar2 = DAT_010335c4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
      unaff_r4[0x15] = (char)*(undefined4 *)(iVar6 + 0x35c);
      unaff_r4[0x16] = *(char *)(iVar2 + iVar3 * 0xc);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xd203;
  }
  return uVar4;
}

