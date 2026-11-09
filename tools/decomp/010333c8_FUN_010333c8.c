
undefined8 FUN_010333c8(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if ((param_1 & 0xc0) == 0xc0) {
      uVar1 = param_1 << 5 & 0x7e0 | 0x800;
    }
    else {
      uVar1 = param_1 << 4 & 0x3f0;
      if ((param_1 & 0xc0) == 0x80) {
        uVar1 = uVar1 | 0x400;
      }
      else if ((param_1 & 0xe0) == 0x60) {
        uVar1 = uVar1 | 0x200;
      }
      else if ((param_1 & 0xe0) == 0x40) {
        uVar1 = param_1 << 3 & 0xf8 | 0x100;
      }
      else {
        uVar1 = param_1 << 2 & 0xfc;
      }
    }
    return CONCAT44(uVar1 >> 8,uVar1 << 0x18);
  }
  if (param_2 == 1) {
    if ((param_1 & 0x180) == 0x180) {
      uVar1 = param_1 << 5 & 0xfe0 | 0x1000;
    }
    else {
      uVar1 = param_1 << 4 & 0x7f0;
      if ((param_1 & 0x180) == 0x100) {
        uVar1 = uVar1 | 0x800;
      }
      else if ((param_1 & 0x1c0) == 0xc0) {
        uVar1 = uVar1 | 0x400;
      }
      else if ((param_1 & 0x1c0) == 0x80) {
        uVar1 = param_1 << 3 & 0x1f8 | 0x200;
      }
      else {
        uVar1 = param_1 << 2 & 0x1fc;
      }
    }
    return CONCAT44(uVar1 >> 9,uVar1 << 0x17);
  }
  return 0;
}

