
undefined8 FUN_0101681c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (param_1 < 2) {
    FUN_010168be(DAT_01016e40,param_2,1);
    FUN_0102e828(param_1,param_2);
    piVar1 = DAT_01016e34;
    FUN_01016664(DAT_01016e34[param_1],1,*(undefined1 *)(DAT_01016e34[param_1] + 0x2f));
    FUN_01016b9e(param_1,*(undefined1 *)(piVar1[param_1] + 0x2f));
    FUN_0102e964(param_1);
    if (*(byte *)(*piVar1 + 0x10) < 2) {
      FUN_01009650(*(undefined4 *)(DAT_01016e44 + param_1 * 4 + 0x4c),0,param_1,1);
    }
    if (param_1 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x80;
    }
    pin_update(DAT_01016e48,uVar2,0);
    uVar4 = FUN_010168d2();
    uVar4 = FUN_010168d4((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
    FUN_010168c8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
    FUN_0102e71a(param_1,param_2);
  }
  else {
    uVar3 = 0xe701;
  }
  return CONCAT44(param_4,uVar3);
}

