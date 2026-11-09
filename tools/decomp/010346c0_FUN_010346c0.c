
undefined4 FUN_010346c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_0101edc0(*(undefined4 *)(param_2 + 0x28));
  uVar1 = FUN_0103474c();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_0101edc0(*(undefined4 *)(param_2 + 0x20));
  uVar1 = FUN_0103474c();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  FUN_0101edc0(*(undefined4 *)(param_2 + 0x24));
  uVar1 = FUN_0103474c();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_0101edc0(*(undefined4 *)(param_2 + 0x1c));
  uVar1 = FUN_0103474c();
  *(undefined4 *)(param_1 + 8) = uVar1;
  return param_4;
}

