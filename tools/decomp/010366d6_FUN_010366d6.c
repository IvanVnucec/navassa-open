
void FUN_010366d6(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = DAT_0103672c;
  DAT_0103672c[1] = 0x40000000;
  *puVar1 = 0x40000000;
  puVar1[4] = puVar1[4] | 0x40000000;
  puVar1[5] = puVar1[5] | 0x40000000;
  FUN_01002880(0x2d);
  FUN_010028fc(0x2d,6);
  FUN_01002896(0x2d,unaff_r7);
  return;
}

