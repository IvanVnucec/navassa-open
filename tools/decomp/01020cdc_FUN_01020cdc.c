
int FUN_01020cdc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 < 2) {
    FUN_01020be6();
    FUN_01020bb4(param_1,1);
    iVar1 = FUN_01020dc4(param_1,param_2 * 1000);
    if (iVar1 == 0) {
      iVar1 = FUN_01020c14(param_1,param_3);
    }
    FUN_01020bb4(param_1,0);
  }
  else {
    iVar1 = 0x6100;
  }
  return iVar1;
}

