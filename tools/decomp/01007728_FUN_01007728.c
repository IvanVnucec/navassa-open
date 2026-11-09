
void FUN_01007728(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_010076ee(param_1,param_3);
  if (param_1 == 2) {
    if (param_2 == 0) {
      uVar2 = param_3 << 0x19;
      uVar1 = 2;
    }
    else {
      uVar2 = param_3 << 0x1a;
      uVar1 = 4;
    }
    pin_update(DAT_01007f84,uVar1,uVar2 >> 0x18);
    return;
  }
  return;
}

