
void FUN_0102ceee(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar1 = DAT_0102cff8;
  iVar2 = 0;
  do {
    puVar3 = (undefined1 *)(iVar2 * 3 + iVar1);
    puVar4 = (undefined1 *)(DAT_0102d000 + iVar2);
    *(undefined1 *)(DAT_0102cffc + iVar2) = *puVar3;
    *puVar4 = puVar3[1];
    puVar4 = (undefined1 *)(DAT_0102d004 + iVar2);
    iVar2 = iVar2 + 1;
    *puVar4 = puVar3[2];
    puVar3 = DAT_0102d008;
  } while (iVar2 < 0xe);
  *DAT_0102d008 = (char)*(undefined2 *)(iVar1 + 0x2c);
  puVar3[1] = (char)((ushort)*(undefined2 *)(iVar1 + 0x2c) >> 8);
  return;
}

