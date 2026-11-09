
uint FUN_0100b8b4(uint param_1,uint param_2,uint param_3)

{
  return param_1 & 0xfffff | (param_3 & 1) << 0x1c | (param_2 & 1) << 0x1d | 0x80000000;
}

