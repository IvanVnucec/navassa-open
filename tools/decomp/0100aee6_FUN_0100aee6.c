
longlong FUN_0100aee6(int param_1,uint param_2,int param_3,byte param_4,byte param_5)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_30;
  byte *local_2c;
  
  pbVar3 = DAT_0100afe4;
  piVar2 = DAT_0100afe0;
  iVar11 = DAT_0100afdc;
  pbVar8 = DAT_0100afd8;
  if ((param_1 == 1) || (iVar11 = DAT_0100afec, pbVar8 = DAT_0100afe8, param_1 == 2)) {
    local_2c = (byte *)(iVar11 + (param_2 & 1));
    uVar10 = 1 << (param_2 & 0xff) & 0xff;
  }
  else {
    local_2c = DAT_0100afe4;
    uVar10 = 0x40;
    pbVar8 = DAT_0100aff0;
  }
  bVar1 = *pbVar8 | (byte)uVar10;
  iVar11 = 0;
  local_30._2_2_ = (undefined2)(param_2 >> 0x10);
  local_30._0_2_ = CONCAT11(param_4,bVar1);
  *DAT_0100afe0 = *DAT_0100afe0 / 2;
  for (iVar13 = 0; iVar13 < (int)(uint)param_5; iVar13 = iVar13 + 1) {
    if (iVar13 < (int)(uint)param_4) {
      uVar12 = *(uint *)(param_3 + iVar13 * 4);
    }
    else {
      uVar12 = 0;
    }
    uVar9 = 0;
    do {
      while( true ) {
        pbVar3[2] = (byte)((uint)iVar11 >> 8);
        pbVar3[1] = (byte)iVar11;
        uVar6 = uVar12 >> ((uVar9 & 0x1f) << 3);
        *pbVar3 = (byte)uVar6;
        *pbVar8 = bVar1;
        do {
        } while ((*pbVar8 & uVar10) != 0);
        iVar7 = *piVar2;
        for (iVar5 = 1; iVar5 < iVar7; iVar5 = iVar5 + 1) {
        }
        uVar4 = (uint)*local_2c;
        if (uVar4 == (uVar6 & 0xff)) break;
        iVar7 = iVar7 * 2;
        iVar5 = iVar7 + 1;
        *piVar2 = iVar5;
        if (iVar5 < 1) {
          uVar4 = 0;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,1)) {
          uVar4 = 1;
        }
        nmi_signal_helper(uVar4);
      }
      uVar9 = uVar9 + 1;
      iVar11 = iVar11 + 1;
    } while (uVar9 < 3);
  }
  return (ulonglong)local_30 << 0x20;
}

