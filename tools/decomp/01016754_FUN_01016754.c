
undefined4 FUN_01016754(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if (param_1 < 2) {
    FUN_0102e6fe(param_1);
    FUN_01016a46(DAT_01016e44);
    FUN_01009518();
    FUN_01016b42(param_1);
    FUN_0102e940(param_1);
    FUN_0102e81c(param_1,param_2);
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
    FUN_0101672a();
    FUN_0102f5d2(param_1,0,uVar2);
    FUN_01016732();
    FUN_0102f3e4(param_1,2);
    FUN_01016804();
    pin_update(*(int *)(DAT_01016e54 + param_1 * 4) + 0xc,2,0);
    FUN_01016810();
    FUN_0100fdb8(param_1);
    uVar2 = DAT_01016e50;
    if (param_1 == 0) {
      uVar2 = DAT_01016e4c;
    }
    pin_update(uVar2,0x40,0x40);
  }
  else {
    uVar1 = 0xe701;
  }
  return uVar1;
}

