
uint FUN_010117d2(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0101175c(param_2,param_1);
  uVar2 = ((iVar1 << 1) / *(int *)(DAT_01011a48 + param_1 * 0x54 + 0xe8) + -1) * 0x60;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  return uVar2 & 0xffff;
}

