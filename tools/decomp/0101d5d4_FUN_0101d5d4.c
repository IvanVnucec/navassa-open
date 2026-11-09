
undefined4 FUN_0101d5d4(void)

{
  uint *puVar1;
  undefined4 in_r3;
  uint uVar2;
  short unaff_r5;
  uint unaff_r7;
  uint uVar3;
  undefined4 unaff_r9;
  
  puVar1 = DAT_0101d870;
  uVar3 = ((uint)*(ushort *)(DAT_0101d86c + 0x22) << 0x1c) >> 0x1e;
  if (uVar3 != 0) {
    uVar2 = 0;
    do {
      if ((int)((uVar3 >> (uVar2 & 0xff)) << 0x1f) < 0) {
        if (uVar2 == 0) {
          unaff_r7 = 0x80000000;
LAB_0101d602:
          unaff_r5 = 0x36;
          unaff_r9 = 6;
        }
        else if (uVar2 == 1) {
          unaff_r7 = 0x10000000;
          goto LAB_0101d602;
        }
        puVar1[0xb] = unaff_r7;
        *puVar1 = *puVar1 | unaff_r7;
        puVar1[0xe] = puVar1[0xe] | unaff_r7;
        puVar1[0xf] = puVar1[0xf] & ~unaff_r7;
        FUN_01002880((int)unaff_r5);
        FUN_010028fc((int)unaff_r5,unaff_r9);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 2);
  }
  return in_r3;
}

