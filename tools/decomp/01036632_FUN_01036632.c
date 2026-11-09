
undefined4 FUN_01036632(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xff;
  if ((DAT_01036678[1] <= param_2) && ((DAT_01036678[1] < param_2 || (*DAT_01036678 <= param_1)))) {
    if ((param_2 <= DAT_01036678[3]) &&
       ((param_2 < DAT_01036678[3] || (param_1 <= DAT_01036678[2])))) {
      uVar1 = 0;
    }
  }
  if ((DAT_01036678[5] <= param_2) && ((DAT_01036678[5] < param_2 || (DAT_01036678[4] <= param_1))))
  {
    if ((param_2 <= DAT_01036678[7]) &&
       ((param_2 < DAT_01036678[7] || (param_1 <= DAT_01036678[6])))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

