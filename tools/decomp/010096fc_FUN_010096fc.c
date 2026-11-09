
int FUN_010096fc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_01008628(param_3,param_4,*(undefined1 *)(DAT_0100a02c + param_5),DAT_0100a02c,param_1,
                       param_2,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = 0xc906;
  }
  else {
    iVar1 = FUN_01008664(param_1,param_2,param_3);
    if (iVar1 == 0) {
      *(undefined1 *)(param_3 * 0x60 + DAT_01009ee4 + 0x5a) = 0;
      iVar1 = FUN_010091fc(param_3,0,param_1,param_2,1,0,0);
    }
  }
  return iVar1;
}

