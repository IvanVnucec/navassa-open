
undefined4
FUN_010163a2(int param_1,uint param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  uVar1 = *(undefined1 *)(*(int *)(DAT_01016e30 + param_1 * 8 + param_2 * 4) + 0x12);
  uVar2 = 0;
  if (param_2 < 2) {
    if (param_1 == 0 || param_1 == 4) {
      if (*(char *)(DAT_01016e38 + 0x20) == '\0') {
        FUN_010164c0();
      }
      else {
        FUN_010164c0();
        FUN_0101649e();
        FUN_01016c72(param_2);
        FUN_010164c0();
      }
      FUN_010164ac();
    }
    else if (param_1 == 1 || param_1 == 3) {
      FUN_01016d20(param_2,param_4,param_5,param_6,param_7,
                   *(undefined1 *)(*(int *)(DAT_01016e34 + param_2 * 4) + 0x30));
      FUN_010164ac();
      FUN_01016cc4(param_2,param_3,0,2,uVar1);
    }
    else if (param_1 == 2) {
      FUN_01016df4(param_2,param_4,param_6,param_7);
      FUN_0101649e();
      FUN_01016cda(param_2,extraout_r1,0);
    }
    else {
      uVar2 = 0xe700;
    }
  }
  else {
    uVar2 = 0xe701;
  }
  return uVar2;
}

