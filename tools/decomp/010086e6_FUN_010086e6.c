
undefined4 FUN_010086e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = FUN_010098b0();
  iVar6 = DAT_010091f0 + param_1 * 0x60;
  uVar5 = *(uint *)(iVar6 + 0x1c);
  sVar2 = FUN_01008ada(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),uVar5);
  FUN_01008ad8(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc));
  lVar1 = (ulonglong)(uVar3 << 1) * (ulonglong)uVar5;
  iVar4 = FUN_01008ad8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  uVar5 = iVar4 + 1U >> 1;
  if (uVar5 == uVar3) {
    uVar5 = 0;
    sVar2 = sVar2 + 1;
  }
  *(uint *)(iVar6 + 0x28) = uVar5;
  *(char *)(iVar6 + 0x2c) = (char)uVar5;
  *(byte *)(iVar6 + 0x2e) = (byte)(uVar5 >> 0x10) & 0x7f;
  *(char *)(iVar6 + 0x2f) = (char)sVar2;
  *(byte *)(iVar6 + 0x30) = (byte)((ushort)sVar2 >> 8) & 7;
  *(char *)(iVar6 + 0x2d) = (char)(uVar5 >> 8);
  return param_4;
}

