
float FUN_010259ec(float param_1,float param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((((((int)param_1 << 1) >> 0x18 == -1) || (ABS(param_1) == 0.0)) ||
      (((int)param_2 << 1) >> 0x18 == -1)) || (ABS(param_2) == 0.0)) {
    if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) != 0)) {
      return param_1;
    }
    if ((((int)param_2 << 1) >> 0x18 != -1) || (((uint)param_2 & 0x7fffff) == 0)) {
      if (((int)param_2 << 1 == 0) ||
         ((((int)param_2 << 1) >> 0x18 == -1 && (((uint)param_2 & 0x7fffff) == 0)))) {
        if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) == 0)) {
          return DAT_01025c48;
        }
      }
      else {
        if (ABS(param_1) != 0.0) {
          if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) == 0)) {
            return param_1 * param_2;
          }
          return (float)((uint)param_2 & 0x80000000);
        }
        uVar1 = (uint)ABS(param_2) >> 0x17;
        param_3 = param_3 + uVar1;
        if ((uVar1 == 0) || (param_3 < 1)) {
          if (ABS(param_2) != 0.0) {
            param_2 = (float)FUN_0103856c(param_2);
          }
        }
        else if (param_3 < 0xff) {
          param_2 = (float)((uint)param_2 & 0x807fffff | param_3 * 0x800000);
        }
        else {
          param_2 = (float)((uint)param_2 & 0x80000000 | 0x7f800000);
        }
      }
    }
    return param_2;
  }
  if (DAT_01025c44 <= param_1) {
    if (param_1 < DAT_01025c4c != (NAN(param_1) || NAN(DAT_01025c4c))) {
      iVar3 = (int)(param_1 * DAT_01025c50 +
                   (float)((uint)(param_1 * DAT_01025c50) & 0x80000000 | 0x3f000000));
      fVar4 = (float)VectorSignedToFloat(iVar3,(byte)((in_fpscr & 0xfffffff) >> 0x15) & 3);
      fVar4 = (param_1 - fVar4 * DAT_01025c54) - fVar4 * DAT_01025c58;
      iVar2 = (uint)(ABS(fVar4) < DAT_01025c5c) << 0x1f;
      if (iVar2 < 0) {
        fVar4 = param_2;
      }
      if (-1 < iVar2) {
        fVar5 = fVar4 * fVar4 * DAT_01025c64;
        fVar4 = (fVar4 * fVar4 * DAT_01025c60 + 0.5) * fVar4;
        fVar4 = ((fVar5 + fVar4 + 1.0) / ((fVar5 - fVar4) + 1.0)) * param_2;
      }
      uVar1 = (uint)ABS(fVar4) >> 0x17;
      iVar2 = param_3 + iVar3 + uVar1;
      if ((uVar1 != 0) && (0 < iVar2)) {
        if (0xfe < iVar2) {
          return (float)((uint)fVar4 & 0x80000000 | 0x7f800000);
        }
        return (float)((uint)fVar4 & 0x807fffff | iVar2 * 0x800000);
      }
      if (ABS(fVar4) == 0.0) {
        return fVar4;
      }
      fVar4 = (float)FUN_0103856c();
      return fVar4;
    }
    param_2 = (float)((uint)param_2 & 0x80000000 | 0x7f800000);
  }
  else {
    param_2 = (float)((uint)param_2 & 0x80000000);
  }
  return param_2;
}

