
undefined4 FUN_010169a8(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = *(int *)(DAT_01016e40 + param_1 * 4);
  if (param_1 < 2) {
    pin_update(iVar3 + 0xd7,1,1);
    FUN_0102e828(param_1,param_2);
    pin_update(*(int *)(DAT_01016e54 + param_1 * 4) + 0xc,2,2);
    FUN_01016c26(param_1);
    FUN_0102e964(param_1);
    FUN_01016a46(DAT_01016e44);
    FUN_01009650();
    if (param_1 == 0) {
      uVar1 = 0x40;
    }
    else {
      uVar1 = 0x80;
    }
    pin_update(DAT_01016e48,uVar1,0);
    FUN_01016b00();
    pin_update(iVar3 + 0x1a9,1,0);
    pin_update(iVar3 + 0x3c,1,0);
    FUN_0102e71a(param_1,param_2);
  }
  else {
    uVar2 = 0xe701;
  }
  return uVar2;
}

