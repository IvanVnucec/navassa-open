
undefined4 FUN_010354a6(byte param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f0 + (uint)param_1 * 4);
  pin_update(iVar1 + 0x1c,3,param_2);
  pin_update(iVar1 + 0x1d,3,param_3);
  return param_4;
}

