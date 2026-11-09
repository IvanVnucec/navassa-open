
void FUN_01031650(uint param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)(param_2 << 4);
  if (-1 < (int)param_1) {
    *(undefined1 *)(DAT_010320b0 + param_1) = uVar1;
    return;
  }
  *(undefined1 *)((param_1 & 0xf) + DAT_010320b4 + -4) = uVar1;
  return;
}

