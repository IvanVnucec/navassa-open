
void FUN_01038964(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_50;
  int local_40;
  
  FUN_010388e0();
  FUN_010388e0(param_1 + 8,param_2 + 0x40);
  FUN_010388e0(param_1 + 0x10,param_2 + 0x80);
  uVar5 = 0;
  do {
    *(undefined4 *)(param_1 + uVar5 * 4) = *(undefined4 *)(param_2 + uVar5 * 4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x30);
  uVar14 = 0x800000;
  uVar5 = 0;
  iVar6 = 0;
  local_40 = 3;
  do {
    local_50 = 0;
    do {
      piVar9 = (int *)(param_1 + local_50 * 4);
      iVar8 = piVar9[0x10];
      iVar11 = piVar9[0x11];
      iVar7 = piVar9[0x20];
      iVar10 = piVar9[0x21];
      if (iVar6 == 0) {
        iVar8 = *piVar9 + iVar7 + iVar8;
        iVar7 = piVar9[1] + iVar10 + iVar11;
      }
      else {
        lVar2 = (longlong)(int)uVar14;
        lVar1 = (longlong)DAT_01038c18 * (longlong)(int)uVar14 -
                (longlong)DAT_01038c14 * (longlong)(int)uVar5;
        uVar14 = (uint)lVar1 >> 0x17 | (int)((ulonglong)lVar1 >> 0x20) * 0x200;
        lVar2 = (longlong)DAT_01038c18 * (longlong)(int)uVar5 +
                ((longlong)(int)((ulonglong)(DAT_01038c14 * lVar2) >> 0x20) << 0x20 |
                DAT_01038c14 * lVar2 & 0xffffffffU);
        uVar5 = (uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9;
        lVar1 = (longlong)iVar8 * (longlong)(int)uVar14 - (longlong)iVar11 * (longlong)(int)uVar5;
        lVar2 = (longlong)iVar8 * (longlong)(int)uVar5 +
                ((longlong)(int)((ulonglong)((longlong)iVar11 * (longlong)(int)uVar14) >> 0x20) <<
                 0x20 | (longlong)iVar11 * (longlong)(int)uVar14 & 0xffffffffU);
        lVar4 = (longlong)(int)uVar14 * (longlong)(int)uVar14 -
                (longlong)(int)uVar5 * (longlong)(int)uVar5;
        uVar12 = (uint)((longlong)(int)uVar5 * (longlong)(int)uVar14) >> 0x16 |
                 (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(int)uVar14) >> 0x20) << 10;
        uVar13 = (uint)lVar4 >> 0x17 | (int)((ulonglong)lVar4 >> 0x20) * 0x200;
        lVar4 = (longlong)iVar7 * (longlong)(int)uVar13 - (longlong)iVar10 * (longlong)(int)uVar12;
        iVar8 = *piVar9 + ((uint)lVar1 >> 0x17 | (int)((ulonglong)lVar1 >> 0x20) * 0x200) +
                ((uint)lVar4 >> 0x17 | (int)((ulonglong)lVar4 >> 0x20) * 0x200);
        uVar3 = (longlong)iVar10 * (longlong)(int)uVar13;
        lVar1 = (longlong)iVar7 * (longlong)(int)uVar12 +
                ((longlong)(int)(uVar3 >> 0x20) << 0x20 | uVar3 & 0xffffffff);
        iVar7 = piVar9[1] + ((uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9) +
                ((uint)lVar1 >> 0x17 | (int)((ulonglong)lVar1 >> 0x20) << 9);
      }
      *(int *)(param_2 + iVar6 * 4) = iVar8;
      iVar8 = iVar6 * 4;
      iVar6 = iVar6 + 2;
      *(int *)(param_2 + iVar8 + 4) = iVar7;
      local_50 = local_50 + 2;
    } while (local_50 < 0x10);
    local_40 = local_40 + -1;
  } while (local_40 != 0);
  return;
}

