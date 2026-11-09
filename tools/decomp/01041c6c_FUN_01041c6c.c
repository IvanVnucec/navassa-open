
undefined4 FUN_01041c6c(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  
  puVar3 = DAT_01041cf4;
  if (*DAT_01041cf0 != '\0') {
    uVar4 = FUN_01041cfc(*DAT_01041cf0,DAT_01041cf0,(int)*(short *)(param_2 + 0x10),*DAT_01041cf4);
    FUN_01041cfe(uVar4,6,(int)*(short *)(param_2 + 0x12),*puVar3);
    cVar1 = *(char *)(DAT_01041cdc + 0x77d);
    bVar5 = cVar1 != '\x01';
    iVar2 = DAT_01041cdc;
    if (bVar5) {
      cVar1 = *(char *)(DAT_01041cf8 + 0x20);
      iVar2 = DAT_01041cf8;
    }
    if (!bVar5 || cVar1 == '\x01') {
      uVar4 = FUN_01041cfc(iVar2,cVar1,(int)*(short *)(param_2 + 0x10),1);
      FUN_01041cfe(uVar4,6,(int)*(short *)(param_2 + 0x12),1);
    }
  }
  FUN_01041d24(param_1,2,(int)*(short *)(param_2 + 0x10));
  FUN_01041d24(param_1,3,(int)*(short *)(param_2 + 0x12));
  return 0;
}

