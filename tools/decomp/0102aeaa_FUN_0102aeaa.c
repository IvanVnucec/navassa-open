
undefined4
FUN_0102aeaa(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  int unaff_r4;
  int *unaff_r5;
  
  if (param_2 == 0) {
    param_3 = param_5;
  }
  *param_5 = param_3;
  param_5[0xf] = param_1;
  param_5[0x10] = param_2;
  FUN_0102b062(param_5,1);
  task_enter_critical();
  iVar1 = *unaff_r5;
  unaff_r5[2] = unaff_r5[0x10] * unaff_r5[0xf] + iVar1;
  unaff_r5[0xe] = 0;
  unaff_r5[3] = (unaff_r5[0xf] + -1) * unaff_r5[0x10] + iVar1;
  unaff_r5[1] = iVar1;
  *(undefined1 *)(unaff_r5 + 0x11) = 0xff;
  *(undefined1 *)((int)unaff_r5 + 0x45) = 0xff;
  if (unaff_r4 == 0) {
    if ((unaff_r5[4] != 0) && (iVar1 = FUN_0102b190(), iVar1 != 0)) {
      *DAT_0102b3c4 = 0x10000000;
      FUN_0102b186();
    }
  }
  else {
    FUN_01035918(unaff_r5 + 4);
    FUN_01035918(unaff_r5 + 9);
  }
  FUN_0102bf96();
  return 1;
}

