
void FUN_01000fa0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_010018e0;
  iVar3 = DAT_01001748 + (uint)*(byte *)(DAT_0100174c + 1) * 4;
  if (*DAT_010011f0 == '\0') {
    FUN_01000d70(1);
  }
  else {
    FUN_01000ecc(1,*(undefined4 *)(iVar3 + 0xc),DAT_010018e0,(uint)*(byte *)(DAT_0100174c + 1));
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar2 = *(uint *)(iVar3 + 0x3c) & ~*(uint *)(iVar1 + 0x10);
  *(uint *)(iVar3 + 0x3c) = uVar2;
  *(uint *)(iVar3 + 0x3c) = uVar2 | *(uint *)(iVar1 + 0x10);
  return;
}

