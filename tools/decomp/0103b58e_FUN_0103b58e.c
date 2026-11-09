
undefined8 FUN_0103b58e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 0;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_01020c14(0,&uStack_18,DAT_0103b604,*DAT_0103b604);
  FUN_01020a78(uStack_14,0);
  if (*DAT_0103b608 != '\0') {
    FUN_01020bb4(0,0);
  }
  if ((*DAT_0103b60c != '\0') && (DAT_0103b60c[1] == '\0')) {
    fVar1 = (float)VectorUnsignedToFloat((uint)(byte)DAT_0103b60c[9],(byte)(in_fpscr >> 0x15) & 3);
    FUN_0102d79e(fVar1 + *(float *)(DAT_0103b610 + 8),0);
    FUN_0102d748(0);
  }
  return CONCAT44(uStack_14,uStack_18);
}

