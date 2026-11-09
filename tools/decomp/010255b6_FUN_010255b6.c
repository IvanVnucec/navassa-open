
undefined4
FUN_010255b6(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  uint local_28;
  uint uStack_18;
  
  bVar2 = param_3 < 3;
  if (bVar2) {
    param_3 = param_5;
  }
  if (bVar2 && param_3 < 3) {
    uVar1 = param_2;
    if (param_4 < 0x40) {
      uVar1 = param_6;
    }
    if (param_4 < 0x40 && uVar1 < 0x40) {
      if (*(char *)(DAT_0102595c + 0x77d) == '\0') {
        uStack_18 = param_4;
        auStack_38[param_2] = 0;
        local_2b = 0;
        local_2c = (undefined1)uVar1;
        local_30 = 3;
        local_28 = param_3;
        FUN_010256e8();
        FUN_010256d4();
        FUN_010256de();
        FUN_01025502(3,1 << (param_2 & 0xff),DAT_01025960);
      }
      return 0;
    }
  }
  return 0x3101;
}

