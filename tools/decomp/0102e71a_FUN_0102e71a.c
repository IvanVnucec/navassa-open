
void FUN_0102e71a(int param_1)

{
  FUN_01017246();
  FUN_0101727c(param_1);
  if (param_1 == 0) {
    *DAT_01017504 = *DAT_01017504 & 0xf8;
    return;
  }
  DAT_01017504[1] = DAT_01017504[1] & 0xf8;
  return;
}

