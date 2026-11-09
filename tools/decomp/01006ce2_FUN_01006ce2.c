
undefined4 FUN_01006ce2(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_010071b0 + (uint)*(byte *)(DAT_010071ac + param_1) * 4;
  if (param_1 < 2) {
    return *(undefined4 *)(iVar1 + 0x2c);
  }
  return *(undefined4 *)(iVar1 + 0x34);
}

