
void FUN_01022c2e(uint param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5)

{
  FUN_0102598c(*(undefined4 *)(DAT_01022db4 + param_1 * 4),DAT_01022dbc,
               (param_2 & 1) << 0x10 | (param_1 & 1) << 0x12 | (param_1 & 1) << 0x13 |
               (param_4 & 1) << 0xc | param_5 & 7,param_4);
  return;
}

