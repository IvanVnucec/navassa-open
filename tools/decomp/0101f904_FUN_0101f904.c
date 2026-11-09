
void FUN_0101f904(undefined4 param_1,int param_2,uint param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  if (1 < param_3) {
    uVar2 = param_3;
    if (param_2 == 5) {
      uVar2 = 2;
    }
    uVar1 = (undefined1)uVar2;
    if (param_2 == 5) {
LAB_0101f984:
      param_5[1] = uVar1;
    }
    else {
      if (param_2 == 6) {
        uVar1 = 1;
        goto LAB_0101f984;
      }
      if (param_2 == 7) {
        uVar1 = 0;
        goto LAB_0101f984;
      }
    }
    *param_5 = 1;
    param_5[3] = 0;
    param_5[4] = 0;
    if (param_3 == 4 || param_3 == 5) {
      param_5[2] = 0;
      param_5[5] = 1;
    }
    else {
      if (param_3 == 2 || param_3 == 3) {
        param_5[2] = 1;
      }
      if (param_3 == 2 || param_3 == 3) {
        param_5[5] = 0;
      }
    }
    param_5[0x40] = 1;
    goto LAB_0101f9ae;
  }
  if (param_2 == 1 || param_2 == 2) {
    uVar1 = 4;
LAB_0101f946:
    uVar3 = 1;
LAB_0101f948:
    param_4[3] = uVar1;
    param_4[6] = uVar3;
LAB_0101f94c:
    param_5[1] = uVar1;
  }
  else {
    if (param_2 == 3 || param_2 == 4) {
      uVar1 = 3;
      goto LAB_0101f946;
    }
    if (param_2 == 5) {
      uVar1 = 2;
      uVar3 = 0;
      goto LAB_0101f948;
    }
    if (param_2 == 6) {
      uVar1 = 1;
      param_4[3] = 1;
      param_4[6] = 1;
      goto LAB_0101f94c;
    }
    if (param_2 == 7) {
      uVar1 = 0;
      goto LAB_0101f946;
    }
  }
  *param_4 = 1;
  FUN_0101c9d0(param_4,param_1);
  *param_5 = 1;
  param_5[3] = 1;
  param_5[4] = 1;
  param_5[2] = 0;
  param_5[5] = 1;
  param_5[0x40] = 1;
LAB_0101f9ae:
  FUN_0101cb40(param_5,param_1,param_4);
  return;
}

