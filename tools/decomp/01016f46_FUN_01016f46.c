
uint FUN_01016f46(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 << 0x1f < 0) {
    uVar1 = ((uint)*DAT_010174c8 << 0x1a) >> 0x1f;
  }
  if (param_1 << 0x1e < 0) {
    uVar1 = uVar1 | ((uint)*DAT_010174c8 << 0x1b) >> 0x1f;
  }
  return uVar1 ^ 1;
}

