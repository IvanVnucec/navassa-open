
undefined4 FUN_01015d2e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_01015e84;
  if (*(char *)(DAT_01015e84 + param_1 * 0xc) != '\x01') {
    FUN_01015d08();
  }
  *(undefined1 *)(iVar1 + param_1 * 0xc) = 0;
  return param_4;
}

