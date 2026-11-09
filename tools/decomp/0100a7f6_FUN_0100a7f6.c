
int FUN_0100a7f6(int param_1,uint param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < param_4) {
    iVar1 = 0x8f01;
  }
  if (param_2 < param_4 + param_3) {
    iVar1 = 0x8f02;
  }
  else if (iVar1 == 0) {
    FUN_0101204c(param_5,param_1 + param_3,param_4);
  }
  return iVar1;
}

