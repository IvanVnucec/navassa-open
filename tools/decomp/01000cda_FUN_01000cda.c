
void FUN_01000cda(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_010018e0;
  iVar3 = DAT_01001748 + (uint)*(byte *)(DAT_0100174c + 3) * 4;
  FUN_01000c16(1,*(undefined4 *)(iVar3 + 0xc),DAT_010018e0);
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar2 = *(uint *)(iVar3 + 0x3c) & ~*(uint *)(iVar1 + 0x18);
  *(uint *)(iVar3 + 0x3c) = uVar2;
  *(uint *)(iVar3 + 0x3c) = uVar2 | *(uint *)(iVar1 + 0x18);
  if ((int)((uint)*(byte *)(iVar1 + 0x2c) << 0x1d) < 0) {
    return;
  }
  *(undefined4 *)(DAT_01000fe8 + 0x1c) = 0x40;
  return;
}

