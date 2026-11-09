
void FUN_0100df66(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  
  iVar4 = DAT_0100e0b8;
  iVar3 = DAT_0100e0b4;
  cVar1 = *DAT_0100e010;
  iVar6 = DAT_0100e020 + (short)param_1 * 0x110;
  bVar8 = cVar1 != '\0';
  if (bVar8) {
    cVar1 = *(char *)(*(int *)(iVar6 + 0xc) + 0xc);
  }
  if (bVar8 && cVar1 != '\0') {
    iVar6 = *(int *)(DAT_0100e054 + param_1 * 4);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0xe4);
  }
  bVar2 = *DAT_0100e0a4;
  for (uVar5 = (uint)*DAT_0100e0a0; (int)uVar5 <= (int)(bVar2 - 1); uVar5 = uVar5 + 1) {
    psVar7 = (short *)(iVar6 + uVar5 * 4);
    *(short *)(iVar3 + uVar5 * 2) = psVar7[2] - *psVar7;
    *(short *)(iVar4 + uVar5 * 2) = psVar7[3] - psVar7[1];
  }
  return;
}

