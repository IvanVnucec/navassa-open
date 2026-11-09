
undefined4
FUN_0101affa(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  nmi_signal_helper(param_2);
  iVar1 = param_7[0xc];
  nmi_signal_helper(1);
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_7 + uVar3 + 0x34) = *(undefined1 *)(param_2 + uVar3);
    if (*(char *)(param_2 + uVar3) == '\0') break;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  *(undefined1 *)((int)param_7 + 0x43) = 0;
  if (5 < param_5) {
    param_5 = 5;
  }
  param_7[0xb] = param_5;
  FUN_01035932(param_7 + 1);
  param_7[10] = 0;
  param_7[4] = param_7;
  param_7[6] = 6 - param_5;
  param_7[9] = param_7;
  param_7[0x11] = 0;
  param_7[0x12] = 0;
  param_7[0x13] = 0;
  *(undefined1 *)(param_7 + 0x14) = 0;
  uVar2 = FUN_0102be68((iVar1 + param_3 * 4) - 4U & 0xfffffff8,param_1,param_4);
  *param_7 = uVar2;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_7;
  }
  return param_4;
}

