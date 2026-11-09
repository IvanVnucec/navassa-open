
uint FUN_0100533c(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  
  if (param_3 == 3 || param_3 == 1) {
    param_2 = param_2 >> 1;
    if (7 < param_2) {
      return 0;
    }
    if (param_2 == 0) {
      return 6;
    }
    return 7 - param_2 & 0xff;
  }
  if (param_3 == 2) {
    pbVar1 = (byte *)(DAT_01005504 + param_1 * 3);
    if (param_2 == *pbVar1) {
      return 0;
    }
    if (param_2 == pbVar1[1]) {
      return 1;
    }
    if (param_2 == pbVar1[2]) {
      param_2 = 2;
    }
  }
  return param_2;
}

