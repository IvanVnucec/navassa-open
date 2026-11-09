
undefined4 FUN_010258bc(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_3 == 0) || (param_3 == 2)) || (param_3 < 2)) {
    if ((param_2 == 0) && (param_1 < DAT_01025984)) {
      uVar1 = 0xc911;
    }
    else if ((param_2 != 0) && ((1 < param_2 || (DAT_01025988 <= param_1)))) {
      uVar1 = 0xc912;
    }
  }
  else {
    uVar1 = 0xc904;
  }
  return uVar1;
}

