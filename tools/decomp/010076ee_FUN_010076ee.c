
void FUN_010076ee(uint param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = param_2 << 3 & 0xff;
    uVar2 = 8;
    uVar1 = DAT_01007f78;
  }
  else if (param_1 == 2) {
    if (param_2 != 0) {
      return;
    }
    uVar3 = 0;
    uVar2 = 4;
    uVar1 = DAT_01007f80;
  }
  else {
    if (1 < param_1) {
      return;
    }
    uVar3 = param_2 << 3 & 0xff;
    uVar2 = 8;
    uVar1 = DAT_01007f7c;
  }
  pin_update(uVar1,uVar2,uVar3);
  return;
}

