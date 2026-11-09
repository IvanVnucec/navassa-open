
uint FUN_0100607e(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_01006380;
  if (0xf < param_1) {
    puVar1 = DAT_01006380 + 1;
  }
  return *puVar1 >> (param_1 & 0xf) * 2 + 1 & 7;
}

