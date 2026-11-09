
void FUN_0103668c(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = DAT_01036724;
  DAT_01036724[2] = 0x20000000;
  *puVar1 = 0x20000000;
  puVar1[5] = puVar1[5] | 0x20000000;
  puVar1[6] = puVar1[6] | 0x20000000;
  FUN_01002880(0x2c);
  FUN_010028fc(0x2c,6);
  FUN_01002896(0x2c,unaff_r7);
  return;
}

