
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01005fd6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  periph_init_b(0);
  _DAT_4900000c = 0;
  _DAT_49000010 = 0;
  periph_init_e(1);
  _DAT_49000000 = 0;
  FUN_010028fc(1,6);
  *(undefined4 *)(DAT_0100637c + 0xc) = param_1;
  FUN_01002896(1,param_4);
  return;
}

