
void FUN_0101cdb4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0;
  }
  pin_update(*(int *)(DAT_0101d5a4 + param_2 * 4) + 0x5a,0x10,uVar1);
  return;
}

