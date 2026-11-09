
void FUN_0103c680(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = heap_block_probe();
  *DAT_0103cd94 = iVar2 + 500;
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      iVar4 = iVar2 * 0x4c0 + param_1 + iVar3 * 0x18;
      bVar1 = *(byte *)(iVar4 + 0x2f);
      if (6 < bVar1) {
        *(byte *)(iVar4 + 0x2f) = bVar1 - 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x12);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}

