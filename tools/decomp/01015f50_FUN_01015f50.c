
void FUN_01015f50(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  
  iVar1 = DAT_01015fc8;
  *(undefined1 *)(DAT_01015fc8 + 7) = 0;
  *(undefined2 *)(iVar1 + 2) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 4) = 0;
  FUN_01015ee8(0,iVar1);
  FUN_01015ee8(1,iVar1);
  uVar2 = DAT_01015fc4;
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(DAT_01015fc4 + 0x18);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(uVar2 + 0x1c);
  if (*(char *)(iVar1 + 2) == '\x01') {
    *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(uVar2 + 0x14);
    *(undefined1 *)(iVar1 + 0x14) = 0;
  }
  else if (*(char *)(iVar1 + 2) == '\x02') {
    *(char *)(iVar1 + 0x14) = (char)*(undefined2 *)(uVar2 + 0x14);
    *(undefined2 *)(iVar1 + 0x10) = 0;
  }
  if (*(char *)(iVar1 + 3) == '\x01') {
    *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(uVar2 + 0x16);
    *(undefined1 *)(iVar1 + 0x15) = 0;
  }
  else if (*(char *)(iVar1 + 3) == '\x02') {
    *(char *)(iVar1 + 0x15) = (char)*(undefined2 *)(uVar2 + 0x16);
    *(undefined2 *)(iVar1 + 0x12) = 0;
  }
  cVar3 = *(char *)(iVar1 + 7);
  bVar4 = cVar3 == '\x01';
  if (bVar4) {
    cVar3 = (char)*(undefined2 *)(uVar2 + 0x14);
  }
  if (bVar4) {
    *(char *)(iVar1 + 0x16) = cVar3;
  }
  bVar4 = *(char *)(iVar1 + 8) == '\x01';
  if (bVar4) {
    uVar2 = (uint)*(ushort *)(uVar2 + 0x16);
  }
  if (bVar4) {
    *(char *)(iVar1 + 0x17) = (char)uVar2;
  }
  return;
}

