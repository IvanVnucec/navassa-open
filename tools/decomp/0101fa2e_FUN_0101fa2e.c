
int FUN_0101fa2e(undefined1 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar12;
  int iVar13;
  int iVar14;
  ushort uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  byte local_43;
  byte local_42;
  uint local_40;
  int local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar1 = *param_1;
  uVar11 = *(uint *)(param_1 + 4);
  iVar6 = uVar11 + 0x10 + param_2 * 0x1c;
  iVar13 = *(int *)(*(int *)(param_1 + 8) + 0x14) + param_3 * 0x80 + param_2 * 0x10;
  param_1[0xc] = uVar1;
  pbVar17 = (byte *)(iVar13 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 1000;
  uVar7 = DAT_0101ff78;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar6 + 4);
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  piVar3 = DAT_0101ff58;
  if (*(char *)(uVar11 + 0xf1) == '\0') {
    uVar8 = (uint)*(byte *)(uVar11 + 0xf2);
    if (uVar8 == 0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      local_40 = 8;
      local_38 = 0x10;
    }
  }
  else {
    local_40 = 0x10;
    local_38 = 0x21;
    uVar8 = uVar11;
  }
  if (*(char *)(uVar11 + 0xf1) == '\0') {
    bVar20 = *(char *)(uVar11 + 0xf2) == '\0';
    if (bVar20) {
      lVar22 = (ulonglong)uVar8 << 0x20;
    }
    else {
      uVar11 = local_40;
      uVar23 = FUN_0101fda0();
      lVar22 = FUN_0101d676((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),1,uVar11 & 0xff);
    }
    uVar7 = FUN_0101fdca((int)lVar22,(int)((ulonglong)lVar22 >> 0x20),!bVar20);
    FUN_0101fdb6(uVar7,param_1[100]);
  }
  else {
    *DAT_0101ff58 = DAT_0101ff7c + *(byte *)(DAT_0101ff58 + 1) * local_40 * 2;
    FUN_0101fda0(*piVar3,piVar3[1],(char)piVar3[2],*piVar3,piVar3[1]);
    FUN_0101d740();
    FUN_0101fdaa();
    uVar7 = FUN_0101d826();
    FUN_0101fdc0(uVar7,param_1[100]);
  }
  uVar7 = FUN_0101ff88(iVar6,0x12);
  FUN_0101ffd6(param_1,0xffffffff,0,0);
  for (uVar15 = (ushort)*(byte *)(iVar6 + 1); (uint)uVar15 <= *(byte *)(iVar6 + 2) - 2;
      uVar15 = uVar15 + 3) {
    FUN_0101fdaa();
    FUN_01022c68();
    iVar14 = FUN_01023180(param_1 + 0xc);
    DAT_0101ff58[3] = iVar14;
    if (iVar14 != 0) break;
    uVar11 = 0;
    do {
      uVar23 = FUN_0101fdd6(param_1,uVar7,uVar11 & 0xff);
      FUN_0101ffd6(param_1,(int)(short)((short)uVar11 + uVar15),(int)uVar23,
                   (int)((ulonglong)uVar23 >> 0x20));
      uVar11 = uVar11 + 1;
    } while (uVar11 < 3);
  }
  uVar23 = *(undefined8 *)(param_1 + 0x28);
  local_43 = param_1[0x20];
  uVar11 = 0x14;
  FUN_0101206c((short)param_2 * 0x14 + (short)param_3 * 0xa0 + *(int *)(param_1 + 8) + 0x1f8,
               param_1 + 0x48);
  if (DAT_0101ff58[3] == 0) {
    uVar8 = *(uint *)(param_1 + 0x50);
    bVar20 = *(uint *)(param_1 + 0x4c) <= uVar8;
    if (bVar20) {
      uVar11 = *(uint *)(param_1 + 0x54);
    }
    bVar21 = bVar20 && uVar11 <= uVar8;
    if (bVar20 && uVar11 <= uVar8) {
      bVar21 = *(uint *)(param_1 + 0x48) <= uVar8;
    }
    if (bVar21) {
      bVar4 = (byte)(-(uint)(uVar8 < *(uint *)(param_1 + 0x58)) >> 0x1f);
    }
    else {
      bVar4 = 1;
    }
    *(byte *)(*(int *)(param_1 + 8) + param_3 * 8 + param_2 + 0x1c8) = bVar4;
    if (local_43 == 0) {
      DAT_0101ff58[3] = 0x2203;
    }
  }
  pbVar9 = (byte *)(*(int *)(param_1 + 4) + 0xf1);
  bVar20 = *(char *)(*(int *)(param_1 + 4) + 0xf2) == '\x01';
  if (!bVar20) {
    pbVar9 = (byte *)(uint)*pbVar9;
  }
  bVar21 = bVar20 || pbVar9 == (byte *)0x1;
  if (bVar20 || pbVar9 == (byte *)0x1) {
    bVar21 = DAT_0101ff58[3] == 0;
  }
  if (bVar21) {
    *pbVar17 = local_43;
    for (uVar11 = 0; piVar3 = DAT_0101ff58, (int)uVar11 < local_38; uVar11 = uVar11 + 1) {
      if (uVar11 != local_40) {
        uVar2 = param_1[100];
        if (*(char *)(*(int *)(param_1 + 4) + 0xf1) == '\0') {
          FUN_0101d676(uVar1,uVar2,1,uVar11 & 0xff);
          FUN_0101fdca(*(int *)(param_1 + 4),extraout_r1_00,
                       *(undefined1 *)(*(int *)(param_1 + 4) + 0xf2));
        }
        else {
          iVar14 = DAT_0101ff7c + *(byte *)(DAT_0101ff58 + 1) * uVar11 * 2;
          *DAT_0101ff58 = iVar14;
          FUN_0101d740(uVar1,uVar2,(char)piVar3[2],iVar14,piVar3[1]);
          FUN_0101fda0(*(int *)(param_1 + 4),extraout_r1,
                       *(undefined1 *)(*(int *)(param_1 + 4) + 0xf1));
          FUN_0101d826();
        }
        FUN_01022b48(uVar1);
        uVar10 = FUN_01022cc2(uVar1,*(undefined4 *)(iVar6 + 4));
        *(undefined4 *)(param_1 + 0x14) = uVar10;
        FUN_01022c68(uVar1,param_1[100],1,0,0,*DAT_0101ff80,1,*pbVar17 - 1,0);
        iVar14 = FUN_01023180(param_1 + 0xc);
        DAT_0101ff58[3] = iVar14;
        if (iVar14 != 0) break;
        uVar8 = (uint)local_42;
        uVar19 = (uint)local_43;
        uVar18 = 0;
        do {
          uVar16 = (uint)((ulonglong)uVar23 >> 0x20);
          uVar24 = FUN_0101fdd6(param_1,uVar7,uVar18 & 0xff);
          uVar12 = (uint)((ulonglong)uVar24 >> 0x20);
          if ((uVar16 <= uVar12) && (uVar16 < uVar12 || (uint)uVar23 < (uint)uVar24)) {
            uVar19 = (uVar18 + *pbVar17) - 1;
            uVar8 = uVar11;
            uVar23 = uVar24;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < 3);
        local_42 = (byte)uVar8;
        local_43 = (byte)uVar19;
      }
    }
    if (*(char *)(*(int *)(param_1 + 4) + 0xf1) == '\0') {
      FUN_0101fdc0(0,param_1[100]);
    }
    else {
      FUN_0101fdb6();
    }
  }
  uStack_2c = (undefined4)((ulonglong)uVar23 >> 0x20);
  local_30 = (undefined4)uVar23;
  *pbVar17 = local_43;
  *(byte *)(iVar13 + 0x31) = local_42;
  if (*(char *)(*(int *)(param_1 + 4) + 0xf1) == '\0') {
    *(undefined1 *)(iVar13 + 0x32) = 0;
    *(undefined2 *)(iVar13 + 0x38) = 0x10;
    *(undefined2 *)(iVar13 + 0x3a) = 0x10;
  }
  else {
    *(undefined1 *)(iVar13 + 0x32) = 1;
    *(uint *)(iVar13 + 0x34) = DAT_0101ff7c + (uint)local_42 * 0x2e;
    *(undefined2 *)(iVar13 + 0x38) = 0x17;
    *(undefined2 *)(iVar13 + 0x3a) = 0x21;
    cVar5 = (char)DAT_0101ff58[2];
    if (cVar5 != '\0') {
      cVar5 = '\x01';
    }
    *(char *)(iVar13 + 0x3c) = cVar5;
    *(byte *)(iVar13 + 0x3d) = local_42;
  }
  uVar10 = FUN_01014570(local_30,uStack_2c);
  param_4[1] = uVar10;
  FUN_0101ff2a(uVar1,uVar7);
  uVar7 = FUN_01014570();
  *param_4 = uVar7;
  return DAT_0101ff58[3];
}

