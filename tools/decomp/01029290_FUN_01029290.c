
undefined4 FUN_01029290(void)

{
  undefined4 in_r3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  do {
    FUN_010028ac((int)(short)(&DAT_010293bc)[uVar1 * 2]);
    uVar2 = uVar1 + 1;
    FUN_010028ac((int)(short)(&DAT_010293be)[uVar1 * 2]);
    uVar1 = uVar2;
  } while (uVar2 < 2);
  return in_r3;
}

