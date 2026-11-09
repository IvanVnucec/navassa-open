
undefined4 FUN_0100de44(uint param_1,byte *param_2)

{
  param_1 = param_1 & 0xc;
  if (param_1 == 0) {
    return 0;
  }
  *param_2 = (byte)(param_1 >> 2) & 1;
  param_2[1] = (byte)(param_1 >> 3);
  return 1;
}

