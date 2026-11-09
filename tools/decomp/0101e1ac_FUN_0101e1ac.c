
undefined8 FUN_0101e1ac(byte *param_1)

{
  short sVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint *puVar15;
  ushort uVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined4 uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  byte *pbVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  byte *pbVar30;
  uint uVar31;
  byte *pbVar32;
  uint unaff_r7;
  uint uVar33;
  int iVar34;
  int iVar35;
  undefined4 uVar36;
  int iVar37;
  byte *pbVar38;
  bool bVar39;
  bool bVar40;
  longlong lVar41;
  undefined8 uVar42;
  byte *pbVar43;
  undefined1 local_70;
  short local_6e;
  int local_60;
  
  pbVar26 = DAT_0101e960;
  iVar7 = *(int *)(param_1 + 0xc);
  uVar19 = *(undefined4 *)(iVar7 + 0x40);
  uVar24 = (uint)*param_1;
  local_60 = 0;
  if (*(char *)(iVar7 + 0xa6) == '\0') {
    uVar25 = 0;
    do {
      pbVar30 = pbVar26 + uVar25 * 8 + uVar24 * 0x88 + 8;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30 = pbVar26 + uVar25 * 8 + uVar24 * 0x88 + 0x118;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30 = pbVar26 + uVar25 * 8 + uVar24 * 0x88 + 0x228;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
      pbVar30 = pbVar26 + uVar25 * 8 + uVar24 * 0x88 + 0x338;
      uVar25 = uVar25 + 1;
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar30[2] = 0;
      pbVar30[3] = 0;
      pbVar30[4] = 0;
      pbVar30[5] = 0;
      pbVar30[6] = 0;
      pbVar30[7] = 0;
    } while (uVar25 < 0x11);
  }
  *(undefined4 *)(DAT_0101e960 + 0x448) = *DAT_0101e964;
  uVar36 = DAT_0101e96c;
  if (*(char *)(iVar7 + 0xc) == '\x01') {
    if (*(char *)(iVar7 + 9) == '\x02') {
      local_70 = 4;
    }
    else {
      local_70 = 2;
    }
  }
  pbVar26 = (byte *)(uint)*(ushort *)(param_1 + 0xf4);
  if (*(char *)(iVar7 + 0xa6) != '\0') {
    pbVar26 = pbVar26 + -1;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar19;
  puVar5 = DAT_0101e974;
  puVar4 = DAT_0101e970;
  *(undefined4 *)(param_1 + 0x7c) = uVar36;
  *puVar4 = 1;
  *puVar5 = 1;
  bVar3 = false;
  pbVar8 = DAT_0101e960 + uVar24 * 0x88;
  pbVar30 = (byte *)0x0;
LAB_0101e30c:
  if (pbVar30 <= pbVar26) {
    do {
      if (*(char *)(iVar7 + 0xc) == '\0') {
        sVar1 = (short)*(int *)(iVar7 + 0x34);
        if (*(char *)(iVar7 + 0xa6) == '\0') {
          if (((uint)pbVar30 & 1) == 0) {
            local_6e = sVar1 * 0x199a;
            unaff_r7 = *(int *)(iVar7 + 0x34) << 0xe;
          }
          else {
            local_6e = sVar1 * 0xccd;
            unaff_r7 = sVar1 * 0x3333;
          }
        }
        else {
          local_6e = sVar1 * 0x399a;
LAB_0101e396:
          unaff_r7 = (uint)local_6e;
        }
      }
      else if (*(char *)(iVar7 + 0xc) == '\x01') {
        sVar1 = (short)*(undefined4 *)(iVar7 + 0x34);
        if (*(char *)(iVar7 + 0xa6) != '\0') {
          local_6e = sVar1 * 0x53;
          goto LAB_0101e396;
        }
        unaff_r7 = sVar1 * 0x22;
        if (((uint)pbVar30 & 1) == 0) {
          local_6e = sVar1 * 0xe;
        }
        else {
          local_6e = sVar1 * 0x42;
        }
      }
      FUN_0101da54(uVar24,1,(int)local_6e,(int)(short)unaff_r7);
      param_1[0x10d] = 1;
      if (*(char *)(iVar7 + 9) == '\x01') {
        if (uVar24 == 0) {
          uVar19 = 1;
        }
        else {
          if (uVar24 != 1) goto LAB_0101e3d0;
          uVar19 = 0x10;
        }
        pin_update(DAT_0101e978,uVar19);
      }
LAB_0101e3d0:
      pcVar6 = DAT_0101e97c;
      if (*(char *)(iVar7 + 0xc) == '\0') {
        *DAT_0101e97c = '\0';
        FUN_010231a0(param_1 + 0x70);
LAB_0101e41c:
        if (*(char *)(iVar7 + 0xc) != '\0') goto LAB_0101e422;
        do {
        } while (*pcVar6 == '\0');
        FUN_0101e914(param_1);
LAB_0101e432:
        uVar33 = *(uint *)(param_1 + 0x88);
        iVar34 = *(int *)(param_1 + 0x8c);
        uVar20 = *(uint *)(param_1 + 0x90);
        iVar27 = *(int *)(param_1 + 0x94);
        uVar25 = *(uint *)(param_1 + 0x98);
        iVar35 = *(int *)(param_1 + 0x9c);
        uVar31 = *(uint *)(param_1 + 0xa0);
        iVar37 = *(int *)(param_1 + 0xa4);
        if (*(char *)(iVar7 + 9) == '\x01') {
          if (uVar24 == 0) {
            uVar19 = 1;
LAB_0101e478:
            pin_update(DAT_0101e978,uVar19,0);
          }
          else if (uVar24 == 1) {
            uVar19 = 0x10;
            goto LAB_0101e478;
          }
          bVar40 = uVar25 != 0;
          uVar25 = -uVar25;
          iVar35 = -iVar35 - (uint)bVar40;
          bVar40 = uVar31 != 0;
          uVar31 = -uVar31;
          iVar37 = -iVar37 - (uint)bVar40;
        }
        pcVar6 = DAT_0101e97c;
        if (*(char *)(iVar7 + 0xc) == '\0') {
          *DAT_0101e97c = '\0';
          FUN_010231a0(param_1 + 0x70);
LAB_0101e506:
          if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_0101e50c;
        }
        else if (*(char *)(iVar7 + 0xc) == '\x01') {
          uVar16 = *(ushort *)(param_1 + 0x18);
          bVar40 = uVar16 == 1;
          pbVar17 = param_1;
          if (bVar40) {
            uVar16 = (ushort)*(byte *)(iVar7 + 0xa6);
            pbVar17 = (byte *)(iVar7 + 0xa0);
          }
          bVar39 = bVar40 && uVar16 == 1;
          if (bVar40 && uVar16 == 1) {
            bVar39 = pbVar30 == pbVar26;
            pbVar17 = pbVar26;
          }
          if (bVar39) {
            if (uVar24 == 0) {
              *DAT_0101e960 = 1;
            }
            else {
              if (uVar24 == 1) {
                pbVar17 = DAT_0101e960;
              }
              if (uVar24 == 1) {
                pbVar17[1] = 1;
              }
            }
          }
          param_1[0x10d] = 0;
          FUN_0101e7fe(DAT_0101e960,0x101e885,0x101e80d,local_70,DAT_0101e980,0x101e80d,0x101e885,
                       0x101e8ed,0x101e8ed,0x101e915,0);
          goto LAB_0101e506;
        }
        if ((*(char *)(iVar7 + 0xc) != '\x01') || (iVar9 = FUN_0101e7f2(), iVar9 == 0))
        goto LAB_0101e74c;
      }
      else {
        if (*(char *)(iVar7 + 0xc) == '\x01') {
          FUN_0101e7fe(DAT_0101e960,DAT_0101e980,0x101e915,local_70,DAT_0101e980,0x101e80d,0x101e885
                       ,0x101e8ed,0x101e8ed,0x101e915,0);
          goto LAB_0101e41c;
        }
LAB_0101e422:
        if ((*(char *)(iVar7 + 0xc) != '\x01') || (iVar9 = FUN_0101e7f2(), iVar9 == 0))
        goto LAB_0101e432;
      }
      if (iVar9 != 2 && iVar9 != 4) {
        local_60 = 0x4101;
        bVar3 = true;
        break;
      }
    } while( true );
  }
  if (*(char *)(iVar7 + 0xc) == '\x01') {
    FUN_01023ee6(*(undefined4 *)(param_1 + 0x84));
  }
  *(short *)(iVar7 + 0xa0) = ((short)pbVar26 - (short)pbVar30) + 1;
  if (*(char *)(iVar7 + 0xa6) == '\0') {
    pbVar17 = pbVar8 + 0x338;
    pbVar32 = (byte *)0x1;
    pbVar18 = pbVar8 + 0x228;
    pbVar30 = pbVar8 + 0x118;
    while( true ) {
      if (((pbVar26 < pbVar32) || (bVar3)) || (local_60 != 0)) goto LAB_0101e730;
      pbVar38 = pbVar32 + -1;
      uVar19 = *(undefined4 *)(pbVar8 + (int)pbVar32 * 8 + 8);
      uVar36 = *(undefined4 *)(pbVar8 + (int)pbVar32 * 8 + 8 + 4);
      uVar24 = *(uint *)(pbVar8 + (int)pbVar38 * 8 + 8);
      uVar25 = *(uint *)(pbVar30 + (int)pbVar32 * 8);
      lVar41 = (ulonglong)uVar25 * (ulonglong)uVar24;
      pbVar21 = (byte *)lVar41;
      iVar7 = *(uint *)((int)(pbVar30 + (int)pbVar32 * 8) + 4) * uVar24 +
              uVar25 * *(uint *)((int)(pbVar8 + (int)pbVar38 * 8 + 8) + 4) +
              (int)((ulonglong)lVar41 >> 0x20);
      pbVar43 = pbVar30;
      FUN_0101e7e4(uVar24,pbVar30 + (int)pbVar38 * 8,pbVar21,iVar7);
      fVar14 = (float)FUN_0101f1f8((int)pbVar21 - (int)pbVar30,
                                   (iVar7 - unaff_r7) - (uint)(pbVar21 < pbVar30));
      if ((int)((uint)(ABS(fVar14) < DAT_0101e95c) << 0x1f) < 0) break;
      uVar31 = *(uint *)(pbVar18 + (int)pbVar32 * 8);
      uVar20 = *(uint *)((int)(pbVar18 + (int)pbVar32 * 8) + 4);
      uVar24 = *(uint *)(pbVar18 + (int)pbVar38 * 8);
      uVar22 = *(uint *)(pbVar43 + (int)pbVar32 * 8);
      lVar41 = (ulonglong)uVar22 * (ulonglong)uVar24;
      uVar33 = (uint)lVar41;
      uVar25 = *(uint *)(pbVar43 + (int)pbVar38 * 8);
      lVar2 = (ulonglong)uVar25 * (ulonglong)uVar31;
      uVar23 = (uint)lVar2;
      fVar10 = (float)FUN_0101f1f8(uVar33 - uVar23,
                                   ((*(uint *)((int)(pbVar43 + (int)pbVar32 * 8) + 4) * uVar24 +
                                    uVar22 * *(uint *)((int)(pbVar18 + (int)pbVar38 * 8) + 4) +
                                    (int)((ulonglong)lVar41 >> 0x20)) -
                                   (*(uint *)((int)(pbVar43 + (int)pbVar38 * 8) + 4) * uVar31 +
                                   uVar25 * uVar20 + (int)((ulonglong)lVar2 >> 0x20))) -
                                   (uint)(uVar33 < uVar23));
      *(float *)(param_1 + 0xb0) = *(float *)(param_1 + 0xb0) + fVar10 / fVar14;
      fVar11 = (float)FUN_0101f1f8(uVar19,uVar36);
      uVar24 = *(uint *)(pbVar43 + (int)pbVar32 * 8);
      uVar25 = *(uint *)((int)(pbVar43 + (int)pbVar32 * 8) + 4);
      fVar12 = (float)FUN_0101f1f8(uVar31,uVar20);
      fVar13 = (float)FUN_0101f1f8(uVar24,uVar25);
      *(float *)(param_1 + 0xb8) =
           (fVar12 - fVar11 * (fVar10 / fVar14)) / fVar13 + *(float *)(param_1 + 0xb8);
      puVar15 = (uint *)(pbVar17 + (int)pbVar38 * 8);
      uVar19 = *(undefined4 *)(pbVar17 + (int)pbVar32 * 8);
      uVar36 = *(undefined4 *)(pbVar17 + (int)pbVar32 * 8 + 4);
      unaff_r7 = puVar15[1];
      lVar2 = *(longlong *)puVar15;
      lVar41 = (ulonglong)uVar24 * (ulonglong)*puVar15;
      lVar41 = FUN_0101e7e4((int)lVar41,
                            uVar25 * *puVar15 + uVar24 * unaff_r7 + (int)((ulonglong)lVar41 >> 0x20)
                           );
      fVar10 = (float)FUN_0101f1f8((int)(lVar41 - lVar2),(int)((ulonglong)(lVar41 - lVar2) >> 0x20))
      ;
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + fVar10 / fVar14;
      fVar12 = (float)FUN_0101f1f8(uVar19,uVar36);
      fVar13 = (float)FUN_0101f1f8(*(undefined4 *)(pbVar43 + (int)pbVar32 * 8),
                                   *(undefined4 *)(pbVar43 + (int)pbVar32 * 8 + 4));
      *(float *)(param_1 + 0xbc) =
           (fVar12 - fVar11 * (fVar10 / fVar14)) / fVar13 + *(float *)(param_1 + 0xbc);
      pbVar32 = pbVar32 + 1;
      pbVar30 = pbVar43;
    }
    local_60 = 0x2117;
  }
LAB_0101e730:
  puVar4 = DAT_0101e974;
  *DAT_0101e970 = 0;
  *puVar4 = 0;
  return CONCAT44(param_1,local_60);
LAB_0101e50c:
  do {
  } while (*pcVar6 == '\0');
  FUN_0101e914(param_1);
LAB_0101e74c:
  uVar22 = *(uint *)(param_1 + 0x88);
  uVar23 = uVar33 + uVar22;
  uVar22 = iVar34 + *(int *)(param_1 + 0x8c) + (uint)CARRY4(uVar33,uVar22);
  uVar33 = uVar20 + *(uint *)(param_1 + 0x90);
  uVar29 = uVar25 + *(uint *)(param_1 + 0x98);
  iVar35 = iVar35 + *(int *)(param_1 + 0x9c) + (uint)CARRY4(uVar25,*(uint *)(param_1 + 0x98));
  uVar25 = uVar31 + *(uint *)(param_1 + 0xa0);
  uVar31 = iVar37 + *(int *)(param_1 + 0xa4) + (uint)CARRY4(uVar31,*(uint *)(param_1 + 0xa0));
  if (*(char *)(iVar7 + 0xa6) == '\0') {
    *(uint *)(pbVar8 + (int)pbVar30 * 8 + 8) = uVar23;
    *(uint *)((int)(pbVar8 + (int)pbVar30 * 8 + 8) + 4) = uVar22;
    uVar42 = FUN_0101e7d8(pbVar8);
    uVar42 = FUN_0101e7d8((int)uVar42,(int)((ulonglong)uVar42 >> 0x20),uVar29,iVar35);
    puVar15 = (uint *)((int)uVar42 + 0x338 + (int)pbVar30 * 8);
    *puVar15 = uVar25;
    puVar15[1] = uVar31;
    pbVar30 = (byte *)((ulonglong)uVar42 >> 0x20);
  }
  else {
    uVar28 = *(uint *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = uVar28 + uVar23;
    *(uint *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + uVar22 + CARRY4(uVar28,uVar23);
    uVar22 = *(uint *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar22 + uVar33;
    *(uint *)(param_1 + 0xcc) =
         iVar27 + *(int *)(param_1 + 0x94) + (uint)CARRY4(uVar20,*(uint *)(param_1 + 0x90)) +
         *(int *)(param_1 + 0xcc) + (uint)CARRY4(uVar22,uVar33);
    uVar20 = *(uint *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = uVar20 + uVar29;
    *(uint *)(param_1 + 0xd4) = iVar35 + *(int *)(param_1 + 0xd4) + (uint)CARRY4(uVar20,uVar29);
    uVar20 = *(uint *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0xd8) = uVar20 + uVar25;
    *(uint *)(param_1 + 0xdc) = uVar31 + *(int *)(param_1 + 0xdc) + (uint)CARRY4(uVar20,uVar25);
    pbVar30 = pbVar30 + 1;
  }
  goto LAB_0101e30c;
}

