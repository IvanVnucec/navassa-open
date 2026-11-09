
undefined4 FUN_01031dea(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  iVar2 = FUN_01006cb8(0,uVar1);
  uVar5 = FUN_01006dfc(1,0,uVar1);
  iVar3 = DAT_010320b8 + iVar2;
  uVar4 = 0;
  if (*(char *)(iVar3 + 5) == '\0') {
    FUN_01008f08(iVar2,*(undefined1 *)(iVar3 + 0xbc));
    uVar4 = FUN_01009784((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),iVar2,
                         *(undefined1 *)(iVar3 + 0xbc));
  }
  else {
    *(undefined8 *)(DAT_01032750 + iVar2 * 0x60) = uVar5;
  }
  return uVar4;
}

