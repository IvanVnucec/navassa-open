
int * FUN_0100296a(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int unaff_r9;
  
  pbVar9 = (byte *)param_1[2];
  pbVar6 = (byte *)((int)param_1 + *param_1);
  uVar2 = param_1[1];
  pbVar7 = pbVar6;
  if ((int)(uVar2 << 0x1f) < 0) {
    pbVar9 = pbVar9 + unaff_r9;
  }
  while (pbVar7 != pbVar6 + (uVar2 >> 1)) {
    bVar1 = *pbVar7;
    uVar5 = bVar1 & 3;
    pbVar8 = pbVar7 + 1;
    if ((bVar1 & 3) == 0) {
      pbVar8 = pbVar7 + 2;
      uVar5 = pbVar7[1] + 3;
    }
    uVar4 = (uint)(bVar1 >> 4);
    if (uVar4 == 0xf) {
      uVar4 = *pbVar8 + 0xf;
      pbVar8 = pbVar8 + 1;
    }
    while (uVar5 = uVar5 - 1, uVar5 != 0) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pbVar7 = pbVar8;
    if (uVar4 != 0) {
      uVar5 = bVar1 >> 2 & 3;
      pbVar7 = pbVar8 + 1;
      if (uVar5 == 3) {
        pbVar7 = pbVar8 + 2;
        uVar5 = (uint)pbVar8[1];
      }
      pbVar8 = pbVar9 + -((uint)*pbVar8 + uVar5 * 0x100);
      for (iVar3 = uVar4 + 2; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
  }
  return param_1 + 3;
}

