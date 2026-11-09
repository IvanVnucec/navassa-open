
undefined4 FUN_0102b2b0(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[0xe];
  if (param_1[0x10] != 0) {
    if (param_3 == 0) {
      FUN_0101204c(param_1[1]);
      uVar1 = param_1[1];
      param_1[1] = param_1[0x10] + uVar1;
      if (param_1[2] <= param_1[0x10] + uVar1) {
        param_1[1] = *param_1;
      }
    }
    else {
      FUN_0101204c(param_1[3]);
      uVar1 = param_1[3] + -param_1[0x10];
      param_1[3] = uVar1;
      if (uVar1 < *param_1) {
        param_1[3] = -param_1[0x10] + param_1[2];
      }
      if ((param_3 == 2) && (uVar2 != 0)) {
        uVar2 = uVar2 - 1;
      }
    }
  }
  param_1[0xe] = uVar2 + 1;
  return 0;
}

