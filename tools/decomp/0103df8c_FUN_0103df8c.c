
float FUN_0103df8c(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  uVar1 = -((int)param_1 >> 0x1f);
  fVar2 = (float)((int)param_1 * 2);
  fVar3 = (float)((int)param_2 * 2);
  if (((uint)param_2 & 0x80000000) != 0) {
    uVar1 = uVar1 + 0xc;
  }
  if ((uint)fVar2 < 0xff000000 && (uint)fVar3 < 0xff000000) {
    if ((uint)fVar3 < (uint)fVar2) {
      uVar1 = uVar1 ^ 4;
    }
    if (fVar3 != 0.0) {
      if ((uint)fVar3 < (uint)fVar2) {
        fVar3 = ABS(param_2) / ABS(param_1);
      }
      else {
        fVar3 = ABS(param_1) / ABS(param_2);
      }
    }
  }
  else {
    bVar4 = fVar2 == -1.7014118e+38;
    if (bVar4) {
      uVar1 = uVar1 ^ 4;
    }
    if ((uint)fVar2 < 0xff000001) {
      bVar4 = fVar3 == -1.7014118e+38;
      fVar2 = fVar3;
    }
    if (0xfeffffff < (uint)fVar2 && !bVar4) {
      return NAN;
    }
    if ((int)fVar3 + (int)param_1 * -2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = 0.0;
    }
  }
  if (0x3e8930a3 < (int)fVar3) {
    fVar3 = (DAT_0103d69c + DAT_0103d688 * fVar3) / (DAT_0103d688 + fVar3);
    uVar1 = uVar1 | 2;
  }
  if (0x72ffffff < (uint)((int)fVar3 * 2)) {
    fVar2 = fVar3 * fVar3;
    fVar3 = (fVar3 + fVar3 * fVar2 * DAT_0103d68c) /
            (DAT_0103d698 + (DAT_0103d694 + DAT_0103d690 * fVar2) * fVar2);
  }
  if ((uVar1 >> 1 & 2) != 0) {
    fVar3 = -fVar3;
  }
  fVar3 = fVar3 + *(float *)(&DAT_0103d6a0 + (uVar1 >> 1) * 4);
  if ((uVar1 & 1) != 0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}

