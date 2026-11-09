
undefined4
FUN_01025622(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint unaff_r4;
  uint unaff_r6;
  uint local_68;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  uint local_28;
  uint uStack_18;
  uint uStack_14;
  
  if (param_3 < 3) {
    unaff_r6 = param_5;
  }
  if (param_3 < 3 && unaff_r6 < 3) {
    if (param_4 < 0x40) {
      unaff_r4 = param_6;
    }
    if (param_4 < 0x40 && unaff_r4 < 0x40) {
      if (*(char *)(DAT_0102595c + 0x77d) == '\0') {
        local_68 = (uint)*(byte *)(DAT_01025964 + param_2);
        uStack_18 = param_3;
        uStack_14 = param_4;
        FUN_010101bc(auStack_64,auStack_60,param_2,3);
        local_58 = 0;
        uStack_54 = 0;
        local_2c = (undefined1)unaff_r4;
        auStack_38[param_2] = 0;
        local_30 = 3;
        local_2b = 0;
        local_28 = unaff_r6;
        FUN_010040ce(param_2,&local_58,auStack_64,&local_68);
        FUN_01025502(1,1 << (param_2 & 0xff),DAT_01025958);
      }
      return 0;
    }
  }
  return 0x3101;
}

