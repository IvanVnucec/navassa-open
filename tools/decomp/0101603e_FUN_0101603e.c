
undefined4 FUN_0101603e(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 2) {
    iVar2 = *(int *)(DAT_01016100 + param_1 * 4) + 0x2a;
    pin_update(iVar2,0x40,(param_2 & 3) << 6);
    uVar1 = pin_update(iVar2,0x80,(param_2 << 0x1f) >> 0x18,param_4);
    return uVar1;
  }
  return param_4;
}

