
void FUN_010289a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_01028cf8;
  uVar2 = 0;
  iVar3 = DAT_01028cf8 + 0x18;
  do {
    *(uint *)(iVar1 + uVar2 * 4) = iVar3 + uVar2 * 0x10;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  return;
}

