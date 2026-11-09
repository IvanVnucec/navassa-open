
void FUN_0101424e(void)

{
  uint *puVar1;
  
  puVar1 = DAT_0101455c;
  if (*(char *)(DAT_01014558 + 0x10) == '\0') {
    DAT_0101455c[1] = DAT_0101455c[1] & DAT_01014560;
    FUN_01013aac(0xb,0);
    FUN_01013aac(10,0);
    *puVar1 = *puVar1 | 0x303;
    FUN_01013aac(8,1);
    FUN_01013aac(9,1);
    FUN_01015e2c(200);
  }
  else {
    *DAT_0101455c = *DAT_0101455c & DAT_01014564;
    FUN_01013aac(9,0);
    FUN_01013aac(8,0);
    puVar1[1] = puVar1[1] | 0xc03;
    FUN_01013aac(10,1);
    FUN_01013aac(0xb,1);
  }
  FUN_01015e2c(200);
  return;
}

