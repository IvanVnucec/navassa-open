
void FUN_0101fa08(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 2) {
    uVar1 = 1;
  }
  else {
    if (3 < param_2 - 2) {
      return;
    }
    uVar1 = 2;
  }
  pin_update(*(int *)(DAT_0101ff68 + param_1 * 4) + 0x1a9,uVar1,0);
  return;
}

