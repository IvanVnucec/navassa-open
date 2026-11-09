
int FUN_01035414(byte param_1,int param_2,int param_3,int param_4)

{
  pin_update(*(int *)(DAT_010358f4 + (uint)param_1 * 4) + 0xa2,0x3c,
             (param_2 << 2 | param_3 << 3 | param_4 << 5) & 0xff);
  return param_4;
}

