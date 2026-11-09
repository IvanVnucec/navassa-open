
void FUN_01038ce6(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  uVar1 = DAT_01038de4;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else if (param_1 == 1) {
    FUN_01038d22();
    uVar2 = extraout_r1;
  }
  else {
    uVar2 = DAT_01038de8;
    if (param_1 != 3) {
      if (param_1 != 4) {
        return;
      }
      uVar2 = 0x1a00;
    }
  }
  FUN_01038c6a(uVar1,uVar2);
  return;
}

