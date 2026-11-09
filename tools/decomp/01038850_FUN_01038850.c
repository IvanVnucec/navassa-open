
float FUN_01038850(float param_1)

{
  int iVar1;
  uint uVar2;
  uint in_r3;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  fVar3 = param_1 * DAT_01038810;
  if ((int)((uint)(ABS(fVar3) < DAT_01038814) << 0x1f) < 0) {
    uVar4 = (uint)(fVar3 + (float)((uint)fVar3 & 0x80000000 | 0x3f000000));
    if (uVar4 != 0) {
      fVar3 = (float)VectorSignedFixedToFloat(uVar4,0x20,0xe);
      param_1 = ((((param_1 - fVar3 * DAT_01038818) - fVar3 * DAT_0103881c) - fVar3 * DAT_01038820)
                - fVar3 * DAT_01038824) - fVar3 * DAT_01038828;
    }
  }
  else {
    if (((int)param_1 << 1) >> 0x18 == -1) {
      if ((((int)param_1 << 1) >> 0x18 == -1) && (((uint)param_1 & 0x7fffff) != 0)) {
        return param_1;
      }
      return DAT_0103882c;
    }
    if (ABS(param_1) == 0.0) {
      return 1.0;
    }
    fVar3 = fVar3 + (float)((uint)fVar3 & 0x80000000 | 0x3f000000);
    if ((int)fVar3 << 1 != 0) {
      iVar1 = -((uint)((int)fVar3 << 1) >> 0x18);
      uVar4 = iVar1 + 0x96;
      if (0x17 < (int)uVar4) {
        fVar3 = (float)((uint)fVar3 & 0x80000000);
      }
      if (iVar1 + 0x7e < 0 != SBORROW4(uVar4,0x18)) {
        if (0 < (int)uVar4) {
          in_r3 = (uint)fVar3 >> (uVar4 & 0xff);
        }
        if (iVar1 + 0x95 < 0 == SBORROW4(uVar4,1)) {
          fVar3 = (float)(in_r3 << (uVar4 & 0xff));
        }
      }
    }
    if (ABS(fVar3) != 0.0) {
      fVar5 = fVar3 * DAT_01038830;
      param_1 = ((((param_1 - fVar5 * DAT_01038818) - fVar5 * DAT_0103881c) - fVar5 * DAT_01038820)
                - fVar5 * DAT_01038824) - fVar5 * DAT_01038828;
    }
    uVar4 = (uint)fVar3;
  }
  uVar4 = (uVar4 & 3) + 1;
  uVar2 = uVar4 & 1;
  if ((int)((uint)(ABS(param_1) < DAT_01038834) << 0x1f) < 0) {
    if (uVar2 != 0) {
      param_1 = 1.0;
    }
  }
  else {
    fVar3 = param_1 * param_1;
    if (uVar2 == 0) {
      param_1 = param_1 + param_1 * fVar3 *
                          (DAT_0103884c + (DAT_01038848 + fVar3 * DAT_01038844) * fVar3);
    }
    else {
      param_1 = (DAT_01038840 + (DAT_0103883c + fVar3 * DAT_01038838) * fVar3) * fVar3 + 1.0;
    }
  }
  if ((int)(uVar4 * 0x40000000) < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

