
undefined8 FUN_01004eea(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(DAT_010050d0 + 0x77d);
  uVar4 = 2;
  bVar5 = cVar1 != '\x01';
  if (bVar5) {
    cVar1 = *(char *)(DAT_010050cc + 0x20);
  }
  if (bVar5 && cVar1 != '\x01') {
    iVar3 = DAT_010050d8 + param_1 * 0xde0;
    iVar2 = 0x250;
  }
  else {
    iVar3 = DAT_010050d4 + param_1 * 0x3450 + param_2 * 0x1b0;
    uVar4 = 0x10;
    iVar2 = 0x90;
  }
  uVar6 = 1;
  FUN_01010b3e(param_1,iVar3 + iVar2 * *(int *)(DAT_01005448 + param_1 * 4 + 0x4c),
               *(undefined1 *)(DAT_01005444 + 0x10),*(undefined1 *)(DAT_01005444 + 0x11),uVar4,1,
               param_4);
  return CONCAT44(uVar6,uVar4);
}

