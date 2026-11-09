
undefined8 FUN_0103b592(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_01020c14(1,&uStack_18,DAT_0103b604,*DAT_0103b604);
  FUN_01020a78(uStack_14,1);
  if (*DAT_0103b608 != '\0') {
    FUN_01020bb4(1,0);
  }
  if ((*(char *)(DAT_0103b60c + 0xb) != '\0') && (*(char *)(DAT_0103b60c + 0xc) == '\0')) {
    fVar1 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(DAT_0103b60c + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    FUN_0102d79e(fVar1 + *(float *)(DAT_0103b610 + 0x18),1);
    FUN_0102d748(1);
  }
  return CONCAT44(uStack_14,uStack_18);
}

