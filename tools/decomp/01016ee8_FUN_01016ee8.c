
undefined4 FUN_01016ee8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = DAT_010174c8;
  if (param_1 << 0x1f < 0) {
    FUN_01017086(param_1,0x20,0x20);
  }
  if (param_1 << 0x1e < 0) {
    uVar1 = pin_update(uVar1,0x10,0x10,param_4);
    return uVar1;
  }
  return param_4;
}

