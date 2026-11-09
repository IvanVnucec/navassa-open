
undefined8 FUN_0103ac40(int param_1,int param_2,int param_3,short param_4,undefined4 param_5)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined4 in_stack_ffffffd0;
  undefined4 uVar19;
  
  iVar3 = DAT_0103ad9c;
  iVar9 = *(int *)(DAT_0103ad98 + 0x10);
  uVar6 = 0;
  puVar12 = (uint *)(DAT_0103ad9c + 0x118);
  uVar15 = 0;
  if (*(int *)(DAT_0103ad98 + 4) < param_3) {
    *puVar12 = *puVar12 + 1;
  }
  else {
    *puVar12 = 0;
  }
  piVar14 = (int *)0x0;
  uVar10 = 0;
  uVar19 = CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),param_4);
  do {
    if (((int)param_4 >> (uVar10 & 0xff)) << 0x1f < 0) {
      puVar5 = (undefined4 *)(uVar10 * 0x14 + iVar3);
      puVar5[4] = puVar5[3];
      puVar5[3] = puVar5[2];
      puVar5[2] = puVar5[1];
      puVar5[1] = *puVar5;
      *puVar5 = *(undefined4 *)(param_1 + uVar10 * 4);
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0xe);
  uVar10 = *puVar12;
  if (*(char *)(iVar3 + 300) == '\0') {
    bVar2 = false;
    uVar8 = 0;
    do {
      if (((int)param_4 >> (uVar8 & 0xff)) << 0x1f < 0) {
        piVar11 = (int *)(uVar8 * 0x14 + iVar3);
        iVar13 = piVar11[1];
        iVar16 = *piVar11;
        bVar18 = SBORROW4(iVar16,iVar13);
        iVar7 = iVar16 - iVar13;
        if (iVar16 < iVar13) {
          iVar16 = piVar11[2];
          bVar18 = SBORROW4(iVar13,iVar16);
          iVar7 = iVar13 - iVar16;
        }
        if (iVar7 < 0 != bVar18) {
          iVar13 = piVar11[3];
          bVar18 = SBORROW4(iVar13,iVar16);
          iVar7 = iVar13 - iVar16;
          if (iVar13 < iVar16) {
            bVar18 = SBORROW4(piVar11[4],piVar11[3]);
            iVar7 = piVar11[4] - piVar11[3];
          }
          bVar17 = iVar7 < 0;
          if (bVar17 != bVar18) {
            piVar11 = (int *)piVar11[2];
            bVar18 = SBORROW4(iVar9,(int)piVar11);
            bVar17 = iVar9 - (int)piVar11 < 0;
          }
          if (((bVar17 != bVar18) && (0x78 < uVar10)) && (bVar2 = true, (int)piVar14 < (int)piVar11)
             ) {
            uVar6 = uVar8;
            piVar14 = piVar11;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0xe);
    if (bVar2) {
      *(short *)(iVar3 + 0x11c) = (short)uVar6;
      *(int *)(iVar3 + 0x124) = param_2 * 0xff >> 3;
      iVar7 = uVar6 * 0x14;
      piVar11 = (int *)(iVar3 + iVar7);
      *puVar12 = 0;
      *(undefined1 *)(iVar3 + 300) = 1;
      *(int **)(iVar3 + 0x120) = piVar14;
      iVar16 = piVar11[2];
      iVar13 = *(int *)(iVar3 + 4 + iVar7);
      iVar9 = (iVar13 + piVar11[3] + iVar16 * -2) / 2;
      iVar7 = (*piVar11 + *(int *)(iVar3 + 0x10 + iVar7) + iVar16 * -2) / 2;
      *(int *)(iVar3 + 0x128) =
           -((((*piVar11 - iVar16) - iVar7) * 0x4000) / iVar7) -
           (((iVar13 - iVar16) - iVar9) * 0x2000) / iVar9;
    }
  }
  else if (*(char *)(iVar3 + 300) == '\x01') {
    if (uVar10 == 0) {
      *(undefined1 *)(iVar3 + 300) = 0;
    }
    else if (0x77 < uVar10) {
      FUN_0101206c(param_5,iVar3 + 0x11c,0x10,iVar9,uVar19,param_1);
      puVar4 = DAT_0103ada0;
      uVar1 = *(undefined2 *)(iVar3 + 0x11c);
      *(undefined1 *)(iVar3 + 300) = 0;
      *puVar12 = 0;
      uVar15 = 1;
      *puVar4 = (char)uVar1;
    }
  }
  return CONCAT44(uVar19,uVar15);
}

