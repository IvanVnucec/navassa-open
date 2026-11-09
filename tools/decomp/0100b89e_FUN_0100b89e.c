
uint FUN_0100b89e(uint param_1,int param_2,uint param_3)

{
  return param_1 & 0xfffff | param_2 << 0x1c | (param_3 & 1) << 0x1d | 0x40000000;
}

