
void FUN_0102e682(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_0102e6ac;
  if (*DAT_0102e6ac == '\0') {
    cVar1 = *DAT_0102e6b0;
    *DAT_0102e6b0 = '\0';
    iVar3 = *(int *)(DAT_0102e6b4 + 0x14) * (uint)(byte)(cVar1 + 1);
    *(int *)(DAT_0102e6b4 + 0x14) = iVar3;
    *DAT_0102e6b8 = iVar3;
    FUN_0102c03c();
    *pcVar2 = '\x01';
  }
  return;
}

