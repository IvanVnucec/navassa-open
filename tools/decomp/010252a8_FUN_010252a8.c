
void FUN_010252a8(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = DAT_01025474;
  DAT_01025474[7] = 0x800000;
  *puVar1 = 0x800000;
  puVar1[10] = puVar1[10] | 0x800000;
  puVar1[0xb] = puVar1[0xb] & 0xff7fffff;
  FUN_01002880(0x3a);
  FUN_010028fc(0x3a,6);
  FUN_01002896(0x3a,unaff_r7);
  return;
}

