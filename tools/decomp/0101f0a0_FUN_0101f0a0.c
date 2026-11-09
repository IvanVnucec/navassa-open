
void FUN_0101f0a0(int param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int unaff_r4;
  int *piVar7;
  int iVar8;
  
  *param_3 = (char)param_2;
  param_3[1] = 2;
  iVar8 = DAT_0101f1e0;
  iVar6 = DAT_0101f1dc + param_2 * 4;
  if (param_2 == 0) {
    if (param_1 == 2) {
LAB_0101f0dc:
      unaff_r4 = *(int *)(*(int *)(iVar6 + 0x5c) * 0x60 + DAT_0101f1e0);
      goto LAB_0101f106;
    }
    if (param_1 != 3) goto LAB_0101f106;
    piVar7 = (int *)(*(int *)(DAT_0101f1dc + 100) * 0x60 + DAT_0101f1e0);
    piVar4 = (int *)*piVar7;
    cVar5 = (char)piVar7[1];
    unaff_r4 = (int)piVar4;
    cVar1 = *(char *)(DAT_0101f1cc + 0x48);
  }
  else {
    if (param_2 != 1) goto LAB_0101f106;
    if (param_1 == 2) goto LAB_0101f0dc;
    if (param_1 != 3) goto LAB_0101f106;
    cVar5 = *(char *)(DAT_0101f1cc + 0x104);
    piVar4 = (int *)(*(int *)(DAT_0101f1dc + 0x68) * 0x60 + DAT_0101f1e0);
    unaff_r4 = *piVar4;
    cVar1 = cVar5;
  }
  bVar2 = cVar1 == '\x01';
  uVar3 = SUB41(piVar4,0);
  if (bVar2) {
    uVar3 = 0;
  }
  if (bVar2) {
    param_3[1] = uVar3;
  }
  else {
    cVar5 = '\x01';
  }
  if (!bVar2) {
    param_3[1] = cVar5;
  }
LAB_0101f106:
  iVar8 = unaff_r4 - *(int *)(iVar8 + *(int *)(iVar6 + 0x34) * 0x60);
  *(int *)(param_3 + 4) = iVar8;
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  param_3[2] = (char)iVar8;
  return;
}

