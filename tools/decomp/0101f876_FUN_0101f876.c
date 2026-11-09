
undefined4 FUN_0101f876(uint param_1,byte *param_2)

{
  if ((param_1 & 0xc) == 0) {
    return 0;
  }
  *param_2 = (byte)(param_1 >> 2) & 1;
  param_2[1] = (byte)(param_1 >> 3) & 1;
  return 1;
}

