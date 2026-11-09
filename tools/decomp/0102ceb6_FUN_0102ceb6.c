
void FUN_0102ceb6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar1 = DAT_0102cff8;
  iVar4 = 0;
  do {
    iVar3 = DAT_0102d004;
    iVar2 = DAT_0102d000;
    puVar5 = (undefined1 *)(iVar4 * 3 + iVar1);
    *puVar5 = *(undefined1 *)(DAT_0102cffc + iVar4);
    puVar6 = (undefined1 *)(iVar3 + iVar4);
    puVar5[1] = *(undefined1 *)(iVar2 + iVar4);
    iVar4 = iVar4 + 1;
    puVar5[2] = *puVar6;
  } while (iVar4 < 0xe);
  *(undefined2 *)(iVar1 + 0x2c) = *DAT_0102d008;
  return;
}

