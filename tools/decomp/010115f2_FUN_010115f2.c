
undefined4 FUN_010115f2(void)

{
  int iVar1;
  
  iVar1 = FUN_01011628();
  FUN_0100d7b8(iVar1,0x4c);
  FUN_0100d7b8(iVar1 + 0x80,0x4c);
  *(undefined4 *)(iVar1 + 0xa4) = 0x40000000;
  return 1;
}

