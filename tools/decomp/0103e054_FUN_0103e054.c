
undefined4 FUN_0103e054(undefined4 param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  undefined2 local_30 [2];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [16];
  
  uVar12 = 0;
  bVar11 = 0;
  do {
    FUN_010102be(bVar11,auStack_28);
    FUN_010104ae(bVar11,0,200,param_2[4]);
    FUN_01010366(bVar11,auStack_28,param_2[4]);
    bVar11 = bVar11 + 1;
  } while (bVar11 < 2);
  bVar11 = 0;
  do {
    if ((int)((param_2[9] >> (uint)bVar11) << 0x1f) < 0) break;
    bVar11 = bVar11 + 1;
  } while (bVar11 < 3);
  uVar7 = (uint)bVar11;
  bVar13 = param_2[8] != uVar7;
  if (!bVar13) {
    uVar7 = (uint)(byte)param_2[5];
  }
  if (bVar13 || uVar7 != 0) {
    return 0;
  }
  if (param_2[7] != 0) {
    return 0;
  }
  FUN_0100f12c(2,&DAT_0103e228,2,auStack_2c);
  FUN_0100f232(3,&DAT_0103e230,3,auStack_3c);
  iVar5 = DAT_0103ec88;
  iVar4 = DAT_0103eb90;
  iVar3 = DAT_0103eb8c;
  iVar2 = DAT_0103eb88;
  iVar10 = DAT_0103eb84;
  uVar7 = 0;
  do {
    local_30[uVar7] = *(undefined2 *)(&DAT_0103e23c)[uVar7];
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar7 = 0;
  do {
    if ((int)((*param_2 >> (uVar7 & 0xff)) << 0x1f) < 0) break;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  uVar9 = param_2[6];
  uVar7 = uVar7 & 0xff;
  if (uVar9 == 0) {
    *(undefined1 *)(DAT_0103eb90 + 4) = 3;
    *(int *)(iVar4 + 0x1c) = iVar3 + 0x84;
    cVar1 = *(char *)(iVar2 + 0x20);
    bVar13 = cVar1 != '\0';
    if (bVar13) {
      cVar1 = *(char *)(*(int *)(iVar5 + uVar7 * 4) + 0x2f);
    }
    iVar8 = iVar4;
    if (bVar13 && cVar1 != '\0') {
      *(undefined1 *)(iVar4 + 5) = 5;
      iVar10 = iVar10 + 0x90;
    }
    else {
      *(undefined1 *)(iVar4 + 5) = 3;
      iVar10 = iVar10 + 0x48;
    }
  }
  else if (uVar9 == 4) {
    *(undefined1 *)(DAT_0103eb90 + 0x8c) = 1;
    iVar8 = iVar4 + 0x88;
    *(int *)(iVar4 + 0xa4) = iVar3 + 0x2c;
    cVar1 = *(char *)(iVar2 + 0x20);
    bVar13 = cVar1 != '\0';
    if (bVar13) {
      cVar1 = *(char *)(*(int *)(iVar5 + uVar7 * 4) + 0x2f);
    }
    if (bVar13 && cVar1 != '\0') {
      *(undefined1 *)(iVar4 + 0x8d) = 4;
      iVar10 = iVar10 + 0x120;
    }
    else {
      *(undefined1 *)(iVar4 + 0x8d) = 1;
      iVar10 = iVar10 + 0xd8;
    }
  }
  else if (uVar9 == 1) {
    *(undefined1 *)(DAT_0103eb90 + 0x114) = 4;
    *(undefined1 *)(iVar4 + 0x115) = 4;
    iVar8 = iVar4 + 0x110;
    *(int *)(iVar4 + 300) = iVar3 + 0xb0;
  }
  else if (uVar9 == 2) {
    *(undefined1 *)(DAT_0103eb90 + 0x19c) = 6;
    *(undefined1 *)(iVar4 + 0x19d) = 6;
    *(int *)(iVar4 + 0x1b4) = iVar3 + 0x108;
    if (*(char *)(*(int *)(iVar5 + uVar7 * 4) + 0x2f) != '\0') goto LAB_0103e1f8;
    iVar8 = iVar4 + 0x198;
    iVar10 = DAT_0103ec8c;
  }
  else {
    if (uVar9 != 3) goto LAB_0103e1f8;
    *(undefined1 *)(DAT_0103eb90 + 0x224) = 5;
    *(undefined1 *)(iVar4 + 0x225) = 5;
    *(int *)(iVar4 + 0x23c) = iVar3 + 0xdc;
    iVar8 = iVar4 + 0x220;
    iVar10 = DAT_0103ec90;
  }
  uVar12 = FUN_0103e2e4(param_2,iVar8,iVar10,auStack_40);
LAB_0103e1f8:
  FUN_0100f1b6(2,&DAT_0103e228,2,auStack_2c);
  FUN_0100f26e(3,&DAT_0103e230,3,auStack_3c);
  puVar6 = DAT_0103ec94;
  *DAT_0103ec94 = local_30[0];
  puVar6[1] = local_30[1];
  return uVar12;
}

