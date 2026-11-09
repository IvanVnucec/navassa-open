
void FUN_010292b2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 1 << (param_1 & 0xff);
  DAT_01029370[1] = uVar1 & *DAT_01029370 | DAT_01029370[1] & ~uVar1;
  return;
}

