
undefined4 FUN_0102382c(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar4 = DAT_01023f20;
  uVar6 = 1;
  uVar3 = (uint)*(byte *)(param_1 + 100);
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 0x14) & 3;
    if (bVar2 == 1) {
      cVar1 = *(char *)(DAT_01023f20 + 0x10);
    }
    else {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          return 0;
        }
        bVar7 = *(char *)(DAT_01023f20 + 0x10) != '\x03';
        if (bVar7) {
          uVar4 = (uint)*(byte *)(DAT_01023f20 + 0x5c);
        }
        if (bVar7 && uVar4 != 3) {
          return 0;
        }
        return 1;
      }
      cVar1 = *(char *)(DAT_01023f20 + 0x5c);
    }
    if (cVar1 == '\x03') {
      return 1;
    }
  }
  else if (uVar3 == 1) {
    if (((*(uint *)(param_1 + 0x14) & 5) != 0) && (*(char *)(DAT_01023f20 + 0x27) == '\0')) {
      uVar6 = 0;
    }
    if ((*(uint *)(param_1 + 0x14) & 10) == 0) {
      return uVar6;
    }
    if (*(char *)(DAT_01023f20 + 0x73) != '\0') {
      return uVar6;
    }
  }
  else if (uVar3 - 2 < 4) {
    if (((*(byte *)(param_1 + 0x14) & 5) != 0) &&
       ((((*(char *)(DAT_01023f20 + 0x10) == '\x03' || (*(char *)(DAT_01023f20 + 0xa8) != '\x03'))
         || (iVar5 = FUN_01023268(*(undefined4 *)(param_1 + 0x68),0), iVar5 == 0)) ||
        (*(char *)(uVar4 + 0x27) != '\0')))) {
      uVar6 = 0;
    }
    uVar4 = DAT_01023f20;
    if ((*(byte *)(param_1 + 0x14) & 10) == 0) {
      return uVar6;
    }
    if (((*(char *)(DAT_01023f20 + 0x5c) != '\x03') && (*(char *)(DAT_01023f20 + 0xf4) == '\x03'))
       && ((iVar5 = FUN_01023268(*(undefined4 *)(param_1 + 0x68),1), iVar5 != 0 &&
           (*(char *)(uVar4 + 0x73) == '\0')))) {
      return uVar6;
    }
  }
  else if (uVar3 - 2 == 0xfd) {
    return 1;
  }
  return 0;
}

