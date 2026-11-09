
void FUN_0103a4be(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0103a6a0;
  pin_update(DAT_0103a6a0,0x80,(param_2 & 1) << 7);
  pin_update(uVar1,1,param_1,param_4);
  return;
}

