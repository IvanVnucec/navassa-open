
undefined4 FUN_0103155c(float param_1)

{
  if ((int)((uint)(param_1 < 2.5) << 0x1f) < 0) {
    return 0xe;
  }
  if ((int)((uint)(param_1 < 7.5) << 0x1f) < 0) {
    return 0xc;
  }
  if ((int)((uint)(param_1 < 12.5) << 0x1f) < 0) {
    return 10;
  }
  if ((int)((uint)(param_1 < DAT_01031630) << 0x1f) < 0) {
    return 8;
  }
  if ((int)((uint)(param_1 < DAT_01031634) << 0x1f) < 0) {
    return 6;
  }
  if ((int)((uint)(param_1 < DAT_01031638) << 0x1f) < 0) {
    return 4;
  }
  return 2;
}

