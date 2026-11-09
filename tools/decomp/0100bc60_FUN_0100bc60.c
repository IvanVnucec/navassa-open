
void FUN_0100bc60(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  pin_update(*(int *)(DAT_0100bcd8 + param_1 * 4) + 0x4a,0x10,uVar1);
  return;
}

