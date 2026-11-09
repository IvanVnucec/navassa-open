
undefined1 FUN_01004f4c(uint param_1)

{
  undefined1 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  param_1 = param_1 >> 1;
  if (param_1 < 8) {
    bVar2 = param_1 != 0;
    if (bVar2) {
      param_1 = 7 - param_1;
    }
    uVar1 = (undefined1)param_1;
    if (!bVar2) {
      uVar1 = 6;
    }
  }
  return uVar1;
}

