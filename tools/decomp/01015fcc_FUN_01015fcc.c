
void FUN_01015fcc(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = DAT_010160f8;
  DAT_010160f8[8] = 0xe000;
  *puVar1 = 0xe000;
  puVar1[0xb] = puVar1[0xb] & 0xffff1fff;
  puVar1[0xc] = puVar1[0xc] & 0xffff1fff;
  FUN_01002880(0x26);
  FUN_010028fc(0x26,6);
  FUN_01002896(0x26,unaff_r7);
  return;
}

