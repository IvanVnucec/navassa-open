
void FUN_01009b44(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = DAT_0100a1c0;
  iVar1 = DAT_01009ebc;
  uVar3 = 0;
  do {
    *(undefined1 *)(*(int *)(iVar1 + uVar3 * 4) + 0x3a) = *puVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 5);
  return;
}

