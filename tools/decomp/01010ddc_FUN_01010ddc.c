
void FUN_01010ddc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01010e2c;
  if (param_1 != 0) {
    uVar1 = DAT_01010e34;
  }
  FUN_010027dc(uVar1,0x10,0x10);
  FUN_010027dc(uVar1,0x20,(uint)(param_2 << 0x1d) >> 0x18,param_4);
  return;
}

