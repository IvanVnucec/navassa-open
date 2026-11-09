
undefined4 FUN_0100a506(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(short *)(DAT_0100a78c + param_1 * 2 + 4) != 0x7f) && (param_2 != 0)) {
    if (param_1 == 0) {
      uVar1 = 0x4108;
    }
    else if (param_1 == 1) {
      uVar1 = 0x4109;
    }
    return uVar1;
  }
  pin_update(*(int *)(DAT_0100a790 + param_1 * 4) + 0xdb,0x20,(uint)(param_2 << 0x1d) >> 0x18);
  return 0;
}

