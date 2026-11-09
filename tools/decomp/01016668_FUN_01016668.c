
undefined4 FUN_01016668(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 < 2) {
    FUN_0102e6fe(param_1,param_3);
    iVar1 = DAT_01016e44 + param_1 * 4;
    if (param_2 == 1) {
      uVar2 = *(undefined4 *)(iVar1 + 0x54);
    }
    else {
      if (param_2 != 3) {
        return 0xe700;
      }
      uVar2 = *(undefined4 *)(iVar1 + 100);
    }
    FUN_01009518(uVar2,param_2,param_1,1);
    iVar1 = DAT_01016e34;
    FUN_01016a54(param_1,*(undefined1 *)(*(int *)(DAT_01016e34 + param_1 * 4) + 0x30));
    FUN_0102e940(param_1);
    FUN_0102e81c(param_1,param_3);
    FUN_0101672a();
    FUN_01016720();
    FUN_01016732();
    FUN_0102f3e4(param_1,param_2);
    FUN_01016804();
    iVar1 = *(int *)(iVar1 + param_1 * 4);
    FUN_01016662(iVar1,extraout_r1,*(undefined1 *)(iVar1 + 0x30));
    FUN_01016810();
    FUN_0100fdb8(param_1);
    FUN_0101673c();
  }
  else {
    uVar3 = 0xe701;
  }
  return uVar3;
}

