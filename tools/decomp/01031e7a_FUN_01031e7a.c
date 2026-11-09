
void FUN_01031e7a(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = DAT_01032758;
    if (param_2 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar1 = DAT_0103275c;
    if (param_2 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
    }
  }
  pin_update(uVar1,4,uVar2);
  return;
}

