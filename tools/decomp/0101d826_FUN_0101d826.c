
void FUN_0101d826(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      param_3 = 1;
    }
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    if (param_3 != 0) {
      param_3 = 2;
    }
    uVar1 = 2;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    if (param_3 == 0) {
      uVar1 = 4;
    }
    else {
      param_3 = 4;
      uVar1 = 4;
    }
  }
  FUN_0102598c(*(int *)(DAT_0101d868 + param_1 * 4) + 0x54,uVar1,param_3);
  return;
}

