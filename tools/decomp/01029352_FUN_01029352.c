
void FUN_01029352(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_01029370;
  uVar2 = 1 << (param_1 & 0xff);
  if ((*DAT_01029370 & uVar2) == 0) {
    *DAT_01029370 = *DAT_01029370 | uVar2;
    puVar1[1] = uVar2 | puVar1[1];
  }
  return;
}

