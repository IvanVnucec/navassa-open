
void FUN_010113be(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 < 0) {
    param_1 = param_1 * -4;
    *param_3 = *(undefined4 *)(param_1 + 0x41001600);
    iVar1 = DAT_01011a1c;
  }
  else {
    param_1 = param_1 * 4;
    *param_3 = *(undefined4 *)(param_1 + 0x41001700);
    iVar1 = DAT_01011a20;
  }
  *param_2 = *(undefined4 *)(iVar1 + param_1);
  return;
}

