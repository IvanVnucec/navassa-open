
undefined4 FUN_0101814e(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  
  if (param_1 == 1) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 2) {
      return 0xe701;
    }
    iVar1 = 4;
  }
  iVar1 = *(int *)(DAT_010181d4 + iVar1);
  *param_4 = *(undefined1 *)(iVar1 + 0x1e5);
  param_4[1] = *(undefined1 *)(iVar1 + 0x1de);
  param_4[2] = *(undefined1 *)(iVar1 + 0x1dd);
  return 0;
}

