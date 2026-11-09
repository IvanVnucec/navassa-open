
ulonglong FUN_010170b4(short param_1)

{
  undefined4 unaff_r7;
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorSignedToFloat((int)(short)(param_1 + -0x80),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = (float)FUN_0101ee64(fVar1 / DAT_010172c0 + DAT_010172c4 + DAT_010172c8);
  return CONCAT44(unaff_r7,(int)fVar1) & 0xffffffff000000ff;
}

