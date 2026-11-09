
void FUN_010097d0(int param_1)

{
  pin_update(*(int *)(DAT_01009ebc + param_1 * 4) + 0x2c,0xc,
             ((uint)*(byte *)(DAT_010097e8 + param_1) << 0x1a) >> 0x18);
  return;
}

