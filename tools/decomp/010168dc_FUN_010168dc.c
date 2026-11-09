
undefined4 FUN_010168dc(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = *(int *)(DAT_01016e40 + param_1 * 4);
  if (param_1 < 2) {
    pin_update(iVar4 + 0xd7,1,1);
    FUN_0102e828(param_1,param_3);
    iVar1 = DAT_01016e34;
    FUN_01016b0a(param_1,1,*(undefined1 *)(*(int *)(DAT_01016e34 + param_1 * 4) + 0x30));
    FUN_01016b9e(param_1,*(undefined1 *)(*(int *)(iVar1 + param_1 * 4) + 0x30));
    FUN_0102e964(param_1);
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
    FUN_01009650(uVar2,param_2,param_1,1);
    if (param_1 == 0) {
      uVar2 = 0x40;
    }
    else {
      uVar2 = 0x80;
    }
    pin_update(DAT_01016e48,uVar2,0);
    FUN_010169a0();
    FUN_010169a0();
    pin_update(iVar4 + 0x3c,1,0);
    FUN_0102e71a(param_1,param_3);
  }
  else {
    uVar3 = 0xe701;
  }
  return uVar3;
}

