
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0102487a */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8
FUN_010245b2(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined *local_110;
  undefined *local_10c;
  undefined *local_108;
  undefined *local_104;
  undefined4 local_100;
  byte local_fc;
  int local_f8;
  int local_f4;
  char *local_f0;
  uint *local_ec;
  int local_e8;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_c8;
  byte local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 auStack_90 [44];
  int local_64;
  int iStack_60;
  
  uVar15 = *DAT_01024b88;
  uVar16 = 0;
  uVar17 = 0;
  if (*(int *)(param_3 + 0x14) << 0x1d < 0) {
    local_c4 = 0;
  }
  else {
    if (-1 < *(int *)(param_3 + 0x14) << 0x1c) {
      iVar4 = 0x4402;
      goto LAB_01024a36;
    }
    local_c4 = 1;
  }
  bVar2 = local_c4;
  uVar13 = (uint)local_c4;
  local_c8 = param_3;
  iVar4 = FUN_01024a46();
  if ((iVar4 == 0) && (iVar4 = FUN_01024a40(), iVar4 == 0)) {
    FUN_01036fc8(param_3,0xffffffff);
  }
  else {
    local_f4 = (short)(ushort)bVar2 * 0x18;
    iVar4 = FUN_01024a46();
    if ((iVar4 != 0) && (*(int *)(DAT_01024b8c + local_f4) == 0)) {
      FUN_01036fc8(param_3,DAT_01024b90);
    }
    local_f8 = DAT_01024b70;
    *(undefined4 *)(param_3 + 0x28) = 0x9c4;
    local_f8 = (short)(ushort)bVar2 * 0x5c + local_f8;
    iVar4 = FUN_010315cc(*(undefined4 *)(local_f8 + 0x34),uVar13,0,0);
    if (iVar4 != 0) goto LAB_01024a36;
    FUN_01024c18(uVar13,uVar15);
    task_enter_critical();
    local_c0 = *(undefined4 *)(local_f8 + 0x10);
    FUN_0102bf96();
    local_bc = 0;
    FUN_01025202(uVar13,1);
    FUN_01025218();
    iVar6 = DAT_01024b98;
    local_e4 = 1;
    if (uVar13 != 0) {
      local_e4 = 2;
    }
    local_ec = (uint *)(local_f8 + 0x4c);
    local_f0 = (char *)(DAT_01024b80 + 0x77c);
    cVar1 = *local_f0;
    bVar18 = cVar1 == '\0';
    if (bVar18) {
      cVar1 = *(char *)(local_f8 + 0x58);
    }
    if (bVar18 && cVar1 == '\0') {
      local_e4 = local_e4 | 0x20;
    }
    local_e4 = local_e4 | 0xc0;
    iVar14 = 4;
    local_e8 = (short)(ushort)bVar2 * 0xbc + DAT_01024b80;
    if (DAT_01024b84 <= *(uint *)(local_e8 + 0x24)) {
      iVar14 = 5;
    }
    local_fc = *(byte *)(DAT_01024b94 + uVar13);
    if (iVar14 == 4) {
      *(undefined4 *)(*(int *)(DAT_01024b98 + uVar13 * 4) + 4) = 3;
      uVar5 = FUN_01006dc0(1,3,local_fc);
      FUN_01031d86(*(undefined4 *)(iVar6 + uVar13 * 4),uVar5,0);
      *(undefined1 *)(DAT_01024b9c + (uint)local_fc * 0x1c) = 2;
      iVar6 = *(int *)(iVar6 + uVar13 * 4);
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar6 + 8);
      FUN_0101b13e(5);
      FUN_010085e4(2,3,local_fc,1);
    }
    local_108 = PTR_LAB_010245a0_1_01024ba0;
    local_100 = 1;
    local_104 = PTR_LAB_010245a4_1_01024ba4;
    local_10c = PTR_LAB_0102459c_1_01024bac;
    local_110 = PTR_LAB_01024598_1_01024bb0;
    FUN_01023ba8(uVar15,&local_c8,local_e4,iVar14,PTR_LAB_01024340_1_01024ba8,
                 PTR_LAB_0102449a_1_01024bb4);
    iVar6 = FUN_01023cb0(uVar15,0xffffffff);
    iVar11 = uVar13 + 2;
    if (iVar6 == 1) {
      iVar6 = FUN_01024a40();
      if (iVar6 != 0) {
        FUN_01037310(uVar13,*(undefined1 *)(DAT_01024bb8 + iVar11));
      }
      if (uVar13 == 0) {
        FUN_01025248(0x4000,*(undefined4 *)(param_3 + 0x28));
        uVar5 = 0x300;
      }
      else {
        FUN_01025248(0x8000,*(undefined4 *)(param_3 + 0x28));
        uVar5 = 0xc00;
      }
      FUN_0102523e(uVar5);
      FUN_01025062(uVar13);
      iVar6 = FUN_01023d26(uVar15,0xffffffff);
    }
    if (iVar6 != 0) goto LAB_01024a30;
    uVar7 = FUN_010085e4(2,3,local_fc,0);
    if (iVar14 == 4) {
      uVar7 = (uint)*(byte *)(DAT_01024bbc + 0xd0);
    }
    if (iVar14 == 4 && uVar7 == 0) {
      thunk_EXT_FUN_200348e4(1);
    }
    uVar19 = FUN_01024a4c();
    iVar6 = (int)uVar19 + (int)((ulonglong)uVar19 >> 0x20);
    if (*(int *)(iVar6 + 0x1a8) == *(int *)(local_e8 + 0xa4)) {
      if (local_f0[1] != '\0') {
        puVar8 = *(undefined4 **)(DAT_01024bc0 + (uint)*(byte *)(DAT_01024bb8 + iVar11) * 4);
        uVar16 = *puVar8;
        uVar17 = puVar8[1];
      }
      FUN_01023e8e(uVar15);
      task_enter_critical();
      uVar20 = *local_ec;
      FUN_0102bf96();
      FUN_01025192(uVar13,&local_110);
      uVar7 = (uint)local_110 >> 0x10;
      uVar12 = uVar20 & 0xffff;
      bVar18 = uVar7 < uVar12;
      if (!bVar18) {
        uVar7 = uVar20 >> 0x10;
        uVar12 = (uint)local_110 & 0xffff;
      }
      if (bVar18 || uVar7 < uVar12) {
LAB_01024912:
        FUN_01023ea0(uVar15);
      }
      else {
        piVar9 = (int *)(iVar6 + 0x18c);
        task_enter_critical();
        uVar19 = *(undefined8 *)(local_f8 + 0x18);
        uVar5 = *(undefined4 *)(local_f8 + 0x28);
        FUN_0102bf96();
        FUN_01034118((int)uVar19,param_2,uVar5,auStack_90,uVar13,0,local_c0);
        FUN_0101206c(&local_64,auStack_90,0x2c);
        *piVar9 = local_64;
        piVar9[1] = iStack_60;
        iVar14 = *piVar9;
        bVar18 = iVar14 == 0;
        if (bVar18) {
          iVar14 = piVar9[1];
        }
        if (bVar18 && iVar14 == 0) {
          FUN_01023ea0(uVar15);
          FUN_01024a58();
          iVar4 = 0x4404;
          goto LAB_01024a36;
        }
        FUN_010346c0(&local_e0,&local_64);
        iVar14 = DAT_01024b8c;
        local_dc = *(int *)(DAT_01024b8c + 4 + local_f4) + 1;
        local_e0 = *(undefined4 *)(DAT_01024b8c + local_f4);
        task_enter_critical();
        FUN_0101206c(iVar14 + local_f4,&local_e0,0x18);
        FUN_0102bf96();
        iVar10 = FUN_01024a40();
        if (iVar10 != 0) {
          FUN_010371ac(uVar13,*piVar9,piVar9[1]);
        }
        iVar10 = FUN_01024a40();
        if ((iVar10 == 0) || (iVar10 = FUN_01024a46(), iVar10 != 0)) {
          iVar4 = FUN_01033efc(uVar13,local_bc,local_c0);
          if (iVar4 != 0) goto LAB_01024912;
          task_enter_critical();
          *(int *)(iVar14 + local_f4) = *(int *)(iVar14 + local_f4) + 1;
          FUN_0102bf96();
          iVar10 = FUN_01024a46();
          if ((iVar10 != 0) && (*(int *)(iVar14 + local_f4) == 4)) {
            FUN_01036fc8(param_3,DAT_01024bc4);
          }
          FUN_01023ea0(uVar15);
          thunk_FUN_01023eb6(uVar15);
          if (local_f0[1] == '\0') {
            uVar7 = (uint)*DAT_01024b64;
          }
          else {
            uVar7 = FUN_01024ae6(uVar13,local_f0,uVar16,uVar17);
          }
          task_enter_critical();
          uVar12 = local_ec[1];
          FUN_0102bf96();
          uVar19 = FUN_01024a4c();
          iVar10 = (int)((ulonglong)uVar19 >> 0x20) + (int)uVar19 + 0xbc;
          iVar14 = DAT_01024bc8 + (short)(ushort)bVar2 * 0x750;
          uVar16 = FUN_01012c10(uVar12);
          FUN_0103453c(uVar16,iVar10,iVar14 + (short)(ushort)*(byte *)(iVar6 + uVar7) * 0xd0);
          FUN_01033dac(uVar13,*(undefined1 *)(iVar6 + 8));
          FUN_0101204c(iVar14 + (short)(ushort)*(byte *)(iVar6 + uVar7) * 0xd0,iVar10,0xd0);
          if (local_f0[1] == '\0') {
            if (*(char *)(local_f8 + 0xc) == '\0') {
              uVar19 = FUN_01024a4c();
              iVar6 = (int)((ulonglong)uVar19 >> 0x20) + (int)uVar19;
              *(char *)(iVar6 + 0x194) = (char)uVar7;
              *(undefined1 *)(iVar6 + 0x195) = 1;
            }
            else {
              FUN_01024aa0(*(char *)(local_f8 + 0xc),*(undefined1 *)(iVar6 + 8));
              uVar3 = *(undefined1 *)(iVar6 + uVar7);
              *(undefined1 *)(iVar6 + uVar7) = *(undefined1 *)(iVar6 + 8);
              *(undefined1 *)(iVar6 + 8) = uVar3;
            }
          }
          else {
            task_enter_critical();
            iVar14 = (int)-(uint)(*(char *)(*(int *)(DAT_01024bc0 +
                                                    (uint)*(byte *)(DAT_01024bb8 + iVar11) * 4) +
                                           0x2d) == '\0') >> 0x1f;
            uVar13 = FUN_01024d26(uVar13,-iVar14);
            bVar2 = *(byte *)(iVar6 + uVar7);
            *(undefined1 *)(iVar6 + uVar7) = *(undefined1 *)(iVar6 + 8);
            *(byte *)(iVar6 + 8) = bVar2;
            if (uVar13 == bVar2) {
              FUN_01024aa2(uVar13,*(undefined1 *)(iVar6 + uVar7),-iVar14);
            }
            FUN_0102bf96();
          }
          FUN_01023eb4(uVar15);
        }
      }
LAB_01024a30:
      FUN_01024a58();
      goto LAB_01024a36;
    }
    FUN_01024a58();
  }
  iVar4 = 0;
LAB_01024a36:
  return CONCAT44(param_6,iVar4);
}

