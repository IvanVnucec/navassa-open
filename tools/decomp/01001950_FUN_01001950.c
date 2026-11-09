
uint FUN_01001950(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)*DAT_0100260c;
  uVar2 = 0;
  uVar4 = 1;
  if ((DAT_010024a8[1] < param_2) || ((DAT_010024a8[1] <= param_2 && (*DAT_010024a8 < param_1)))) {
    if ((param_2 < DAT_010024a8[uVar1 * 2 + -3]) ||
       (param_2 <= DAT_010024a8[uVar1 * 2 + -3] && param_1 <= DAT_010024a8[uVar1 * 2 + -4])) {
      uVar1 = uVar1 - 2;
      while (uVar4 <= uVar1) {
        uVar3 = uVar1 + uVar4 >> 1;
        uVar5 = (DAT_010024a8 + uVar3 * 2)[1];
        if ((uVar5 < param_2) || ((uVar5 <= param_2 && (DAT_010024a8[uVar3 * 2] < param_1)))) {
          uVar4 = uVar3 + 1;
          if (param_2 <= DAT_010024a8[uVar3 * 2 + 3]) {
            if (param_2 < DAT_010024a8[uVar3 * 2 + 3]) {
              return uVar4;
            }
            if (param_1 <= DAT_010024a8[uVar3 * 2 + 2]) {
              return uVar4;
            }
          }
        }
        else {
          if ((DAT_010024a8[uVar3 * 2 + -1] <= param_2) &&
             (DAT_010024a8[uVar3 * 2 + -1] < param_2 || DAT_010024a8[uVar3 * 2 + -2] < param_1)) {
            return uVar3;
          }
          uVar1 = uVar3 - 1;
        }
      }
    }
    else {
      uVar2 = uVar1 - 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

