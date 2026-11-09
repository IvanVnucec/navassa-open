
int FUN_0101825c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  FUN_01019374();
  iVar1 = FUN_010185ce(param_1);
  if (iVar1 == 0) {
    FUN_01008afe();
    sVar3 = (*(byte *)(param_1 + 0x10) & 1) + 3;
    FUN_010086a6(sVar3);
    *(undefined1 *)(sVar3 * 0x60 + DAT_01018e38 + 0x10) = 1;
    FUN_01008de0(DAT_01018f68,sVar3);
    FUN_01008f08(sVar3,0);
    uVar2 = FUN_0101946c(DAT_01018f64,0x3f,0);
    FUN_0101946c(uVar2,0x40,0);
    FUN_01009094(sVar3,0);
  }
  return iVar1;
}

