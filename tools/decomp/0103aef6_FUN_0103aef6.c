
undefined4 FUN_0103aef6(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      puVar3 = (undefined1 *)(iVar1 * 0x30 + DAT_0103b4b8 + iVar2 * 0x18);
      *puVar3 = 0;
      puVar3[0x10] = 0;
      *(undefined4 *)(puVar3 + 8) = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0;
      iVar2 = iVar2 + 1;
      puVar3[0x11] = 0;
    } while (iVar2 < 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}

