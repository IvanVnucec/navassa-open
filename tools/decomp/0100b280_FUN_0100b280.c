
uint FUN_0100b280(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = DAT_0100b540;
  uVar6 = FUN_0101369c(param_1 << 10,param_1 >> 0x16,DAT_0100b540,0);
  iVar5 = (int)(uVar6 >> 0x20);
  uVar3 = (uint)uVar6;
  if (-1 < (int)(uVar3 << 0x1f)) {
    if ((iVar5 != 0) || (0x3ff < uVar3)) {
      lVar1 = (ulonglong)uVar2 * (ulonglong)(uVar3 - 1);
      uVar4 = (uint)lVar1;
      iVar5 = uVar2 * (iVar5 - (uint)(uVar3 == 0)) + (int)((ulonglong)lVar1 >> 0x20);
      goto LAB_0100b2bc;
    }
    uVar6 = (ulonglong)CONCAT14(uVar3 == 0xffffffff,uVar3 + 1);
  }
  lVar1 = (ulonglong)uVar2 * (uVar6 & 0xffffffff);
  uVar4 = (uint)lVar1;
  iVar5 = uVar2 * (int)(uVar6 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20);
LAB_0100b2bc:
  return uVar4 >> 10 | iVar5 << 0x16;
}

