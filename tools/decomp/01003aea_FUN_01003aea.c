
undefined4 FUN_01003aea(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_010044a8;
  iVar1 = DAT_010044a4;
  iVar3 = 0;
  do {
    iVar6 = DAT_010044b0;
    iVar4 = DAT_010044ac + iVar3 * 0x10;
    *(int *)(iVar2 + 4 + iVar3 * 4) = iVar4;
    iVar5 = iVar2 + iVar3 * 4;
    iVar6 = iVar6 + iVar3 * 0x10;
    *(int *)(iVar5 + 0x14) = iVar1 + iVar3 * 0x10;
    *(int *)(iVar5 + 0xc) = iVar6;
    *(int *)(iVar5 + 0x1c) = iVar6;
    *(int *)(iVar5 + 0x24) = iVar4;
    *(undefined1 *)(iVar2 + iVar3) = 0;
    *(undefined4 *)(iVar2 + 0x2c + iVar3 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x34 + iVar3 * 4) = 0;
    *(undefined4 *)(iVar2 + 0x3c + iVar3 * 4) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  FUN_01003c84(0,0);
  FUN_01003c84(1,0);
  return 0;
}

