
void FUN_01025262(void)

{
  undefined4 *puVar1;
  undefined4 unaff_r7;
  
  puVar1 = DAT_01025470;
  DAT_01025470[5] = 0x2000000;
  *puVar1 = 0x2000000;
  puVar1[8] = puVar1[8] | 0x2000000;
  puVar1[9] = puVar1[9] & 0xfdffffff;
  FUN_01002880(0x3c);
  FUN_010028fc(0x3c,6);
  FUN_01002896(0x3c,unaff_r7);
  return;
}

