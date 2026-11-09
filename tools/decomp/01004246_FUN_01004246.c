
void FUN_01004246(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(DAT_010044b4 + 0x77d);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(DAT_010044b8 + 0x20);
  }
  if (!bVar3 || cVar1 != '\0') {
    iVar2 = DAT_010044a8 + param_1 * 4;
    *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar2 + 0x34);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x3c);
  }
  return;
}

