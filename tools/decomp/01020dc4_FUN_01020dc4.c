
undefined4 FUN_01020dc4(int param_1,undefined4 param_2)

{
  uint in_fpscr;
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(DAT_01020f8c + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(fVar1 * fVar3 * DAT_01020f44,3);
  while( true ) {
    if (*DAT_01020f90 != '\0') {
      *DAT_01020f90 = '\0';
      return 0xe101;
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_01020f4c + param_1 * 4) + 0x189) << 0x1f) < 0) break;
    if (uVar2 <= (uint)(*DAT_01020f88 - *DAT_01020f88)) {
      return 0xe102;
    }
  }
  return 0;
}

