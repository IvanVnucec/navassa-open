
undefined4 FUN_010098b0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_0100a1a0 + param_1 * 4;
  uVar1 = *(undefined4 *)(iVar2 + 0x784);
  if ((param_1 < 2) && (*(char *)(param_1 * 0x60 + DAT_01009ee4 + 0x59) == '\x02')) {
    uVar1 = *(undefined4 *)(iVar2 + 0x798);
  }
  return uVar1;
}

