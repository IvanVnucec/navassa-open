
void FUN_0101735a(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 != 1);
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar2 = uVar2 << 1;
    uVar1 = 2;
  }
  pin_update(DAT_01017508,uVar1,uVar2);
  return;
}

