
void FUN_01006034(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_01006380;
  if (0xf < param_1) {
    puVar1 = DAT_01006380 + 1;
  }
  *puVar1 = *puVar1 & ~(1 << ((param_1 & 0xf) << 1));
  return;
}

