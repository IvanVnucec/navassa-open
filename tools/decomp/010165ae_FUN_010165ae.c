
undefined8 FUN_010165ae(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (param_1 < 2) {
    FUN_0102e6fe(param_1);
    piVar1 = DAT_01016e34;
    if (*(byte *)(*DAT_01016e34 + 0x10) < 2) {
      FUN_01009518(*(undefined4 *)(DAT_01016e44 + param_1 * 4 + 0x4c),0,param_1,1);
    }
    FUN_01016a54(param_1,*(undefined1 *)(piVar1[param_1] + 0x2e));
    FUN_0102e940(param_1);
    FUN_0102e81c(param_1,param_2);
    FUN_0101672a();
    FUN_01016720();
    FUN_01016732();
    uVar3 = FUN_0102f3e4(param_1,0);
    FUN_010168c8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1);
    uVar3 = FUN_01016662(piVar1[param_1],extraout_r1,*(undefined1 *)(piVar1[param_1] + 0x2e));
    FUN_010168be((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
    FUN_0100fdb8(param_1);
    FUN_0101673c();
    *(undefined1 *)(piVar1[param_1] + 0x2f) = *(undefined1 *)(piVar1[param_1] + 0x2e);
  }
  else {
    uVar2 = 0xe701;
  }
  return CONCAT44(param_4,uVar2);
}

