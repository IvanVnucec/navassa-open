
uint FUN_01011668(int param_1)

{
  uint uVar1;
  
  FUN_0100d7b8(param_1,0xc0);
  *(undefined4 *)(param_1 + 0x60) = 0x40000000;
  *(undefined2 *)(param_1 + 0xc0) = 0x30;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  uVar1 = FUN_010115f2(param_1);
  return uVar1 & 1;
}

