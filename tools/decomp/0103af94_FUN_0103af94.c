
undefined4 FUN_0103af94(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(char *)(DAT_0103b4bc + param_1 + 2) == '\x01') &&
     (sVar1 = *(short *)(DAT_0103b4bc + param_1 * 2 + 0x10), sVar1 == 2 || sVar1 == 1)) {
    uVar2 = 1;
  }
  return uVar2;
}

