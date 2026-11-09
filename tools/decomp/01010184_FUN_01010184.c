
int FUN_01010184(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint unaff_r4;
  int unaff_r5;
  
  if (param_5 == 1) {
    iVar1 = param_4;
    FUN_0100fe6a();
    FUN_0100fe96(param_3,param_4,param_2);
    FUN_01002842(unaff_r5 + 0xfd);
    *(undefined1 *)(unaff_r5 + 0x105) = (char)(1 << (unaff_r4 & 0xff));
    *(undefined1 *)(unaff_r5 + 0x105) = 0;
    return iVar1;
  }
  FUN_0100ffa4(param_3,param_4,param_1);
  iVar1 = DAT_0100ffc8 + param_3 * 0x10;
  **(undefined4 **)(iVar1 + (char)param_4 * 4 + 0x20) = param_2;
  return iVar1;
}

