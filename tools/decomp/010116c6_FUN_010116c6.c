
uint FUN_010116c6(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)DAT_01011a3c[1];
  }
  else if (param_2 == 2) {
    uVar1 = (uint)DAT_01011a3c[3];
  }
  else if (param_2 < 2) {
    uVar1 = (uint)DAT_01011a3c[2];
  }
  else {
    uVar1 = (uint)*DAT_01011a3c;
  }
  if (param_1 == 0) {
    return uVar1 & 3;
  }
  return (uVar1 << 0x1c) >> 0x1e;
}

