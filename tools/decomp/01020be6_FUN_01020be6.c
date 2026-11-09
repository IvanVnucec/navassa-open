
undefined4 FUN_01020be6(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 2) {
    FUN_010027dc(*(int *)(DAT_01020f4c + param_1 * 4) + 0x185,0xf,1);
  }
  else {
    uVar1 = 0x6100;
  }
  return uVar1;
}

