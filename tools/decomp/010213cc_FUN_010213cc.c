
void FUN_010213cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(char *)(DAT_01021504 + 0x77d) == '\x01') && (*DAT_01021c74 < 2)) {
    uVar2 = 1;
  }
  if (param_1 == 0 || param_1 == 4) {
    FUN_01021306(0,param_1,0xff,param_2,DAT_01021f50,param_3,uVar2,param_4);
  }
  if (param_1 == 1) {
    uVar2 = FUN_01021462();
    uVar1 = 1;
  }
  else if (param_1 == 2) {
    uVar2 = FUN_01021464();
    FUN_01021306(uVar2,2);
    uVar2 = FUN_01021456();
    uVar1 = 2;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    uVar2 = FUN_01021462();
    FUN_01021306(uVar2,3);
    uVar2 = FUN_01021456();
    uVar1 = 3;
  }
  FUN_01021306(uVar2,uVar1);
  return;
}

