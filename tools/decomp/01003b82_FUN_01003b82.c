
int FUN_01003b82(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_22c [4];
  undefined1 auStack_228 [12];
  undefined1 auStack_21c [20];
  undefined1 auStack_208 [488];
  undefined4 uStack_20;
  
  iVar6 = 0;
  cVar1 = *(char *)(DAT_010044b4 + 0x77d);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(DAT_010044b8 + 0x20);
  }
  if ((bVar7 && cVar1 == '\0') && (*(int *)(param_2 + 0x10) != 0)) {
    return 0;
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    return 0;
  }
  uStack_20 = param_4;
  FUN_0100f12c(0x10,&LAB_01004500,0x10,auStack_21c);
  FUN_0100f232(2,&LAB_010044f8,2,auStack_228);
  iVar3 = DAT_010044b0;
  iVar2 = DAT_010044ac;
  iVar5 = DAT_010044a4;
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == 0) {
    if (1 < *(uint *)(param_2 + 0x20)) goto LAB_01003c5a;
    FUN_01004376(2);
    iVar6 = FUN_01003cd6(param_2,iVar2);
    if (iVar6 != 0) goto LAB_01003c5a;
    iVar6 = iVar2 + 0x20;
    iVar5 = iVar2;
  }
  else if (iVar4 == 3 || iVar4 == 1) {
    iVar6 = FUN_01003c7c();
    if (iVar6 != 0) goto LAB_01003c5a;
    iVar6 = iVar2 + 0x118;
    iVar5 = iVar3;
  }
  else {
    if ((iVar4 != 2) || (iVar6 = FUN_01003c7c(), iVar6 != 0)) goto LAB_01003c5a;
    iVar6 = iVar2 + 0x210;
  }
  iVar6 = FUN_01003d1a(param_2,iVar6,auStack_208,iVar5,auStack_22c);
LAB_01003c5a:
  FUN_0100f1b6(0x10,&LAB_01004500,0x10,auStack_21c);
  FUN_0100f26e(2,&LAB_010044f8,2,auStack_228);
  return iVar6;
}

