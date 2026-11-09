
int FUN_0100c788(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  uint unaff_r9;
  int unaff_r10;
  
  for (iVar2 = *(int *)(DAT_0100d2e8 + 0x1c);
      (iVar1 = *(int *)(unaff_r5 + 0xc), iVar2 <= (int)(*(uint *)(unaff_r10 + 0x20) & 0xff) &&
      (iVar1 = iVar2, *(byte *)(*(int *)(unaff_r5 + 0xc) + iVar2) != unaff_r9)); iVar2 = iVar2 + 1)
  {
  }
  return iVar1;
}

