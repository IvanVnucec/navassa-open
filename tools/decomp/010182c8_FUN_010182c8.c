
void FUN_010182c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_0101825c();
  iVar1 = DAT_01018e2c;
  if ((iVar2 == 0) &&
     (iVar3 = FUN_01008850(*(undefined4 *)
                            (DAT_01018f64 + (*(byte *)(DAT_01018e2c + 0x10) & 1) * 4 + 0xc),2),
     iVar2 = DAT_01018f68, iVar3 == 0)) {
    FUN_0100b074(0,*(undefined4 *)(DAT_01018f68 + 0x28));
    uVar4 = *(byte *)(iVar1 + 0x22) & 1 ^ 1;
    iVar3 = FUN_01018360(uVar4,0);
    if (iVar3 == 0) {
      FUN_01018f6c(uVar4,iVar1 + uVar4 * 0xbc + 0x228,(short)uVar4 * 0x54 + iVar2 + 0xdc,0);
      return;
    }
  }
  return;
}

