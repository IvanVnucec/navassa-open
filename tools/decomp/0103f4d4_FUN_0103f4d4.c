
int FUN_0103f4d4(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  undefined2 local_34 [6];
  uint local_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar10 = 0;
  bVar11 = 0;
  uStack_20 = param_4;
  do {
    FUN_010102be(bVar11,auStack_50);
    FUN_010104ae(bVar11,0,200,param_2[4]);
    FUN_01010366(bVar11,auStack_50,param_2[4]);
    bVar11 = bVar11 + 1;
  } while (bVar11 < 2);
  uVar6 = param_2[7];
  bVar11 = 0;
  do {
    if ((int)((param_2[9] >> (uint)bVar11) << 0x1f) < 0) break;
    bVar11 = bVar11 + 1;
  } while (bVar11 < 3);
  uVar7 = param_2[8];
  if (param_2[6] == 2) {
    iVar10 = FUN_0100929c(&local_28);
    bVar12 = iVar10 == 0;
    if (bVar12) {
      uVar9 = iStack_24 + -1 + (uint)CARRY4(local_28,DAT_0103ff5c);
      bVar12 = uVar9 == 1;
      if (uVar9 < 2) {
        if (uVar9 != 0 && DAT_0103ff60 <= local_28 + DAT_0103ff5c) {
          return 0;
        }
        goto LAB_0103f55c;
      }
    }
  }
  else {
LAB_0103f55c:
    bVar12 = (char)param_2[5] == '\0';
  }
  if (!bVar12) {
    return iVar10;
  }
  if (uVar7 != bVar11 || uVar6 != 0) {
    return iVar10;
  }
  FUN_0100f232(2,&DAT_0103f6c4,2,auStack_3c);
  iVar5 = DAT_0103ff78;
  iVar4 = DAT_0103ff74;
  iVar3 = DAT_0103ff70;
  iVar2 = DAT_0103ff6c;
  iVar8 = DAT_0103ff68;
  uVar6 = 0;
  do {
    local_34[uVar6] = *(undefined2 *)(&DAT_0103f6cc)[uVar6];
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  uVar6 = 0;
  do {
    if ((int)((*param_2 >> (uVar6 & 0xff)) << 0x1f) < 0) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  uVar7 = param_2[6];
  uVar6 = uVar6 & 0xff;
  if (uVar7 == 0) {
    *(undefined1 *)(DAT_0103ff78 + 4) = 3;
    *(int *)(iVar5 + 0x20) = iVar4 + 0x84;
    cVar1 = *(char *)(iVar3 + 0x20);
    bVar12 = cVar1 != '\0';
    if (bVar12) {
      cVar1 = *(char *)(*(int *)(iVar2 + uVar6 * 4) + 0x2f);
    }
    iVar10 = iVar5;
    if (bVar12 && cVar1 != '\0') {
      *(undefined1 *)(iVar5 + 5) = 5;
      iVar8 = iVar8 + 0xa0;
    }
    else {
      *(undefined1 *)(iVar5 + 5) = 3;
      iVar8 = iVar8 + 0x50;
    }
  }
  else if (uVar7 == 4) {
    *(undefined1 *)(DAT_0103ff78 + 0x84) = 1;
    iVar10 = iVar5 + 0x80;
    *(int *)(iVar5 + 0xa0) = iVar4 + 0x2c;
    cVar1 = *(char *)(iVar3 + 0x20);
    bVar12 = cVar1 != '\0';
    if (bVar12) {
      cVar1 = *(char *)(*(int *)(iVar2 + uVar6 * 4) + 0x2f);
    }
    if (bVar12 && cVar1 != '\0') {
      *(undefined1 *)(iVar5 + 0x85) = 4;
      iVar8 = iVar8 + 0x140;
    }
    else {
      *(undefined1 *)(iVar5 + 0x85) = 1;
      iVar8 = iVar8 + 0xf0;
    }
  }
  else if (uVar7 == 1) {
    *(undefined1 *)(DAT_0103ff78 + 0x104) = 4;
    *(undefined1 *)(iVar5 + 0x105) = 4;
    iVar10 = iVar5 + 0x100;
    *(int *)(iVar5 + 0x120) = iVar4 + 0xb0;
  }
  else if (uVar7 == 2) {
    *(undefined1 *)(DAT_0103ff78 + 0x184) = 6;
    *(undefined1 *)(iVar5 + 0x185) = 6;
    *(int *)(iVar5 + 0x1a0) = iVar4 + 0x108;
    if (*(char *)(*(int *)(iVar2 + uVar6 * 4) + 0x2f) != '\0') goto LAB_0103f69e;
    iVar10 = iVar5 + 0x180;
    iVar8 = DAT_0103ff80;
  }
  else {
    if (uVar7 != 3) goto LAB_0103f69e;
    *(undefined1 *)(DAT_0103ff78 + 0x204) = 5;
    *(undefined1 *)(iVar5 + 0x205) = 5;
    *(int *)(iVar5 + 0x220) = iVar4 + 0xdc;
    iVar10 = iVar5 + 0x200;
    iVar8 = DAT_01040264;
  }
  iVar10 = FUN_0103f782(param_2,iVar10,iVar8,auStack_40);
LAB_0103f69e:
  FUN_0100f26e(2,&DAT_0103f6c4,2,auStack_3c);
  uVar6 = 0;
  do {
    *(undefined2 *)(&DAT_0103f6cc)[uVar6] = local_34[uVar6];
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  return iVar10;
}

