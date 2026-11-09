
undefined8 FUN_01027df0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  int unaff_r10;
  int unaff_r11;
  char cVar14;
  bool bVar15;
  float extraout_s0;
  float extraout_s0_00;
  float fVar16;
  float extraout_s1;
  float fVar17;
  float unaff_s18;
  undefined8 uVar18;
  int local_48;
  
  uVar13 = *(uint *)(param_1[2] + 0x200) >> 1 & 1;
  if (*(int *)(param_2 + 0x1a0) == 0) {
    uVar4 = 1;
  }
  else {
    spi_notify_thunk(param_2 + 0x1d0,100);
    pfVar12 = (float *)(param_2 + 0x234);
    spi_notify_thunk(pfVar12,0x14);
    uVar11 = *(ushort *)(*param_1 + 2) + 1;
    if (param_3 == 1) {
      for (; bVar15 = 0x17 < uVar11, !bVar15; uVar11 = uVar11 + 1) {
        *(uint *)(param_2 + 0x1c4) = uVar11;
        uVar6 = *(uint *)(param_1[2] + 0x204) >> (uVar11 & 0xff);
        uVar10 = *(uint *)(param_2 + 0x1b0) >> (uVar11 & 0xff);
        uVar18 = FUN_01028468(*(uint *)(param_2 + 400) >> (uVar11 & 0xff));
        iVar1 = (int)((ulonglong)uVar18 >> 0x20);
        *(undefined4 *)(param_2 + 0x1c8) = 1;
        if ((int)(uVar10 << 0x1f) < 0) {
LAB_01027ec8:
          *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(param_2 + uVar11 * 4);
          fVar16 = *(float *)(param_2 + 200 + uVar11 * 4) * -1.0;
LAB_01027e6c:
          *(float *)(param_2 + 0x254) = fVar16;
        }
        else {
          if (-1 < (int)(uVar6 << 0x1f)) {
            if ((int)uVar18 << 0x1f < 0) goto LAB_01027ec8;
            cVar14 = uVar13 == 0;
            iVar1 = FUN_0102848a(iVar1 + 0xd4);
            fVar16 = extraout_s1;
            if (cVar14 != '\0') {
              fVar16 = *(float *)(iVar1 + 0x1c);
            }
            if (cVar14 == '\0') {
              fVar16 = *(float *)(iVar1 + 0x18);
            }
            fVar16 = extraout_s0 * -1.0 * fVar16;
            goto LAB_01027e6c;
          }
          iVar1 = FUN_0102848a(iVar1 + 0xd4);
          *(float *)(param_2 + 0x254) = extraout_s0_00 * -1.0 * *(float *)(iVar1 + 0x14);
        }
        if (uVar11 <= *(uint *)(*param_1 + 0xa8)) {
          FUN_01028502((uint *)(*param_1 + 0xa8));
        }
        FUN_0102727c(param_2 + 0x1c4);
      }
      while( true ) {
        local_48 = param_2 + 0x1c4;
        cVar14 = (int)(uVar11 - 0x18) < 0;
        if (bVar15) break;
        FUN_0102849a();
        if (cVar14 == '\0') {
          uVar6 = *(uint *)(param_2 + 0x198) >> (uVar11 & 0xff) & 1;
        }
        else {
          uVar6 = 1;
        }
        iVar1 = FUN_01028472();
        if ((cVar14 == '\0') &&
           (-1 < (int)((*(uint *)(param_2 + 0x1b8) >> (uVar11 & 0xff)) << 0x1f))) {
          if (unaff_r11 != 0) {
            *(undefined4 *)(param_2 + 0x248) = 0x3f800000;
            *(undefined4 *)(param_2 + 0x24c) = 0xbf800000;
            *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(iVar1 + 0x138 + uVar11 * 4);
            FUN_010284b6();
            FUN_010284e6();
          }
          if (unaff_r10 != 0) {
            iVar1 = FUN_0102845c();
            *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)(iVar1 + 0x19c + uVar11 * 4);
            *(undefined4 *)(param_2 + 0x1c8) = 1;
            FUN_010284e6(*(undefined4 *)(param_2 + 0x1c0),*(undefined4 *)(param_2 + 0x1c0));
          }
          if (unaff_r10 == 0 && unaff_r11 == 0) {
            if (uVar6 != 0) goto LAB_01027fc6;
            *(undefined4 *)(param_2 + 0x248) = 0;
            *(undefined4 *)(param_2 + 0x24c) = 0xbf800000;
            iVar1 = param_1[2] + uVar11 * 4;
            *(float *)(param_2 + 0x250) =
                 (*(float *)(iVar1 + 0x138) + *(float *)(iVar1 + 0x19c)) * unaff_s18;
            uVar18 = FUN_010284b6();
            fVar17 = (float)((ulonglong)uVar18 >> 0x20);
            fVar16 = (float)uVar18 * fVar17;
            *(float *)(param_2 + 0x254) = fVar16;
            cVar14 = '\x01';
            if (uVar13 == 0) {
              fVar17 = *(float *)(*param_1 + 0x1c);
            }
            if (uVar13 != 0) {
              fVar17 = *(float *)(*param_1 + 0x18);
            }
            FUN_010284c4(fVar16,fVar17);
            if (cVar14 != '\0') {
              FUN_01028502();
            }
            goto LAB_01027f48;
          }
        }
        else {
LAB_01027fc6:
          uVar18 = FUN_010284aa();
          puVar2 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
          *(undefined4 *)(param_2 + 0x248) = *puVar2;
          *(float *)(param_2 + 0x24c) =
               *(float *)(param_1[2] + 4 + uVar11 * 4) * (float)puVar2[0x19];
          *(undefined4 *)(param_2 + 0x250) = *(undefined4 *)((int)uVar18 + 300);
          *(undefined4 *)(param_2 + 0x1c8) = 1;
          *(undefined4 *)(param_2 + 0x254) = 0x3f800000;
LAB_01027f48:
          FUN_0102727c(local_48);
        }
        uVar11 = uVar11 + 1;
LAB_01027f50:
        bVar15 = 0x17 < uVar11;
      }
    }
    else {
      unaff_s18 = 0.5;
      if (param_3 == 2) goto LAB_01027f50;
      for (; cVar14 = (int)(uVar11 - 0x18) < 0, uVar11 < 0x18; uVar11 = uVar11 + 1) {
        FUN_0102849a();
        if (cVar14 == '\0') {
          uVar6 = *(uint *)(param_2 + 0x198) >> (uVar11 & 0xff) & 1;
        }
        else {
          uVar6 = 1;
        }
        iVar1 = FUN_01028472();
        if ((cVar14 == '\0') &&
           (-1 < (int)((*(uint *)(param_2 + 0x1b8) >> (uVar11 & 0xff)) << 0x1f))) {
          if (unaff_r11 != 0) {
            puVar7 = (undefined4 *)(iVar1 + 0x138 + uVar11 * 4);
            puVar2 = (undefined4 *)FUN_01028468();
            FUN_010284d4(*puVar7,*puVar2);
          }
          if (unaff_r10 != 0) {
            puVar2 = (undefined4 *)FUN_0102845c();
            FUN_010284d4(puVar2[uVar11 + 0x67],*puVar2);
          }
          if (unaff_r10 == 0 && unaff_r11 == 0) {
            if (uVar6 != 0) goto LAB_010280ba;
            FUN_01028468();
            cVar14 = '\x01';
            iVar1 = param_1[2] + uVar11 * 4;
            *(float *)(param_2 + 0x250) =
                 (*(float *)(iVar1 + 0x138) - *(float *)(iVar1 + 0x19c)) * 0.5;
            *(uint *)(param_2 + 0x1c8) = uVar11;
            fVar17 = *(float *)(param_2 + 0x1c0);
            fVar16 = *(float *)(param_2 + 0x1c0) * fVar17;
            *(float *)(param_2 + 0x254) = fVar16;
            if (uVar13 == 0) {
              fVar17 = *(float *)(*param_1 + 0x1c);
            }
            if (uVar13 != 0) {
              fVar17 = *(float *)(*param_1 + 0x18);
            }
            FUN_010284c4(fVar16,fVar17);
            if (cVar14 != '\0') {
              FUN_01028502();
            }
            goto LAB_01028048;
          }
        }
        else {
LAB_010280ba:
          uVar18 = FUN_010284aa();
          puVar2 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
          uVar4 = *puVar2;
          *(undefined4 *)(param_2 + 0x248) = uVar4;
          *(undefined4 *)(param_2 + 0x24c) = uVar4;
          *(float *)(param_2 + 0x250) =
               *(float *)((int)uVar18 + 300) -
               ((float *)param_1[2])[uVar11 + 1] * (float)puVar2[0x19] * *(float *)param_1[2];
          *(uint *)(param_2 + 0x1c8) = uVar11;
          *(undefined4 *)(param_2 + 0x254) = 0x3f800000;
LAB_01028048:
          FUN_0102727c(param_2 + 0x1c4);
        }
      }
    }
    if (*(int *)(param_2 + 0x1cc) == 1) {
      *pfVar12 = *pfVar12 / *(float *)(param_2 + 0x1d0);
    }
    else {
      FUN_0102742c(param_2 + 0x1d0,pfVar12);
    }
    if (param_3 == 2) {
      pfVar3 = (float *)param_1[2];
      if ((int)((uint)*(byte *)(pfVar3 + 0x80) << 0x1f) < 0) {
        *pfVar3 = *pfVar3 * (1.0 - *(float *)(*param_1 + 4)) + *pfVar12 * *(float *)(*param_1 + 4);
      }
      else {
        *pfVar3 = *pfVar12;
      }
      pfVar3[0x80] = (float)((uint)pfVar3[0x80] | 1);
    }
    else {
      for (uVar13 = 0; uVar13 < *(uint *)(param_2 + 0x1cc); uVar13 = uVar13 + 1) {
      }
      uVar13 = 0;
      iVar1 = param_2 + 600;
      do {
        uVar11 = uVar13;
        if (param_3 == 1) {
          uVar11 = 1;
        }
        *(uint *)(param_2 + 0x1c8) = uVar11;
        uVar4 = FUN_01027404(pfVar12,uVar13,uVar11,*(undefined4 *)(param_2 + 0x1cc));
        iVar8 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(iVar1 + iVar8) = uVar4;
      } while (uVar13 < 0x19);
      if (param_3 == 1) {
        for (uVar13 = 0; uVar13 <= *(ushort *)(*param_1 + 2); uVar13 = uVar13 + 1) {
          *(undefined4 *)(iVar1 + uVar13 * 4) =
               *(undefined4 *)(param_2 + (uint)*(ushort *)(*param_1 + 2) * 4 + 0x25c);
        }
      }
      uVar13 = 0;
      do {
        if (param_3 == 1) {
          iVar8 = param_1[2];
          fVar16 = *(float *)(iVar1 + uVar13 * 4);
          if (*(int *)(iVar8 + 0x204) == 0) {
            *(float *)(iVar8 + 4 + uVar13 * 4) = fVar16;
          }
          else {
            *(float *)(iVar8 + 4 + uVar13 * 4) =
                 *(float *)(iVar8 + 4 + uVar13 * 4) * (1.0 - *(float *)(*param_1 + 4)) +
                 fVar16 * *(float *)(*param_1 + 4);
          }
        }
        else if (param_3 == 3) {
          iVar9 = param_1[2];
          iVar8 = *(int *)(iVar9 + 0x208);
          bVar15 = iVar8 == 0;
          if (bVar15) {
            iVar8 = *(int *)(iVar9 + 0x20c);
          }
          if (bVar15 && iVar8 == 0) {
            *(undefined4 *)(iVar9 + uVar13 * 4 + 0x68) = *(undefined4 *)(iVar1 + uVar13 * 4);
          }
          else {
            iVar9 = iVar9 + uVar13 * 4;
            *(float *)(iVar9 + 0x68) =
                 *(float *)(iVar9 + 0x68) * (1.0 - *(float *)(*param_1 + 4)) +
                 *(float *)(iVar1 + uVar13 * 4) * *(float *)(*param_1 + 4);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x19);
      uVar13 = 0;
      do {
        uVar11 = 1 << (uVar13 & 0xff);
        iVar1 = param_2 + uVar13 * 4;
        if (param_3 == 1) {
          iVar8 = param_1[2];
          puVar5 = (uint *)(iVar8 + 0x204);
          uVar6 = *puVar5 >> (uVar13 & 0xff) & 1;
          if ((int)((*(uint *)(param_2 + 0x1b0) >> (uVar13 & 0xff)) << 0x1f) < 0) {
            pfVar12 = (float *)(iVar8 + uVar13 * 4 + 0xd4);
            if (uVar6 == 0) {
              *pfVar12 = *(float *)(iVar1 + 600);
            }
            else {
              *pfVar12 = *pfVar12 * (1.0 - *(float *)(*param_1 + 4)) +
                         *(float *)(iVar1 + 600) * *(float *)(*param_1 + 4);
            }
            *puVar5 = uVar11 | *puVar5;
          }
          else if (uVar6 == 0) {
            pfVar12 = (float *)(iVar8 + uVar13 * 4 + 0xd4);
            *pfVar12 = *pfVar12 * (1.0 - *(float *)(*param_1 + 4)) +
                       *(float *)(iVar1 + 600) * *(float *)(*param_1 + 4);
          }
        }
        else if (param_3 == 3) {
          pfVar12 = (float *)param_1[2];
          uVar6 = (uint)pfVar12[0x82] >> (uVar13 & 0xff) & 1;
          uVar10 = (uint)pfVar12[0x83] >> (uVar13 & 0xff) & 1;
          if ((int)((*(uint *)(param_2 + 0x1b4) >> (uVar13 & 0xff)) << 0x1f) < 0) {
            fVar16 = *(float *)(iVar1 + 600) - *pfVar12;
            if (uVar6 == 0) {
              pfVar12[uVar13 + 0x4e] = fVar16;
            }
            else {
              pfVar12[uVar13 + 0x4e] =
                   pfVar12[uVar13 + 0x4e] * (1.0 - *(float *)(*param_1 + 4)) +
                   fVar16 * *(float *)(*param_1 + 4);
            }
            pfVar12[0x82] = (float)(uVar11 | (uint)pfVar12[0x82]);
          }
          else if ((int)((*(uint *)(param_2 + 0x1b8) >> (uVar13 & 0xff)) << 0x1f) < 0) {
            fVar16 = -*(float *)(iVar1 + 600) - *pfVar12;
            if (uVar10 == 0) {
              pfVar12[uVar13 + 0x67] = fVar16;
            }
            else {
              pfVar12[uVar13 + 0x67] =
                   pfVar12[uVar13 + 0x67] * (1.0 - *(float *)(*param_1 + 4)) +
                   fVar16 * *(float *)(*param_1 + 4);
            }
            pfVar12[0x83] = (float)(uVar11 | (uint)pfVar12[0x83]);
          }
          else if (uVar6 == 0 && uVar10 == 0) {
            iVar8 = *param_1;
            fVar16 = *(float *)(iVar8 + 4);
            pfVar12[uVar13 + 0x4e] =
                 pfVar12[uVar13 + 0x4e] * (1.0 - fVar16) +
                 (*(float *)(iVar1 + 600) - *pfVar12) * fVar16;
            fVar16 = *(float *)(iVar8 + 4);
            pfVar12[uVar13 + 0x67] =
                 pfVar12[uVar13 + 0x67] * (1.0 - fVar16) +
                 (-*(float *)(iVar1 + 600) - *pfVar12) * fVar16;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < 0x19);
    }
    uVar4 = 0;
  }
  return CONCAT44(param_4,uVar4);
}

