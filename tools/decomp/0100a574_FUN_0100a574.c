
void FUN_0100a574(int param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = 0;
  uVar2 = 0x40;
  do {
    uVar1 = FUN_0100a54a(param_1,uVar3);
    uVar1 = uVar1 & 0x3f;
    if ((uVar1 != uVar2) &&
       (*(ushort *)(DAT_0100a7a0 + param_1 * 0x80 + uVar1 * 2) = uVar3, uVar1 == 0x3f)) break;
    uVar3 = uVar3 + 1;
    uVar2 = uVar1;
  } while (uVar3 < 0x348);
  *(undefined1 *)(DAT_0100a798 + param_1) = 1;
  return;
}

