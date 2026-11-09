
void FUN_01034920(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_r3;
  
  iVar2 = DAT_01034c28;
  puVar1 = DAT_01034c24;
  uVar4 = 0;
  *(undefined1 *)(DAT_01034c24 + 2) = 0;
  *puVar1 = 0;
  uVar3 = 0;
  do {
    if ((int)((0xfU >> *(sbyte *)(*(int *)(iVar2 + uVar4 * 4) + 0x10)) << 0x1f) < 0) {
      uVar3 = uVar3 | 1 << (uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  if ((uVar3 & 0xff) != 0) {
    FUN_01002880(0xed);
    FUN_010028fc(0xed,6);
    FUN_01002896(0xed,in_r3);
    return;
  }
  FUN_010028ac(0xed,in_r3);
  return;
}

