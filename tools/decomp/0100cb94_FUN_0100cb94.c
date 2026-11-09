
undefined4 FUN_0100cb94(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 0x1e);
  uVar3 = DAT_0100d290;
  if (((cVar1 != '\x01') && (uVar3 = DAT_0100d298, cVar1 != '\x02')) && (uVar3 = 0, cVar1 == '\x04')
     ) {
    uVar3 = DAT_0100d294;
  }
  uVar2 = uVar3;
  if ((param_2 != 0) && (uVar2 = 0, param_2 == 1)) {
    cVar1 = *(char *)(param_1 + 0x16);
    bVar4 = cVar1 != '\x01';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x18);
    }
    if (!bVar4 || cVar1 == '\x01') {
      return DAT_0100d290;
    }
    cVar1 = *(char *)(param_1 + 0x14);
    bVar4 = cVar1 != '\x01';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x15);
    }
    bVar5 = cVar1 != '\x01';
    if (bVar4 && bVar5) {
      cVar1 = *(char *)(param_1 + 0x17);
    }
    uVar2 = uVar3;
    if ((!bVar4 || !bVar5) || cVar1 == '\x01') {
      return DAT_0100d29c;
    }
  }
  return uVar2;
}

