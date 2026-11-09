
int FUN_010114b8(float param_1)

{
  if (param_1 < 0.0 == NAN(param_1)) {
    param_1 = param_1 + DAT_01011748;
  }
  else {
    param_1 = param_1 + DAT_0101174c;
  }
  param_1 = param_1 * DAT_01011750;
  if (param_1 < DAT_01011754 != (NAN(param_1) || NAN(DAT_01011754))) {
    if (-1 < (int)((uint)(param_1 < DAT_01011758) << 0x1f)) {
      return (int)param_1;
    }
    return -0x80000000;
  }
  return 0x7fffffff;
}

