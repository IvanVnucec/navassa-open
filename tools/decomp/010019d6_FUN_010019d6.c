
void FUN_010019d6(void)

{
  *(uint *)(DAT_01002518 + 0x2c) = *(uint *)(DAT_01002518 + 0x2c) | 1;
  pin_update(DAT_010025b0,1,1);
  return;
}

