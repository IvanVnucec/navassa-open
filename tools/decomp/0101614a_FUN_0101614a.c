
uint FUN_0101614a(uint param_1)

{
  uint uVar1;
  
  uVar1 = -LZCOUNT(param_1) + 0x1f;
  if (((1 << (uVar1 & 0xff)) - 1U & param_1) != 0) {
    uVar1 = -LZCOUNT(param_1) + 0x20;
  }
  return uVar1;
}

