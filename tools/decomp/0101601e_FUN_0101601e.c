
void FUN_0101601e(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_010160fc;
  if (param_1 < 3) {
    uVar2 = 1 << (param_1 + 0xd & 0xff);
    *DAT_010160fc = uVar2;
    uVar2 = ~uVar2;
    puVar1[3] = puVar1[3] & uVar2;
    puVar1[4] = uVar2 & puVar1[4];
  }
  return;
}

