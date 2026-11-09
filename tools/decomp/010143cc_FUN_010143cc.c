
undefined8 FUN_010143cc(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0xce03;
  if (0x12 < (int)param_1) {
    iVar4 = 0xce00;
    goto LAB_01014494;
  }
  iVar4 = 0xce03;
  if (2 < param_2) goto LAB_01014494;
  cVar1 = *(char *)(DAT_010144f0 + param_1);
  if (cVar1 == '\0') {
    if (((1 < param_1) && (param_1 != 0x12)) || (param_2 != 0)) goto LAB_0101440a;
  }
  else if (cVar1 == '\x04') {
    if (param_2 < 2) {
LAB_0101440a:
      iVar3 = 0;
    }
  }
  else if (param_2 == 0) goto LAB_0101440a;
  iVar4 = iVar3;
  if (iVar3 != 0) goto LAB_01014494;
  if (cVar1 == '\x04' && param_2 == 2) {
    param_2 = 1;
  }
  if (param_1 < 2) {
LAB_01014438:
    uVar2 = FUN_01014370(param_1,param_2);
    FUN_01013faa(param_1,uVar2);
    uVar2 = FUN_0101438c(param_1,param_2);
    FUN_0101402a(param_1,uVar2);
  }
  else if (param_1 - 2 < 3) {
LAB_0101445a:
    if ((int)param_1 < 0xd) {
      uVar2 = FUN_01014370(param_1,param_2);
      FUN_01013faa(param_1,uVar2);
      uVar2 = FUN_0101438c(param_1,param_2);
      FUN_0101402a(param_1,uVar2);
    }
    FUN_01013d72(param_1,0);
  }
  else {
    if (param_1 == 5) goto LAB_01014438;
    if (((param_1 - 6 < 2) || (param_1 == 0xd)) || (param_1 == 0xf)) goto LAB_0101445a;
    if (param_1 == 0x12) goto LAB_01014438;
  }
  FUN_01013aac(param_1,param_2 != 0);
LAB_01014494:
  return CONCAT44(param_4,iVar4);
}

