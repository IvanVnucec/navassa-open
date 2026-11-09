
void FUN_01003dea(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  
  iVar4 = DAT_010044c4;
  iVar6 = DAT_010044c0;
  iVar3 = DAT_010044b0;
  iVar2 = DAT_010044a4;
  cVar1 = *(char *)(DAT_010044b4 + 0x77d);
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = *(char *)(DAT_010044b8 + 0x20);
  }
  iVar7 = DAT_010044a4 + param_1 * 0x10;
  iVar8 = DAT_010044b0 + param_1 * 0x10;
  iVar10 = DAT_010044ac + param_1 * 0x10;
  if (bVar11 && cVar1 == '\0') {
    if (param_1 != 0) {
      *(int *)(iVar10 + 0xc) = DAT_010044c4 + 0x58;
      *(int *)(iVar8 + 0xc) = iVar4 + 0x68;
      iVar6 = iVar4 + 0x80;
      goto LAB_01003e66;
    }
    *(int *)(DAT_010044ac + 0xc) = DAT_010044c4;
    *(int *)(iVar3 + 0xc) = iVar4 + 0x10;
    iVar6 = iVar4 + 0x28;
  }
  else {
    if (param_1 != 0) {
      *(int *)(iVar10 + 0xc) = DAT_010044c0 + 0x1600;
      *(int *)(iVar8 + 0xc) = iVar6 + 0x1a00;
      iVar6 = iVar6 + 0x2000;
LAB_01003e66:
      *(int *)(iVar7 + 0xc) = iVar6;
      goto LAB_01003e68;
    }
    *(int *)(DAT_010044ac + 0xc) = DAT_010044c0;
    *(int *)(iVar3 + 0xc) = iVar6 + 0x400;
    iVar6 = iVar6 + 0xa00;
  }
  *(int *)(iVar2 + 0xc) = iVar6;
LAB_01003e68:
  *(undefined1 *)(iVar10 + 9) = 1;
  *(undefined1 *)(iVar10 + 8) = 0x40;
  *(undefined1 *)(iVar10 + 4) = 0;
  *(undefined1 *)(iVar10 + 5) = 0;
  *(undefined1 *)(iVar10 + 7) = 2;
  *(undefined1 *)(iVar8 + 8) = 0x40;
  *(undefined1 *)(iVar8 + 9) = 1;
  *(undefined1 *)(iVar8 + 7) = 3;
  bVar5 = 0;
  do {
    uVar9 = (uint)bVar5;
    bVar5 = bVar5 + 1;
    *(undefined1 *)(uVar9 + iVar8 + 4) = 0;
  } while (bVar5 < 3);
  *(undefined1 *)(iVar7 + 8) = 0x40;
  *(undefined1 *)(iVar7 + 9) = 3;
  *(undefined1 *)(iVar7 + 7) = 2;
  *(undefined1 *)(iVar7 + 4) = 0;
  *(undefined1 *)(iVar7 + 5) = 0;
  *(undefined1 *)(iVar7 + 6) = 1;
  return;
}

