
int FUN_0102f85c(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  iVar3 = *(int *)(DAT_0102fbbc + 4);
  iVar1 = 0;
  if (param_1 == 0) {
    iVar5 = DAT_0102fbbc + 8;
  }
  else {
    if (param_1 != 1) {
      return 0x2901;
    }
    iVar5 = DAT_0102fbbc + 0xe0;
  }
  bVar4 = 0;
  while (((param_2 & 1 << (uint)bVar4) == 0 ||
         (iVar1 = FUN_0102f8c2(param_1,bVar4,iVar5), iVar1 == 0))) {
    bVar4 = bVar4 + 1;
    iVar5 = iVar5 + 0x36;
    if (3 < bVar4) {
      if (param_1 == 0) {
        cVar2 = *(char *)(iVar3 + 0x1a) + '\x01';
      }
      else {
        if (param_1 != 1) {
          return iVar1;
        }
        cVar2 = *(char *)(iVar3 + 0x1a) + '\x02';
      }
      *(char *)(iVar3 + 0x1a) = cVar2;
      return iVar1;
    }
  }
  return iVar1;
}

