
void FUN_0101093a(int param_1,uint param_2)

{
  pin_update(*(int *)(DAT_01010e40 + param_1 * 4) + 0x163,0xc,(param_2 & 0x3f) << 2);
  return;
}

