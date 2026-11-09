
void FUN_0103dee0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    pin_update(DAT_0103df0c,0x1f);
    uVar1 = DAT_0103df10;
  }
  else {
    pin_update(DAT_0103df14,0x1f);
    uVar1 = DAT_0103df18;
  }
  pin_update(uVar1,0x1f,param_2);
  return;
}

