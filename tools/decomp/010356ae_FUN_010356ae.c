
void FUN_010356ae(byte param_1,uint param_2)

{
  pin_update(*(int *)(DAT_010358f4 + (uint)param_1 * 4) + 0xac,0x10,(param_2 & 0xf) << 4);
  return;
}

