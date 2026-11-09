
/* WARNING: Removing unreachable block (ram,0x01038716) */

float FUN_01038854(float param_1)

{
  int iVar1;
  uint in_r3;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  fVar2 = param_1 * DAT_01038810;
  if ((int)((uint)(ABS(fVar2) < DAT_01038814) << 0x1f) < 0) {
    uVar3 = (uint)(fVar2 + (float)((uint)fVar2 & 0x80000000 | 0x3f000000));
    if (uVar3 != 0) {
      fVar2 = (float)VectorSignedFixedToFloat(uVar3,0x20,0xe);
      param_1 = ((((param_1 - fVar2 * DAT_01038818) - fVar2 * DAT_0103881c) - fVar2 * DAT_01038820)
                - fVar2 * DAT_01038824) - fVar2 * DAT_01038828;
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
      return param_1;
    }
    fVar2 = fVar2 + (float)((uint)fVar2 & 0x80000000 | 0x3f000000);
    if ((int)fVar2 << 1 != 0) {
      iVar1 = -((uint)((int)fVar2 << 1) >> 0x18);
      uVar3 = iVar1 + 0x96;
      if (0x17 < (int)uVar3) {
        fVar2 = (float)((uint)fVar2 & 0x80000000);
      }
      if (iVar1 + 0x7e < 0 != SBORROW4(uVar3,0x18)) {
        if (0 < (int)uVar3) {
          in_r3 = (uint)fVar2 >> (uVar3 & 0xff);
        }
        if (iVar1 + 0x95 < 0 == SBORROW4(uVar3,1)) {
          fVar2 = (float)(in_r3 << (uVar3 & 0xff));
        }
      }
    }
    if (ABS(fVar2) != 0.0) {
      fVar4 = fVar2 * DAT_01038830;
      param_1 = ((((param_1 - fVar4 * DAT_01038818) - fVar4 * DAT_0103881c) - fVar4 * DAT_01038820)
                - fVar4 * DAT_01038824) - fVar4 * DAT_01038828;
    }
    uVar3 = (uint)fVar2;
  }
  if ((int)((uint)(ABS(param_1) < DAT_01038834) << 0x1f) < 0) {
    if ((uVar3 & 1) != 0) {
      param_1 = 1.0;
    }
  }
  else {
    fVar2 = param_1 * param_1;
    if ((uVar3 & 1) == 0) {
      param_1 = param_1 + param_1 * fVar2 *
                          (DAT_0103884c + (DAT_01038848 + fVar2 * DAT_01038844) * fVar2);
    }
    else {
      param_1 = (DAT_01038840 + (DAT_0103883c + fVar2 * DAT_01038838) * fVar2) * fVar2 + 1.0;
    }
  }
  if ((int)(uVar3 << 0x1e) < 0) {
    param_1 = -param_1;
  }
  return param_1;
}

