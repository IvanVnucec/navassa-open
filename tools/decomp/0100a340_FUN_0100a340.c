
undefined4 FUN_0100a340(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint unaff_r4;
  
  uVar1 = 0x8004;
  bVar2 = 0;
  do {
    if (*(byte *)(DAT_0100a3c4 + (uint)bVar2 * 0xc) == unaff_r4) {
      uVar1 = 0;
    }
    bVar2 = bVar2 + 1;
  } while (bVar2 < 4);
  return uVar1;
}

