
void FUN_0101eb9e(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  char unaff_r4;
  undefined1 *unaff_r7;
  
  *unaff_r7 = 1;
  if (unaff_r4 == '\x05') {
    unaff_r7[3] = 2;
    unaff_r7[7] = 0;
    unaff_r7[8] = 1;
    unaff_r7[2] = 1;
    *param_3 = 1;
    uVar1 = 2;
  }
  else {
    if (unaff_r4 == '\x06') {
      unaff_r7[4] = 1;
      param_3[2] = 1;
      unaff_r7[1] = 1;
      return;
    }
    if (unaff_r4 != '\a') {
      if (unaff_r4 == '\0') {
        *unaff_r7 = 0;
      }
      return;
    }
    uVar1 = 0;
    unaff_r7[4] = 0;
    *param_5 = 1;
  }
  unaff_r7[1] = uVar1;
  return;
}

