
void FUN_0101cd66(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  pin_update(*(int *)(DAT_0101cf24 + param_2 * 4) + 0x53,4,uVar1);
  return;
}

