
float FUN_01031468(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (1 < param_2 - 1U) {
    fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_1 * 0xbc + DAT_01031640 + 0x4a),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar1 * DAT_0103161c;
    if ((-1 < (int)((uint)(fVar1 < -25.0) << 0x1f)) &&
       (fVar1 < DAT_01031620 != (NAN(fVar1) || NAN(DAT_01031620)))) {
      return fVar1;
    }
  }
  return 5.0;
}

