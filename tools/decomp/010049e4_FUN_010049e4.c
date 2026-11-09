
void FUN_010049e4(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = DAT_010050d0;
  iVar6 = DAT_010050cc;
  if (*(char *)(DAT_010050d0 + 0x77d) == '\x01') {
    uVar5 = 0x1e;
  }
  else if (*(char *)(DAT_010050cc + 0x20) == '\x01') {
    uVar5 = 0x1f;
  }
  else {
    uVar5 = 1;
  }
  iVar4 = FUN_01004b64(param_1,param_2,uVar5);
  uVar2 = (uint)*DAT_010054f8 & 1 << (param_1 & 0xff);
  if (uVar2 != 0) {
    FUN_01010e02(param_1,1,1);
  }
  cVar1 = *(char *)(iVar3 + 0x77d);
  bVar7 = cVar1 != '\x01';
  if (bVar7) {
    cVar1 = *(char *)(iVar6 + 0x20);
  }
  if (bVar7 && cVar1 != '\x01') {
    iVar6 = *(int *)(param_2 + 0x20) * 0x250 + DAT_010052c8 + param_1 * 0xde0 + iVar4 * 0x6f0;
  }
  else {
    iVar6 = DAT_010054f4 + param_1 * 0x3450 + iVar4 * 0x1b0 + *(int *)(param_2 + 0x20) * 0x90;
  }
  FUN_01004ca2(param_1,0,iVar6,uVar2 != 0,uVar2 != 0);
  return;
}

