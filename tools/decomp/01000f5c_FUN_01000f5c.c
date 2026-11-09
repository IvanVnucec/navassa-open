
void FUN_01000f5c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = DAT_010018e0;
  iVar3 = DAT_01001748 + (uint)*DAT_0100174c * 4;
  if (*DAT_010011f0 == '\0') {
    FUN_01000d70();
  }
  else {
    FUN_01000ecc(0,*(undefined4 *)(iVar3 + 0xc),DAT_010018e0,(uint)*DAT_0100174c);
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  uVar2 = *(uint *)(iVar3 + 0x3c) & ~*(uint *)(iVar1 + 0xc);
  *(uint *)(iVar3 + 0x3c) = uVar2;
  *(uint *)(iVar3 + 0x3c) = uVar2 | *(uint *)(iVar1 + 0xc);
  return;
}

