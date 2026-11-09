
void FUN_01035096(int param_1,int param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(DAT_01035244 + param_1 * 4);
  puVar2 = (undefined1 *)(iVar3 + 0xe);
  uVar4 = 0;
  do {
    bVar1 = (byte)uVar4 & 0x3f;
    *(byte *)(iVar3 + 0x10) = bVar1 | *(byte *)(iVar3 + 0x10) & 0xc0;
    *(undefined1 *)(iVar3 + 0xf) = *(undefined1 *)(param_2 + uVar4);
    *puVar2 = 2;
    *puVar2 = 0;
    *(byte *)(iVar3 + 0x13) = bVar1 | *(byte *)(iVar3 + 0x13) & 0xc0;
    iVar5 = param_2 + uVar4;
    uVar4 = uVar4 + 1;
    *(undefined1 *)(iVar3 + 0x12) = *(undefined1 *)(iVar5 + 0x40);
    *puVar2 = 1;
    *puVar2 = 0;
  } while (uVar4 < 0x40);
  return;
}

