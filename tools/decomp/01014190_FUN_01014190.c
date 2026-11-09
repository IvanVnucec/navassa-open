
undefined4 FUN_01014190(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(char *)(DAT_010144f0 + param_1) != '\x04') {
    return param_4;
  }
  iVar1 = FUN_01014370(param_1,0);
  iVar2 = FUN_0101438c(param_1,0);
  uVar4 = iVar1 + iVar2 * 8;
  if (param_1 == 3) {
LAB_010141d0:
    iVar1 = DAT_01014548;
    if (param_1 != 3) {
      iVar1 = DAT_0101454c;
    }
    uVar5 = FUN_01014242();
    FUN_01014246((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1,1);
    uVar3 = 0x1f;
    uVar4 = uVar4 & 0xff;
    iVar1 = iVar1 + 0x1e8;
  }
  else {
    if (param_1 != 4) {
      if (param_1 == 6) goto LAB_010141d0;
      if (param_1 != 7) {
        iVar1 = DAT_010143b4;
        if ((param_1 != 0xd) && (iVar1 = DAT_010143bc, param_1 != 0xf)) {
          return param_4;
        }
        FUN_01014248(iVar2,iVar1,2,2);
        uVar3 = 1;
        uVar4 = 1;
        goto LAB_01014234;
      }
    }
    iVar1 = DAT_01014550;
    if (param_1 != 4) {
      iVar1 = DAT_01014554;
    }
    uVar5 = FUN_01014242();
    FUN_01014246((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1,1);
    iVar1 = iVar1 + 0x1f1;
    uVar3 = 0x1f;
    uVar4 = uVar4 & 0xff;
  }
LAB_01014234:
  uVar3 = FUN_0100b704(param_2,iVar1,uVar4,uVar3);
  return uVar3;
}

