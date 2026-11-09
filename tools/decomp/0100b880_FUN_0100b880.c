
uint FUN_0100b880(uint param_1,int param_2,byte param_3)

{
  return param_1 & 0x1ff |
         ((byte)~param_3 & 0xf) << 0xc | ((byte)~param_3 & 0xf0) << 0x14 | param_2 << 0x10;
}

