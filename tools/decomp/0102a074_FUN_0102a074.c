
longlong FUN_0102a074(void)

{
  int unaff_r5;
  uint in_fpscr;
  float fVar1;
  uint uVar2;
  float unaff_s16;
  
  fVar1 = (float)VectorUnsignedToFloat(*(undefined4 *)(unaff_r5 + 4),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned((unaff_s16 * fVar1) / DAT_0102a2bc,3);
  return (ulonglong)uVar2 << 0x20;
}

