
undefined4 FUN_01002b00(int param_1,int param_2)

{
  if (param_2 == 0) {
    if ((param_1 != 0) && (param_1 != 1)) {
      return 0xc201;
    }
  }
  else {
    if (2 < param_2) {
      return 0xc201;
    }
    if (param_1 != 2 && param_1 != 3) {
      return 0xc201;
    }
  }
  return 0;
}

