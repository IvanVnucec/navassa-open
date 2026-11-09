
void FUN_0101e106(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  undefined1 *puVar3;
  
  FUN_0101e0fc();
  iVar1 = DAT_0101e178;
  iVar2 = 0;
  puVar3 = (undefined1 *)(unaff_r4 + 0xda);
  do {
    *(undefined1 *)(iVar1 + iVar2) = *puVar3;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x14);
  restore_priority();
  return;
}

