
uint FUN_010373a8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  uint uVar16;
  
  uVar6 = 0;
  do {
    bVar7 = 1;
    uVar5 = 0;
    uVar4 = 0;
    iVar13 = 1;
    iVar9 = 1;
    uVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    if ((int)((param_1 >> (uVar6 & 0xff)) << 0x1f) < 0) {
      bVar14 = ((uint)*(ushort *)(DAT_01037870 + 0x22) & 1 << (uVar6 & 0xff)) == 0;
      if (bVar14) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(DAT_01037870 + uVar6 * 0xbc + 0x19c) >> 1;
      }
      uVar1 = (uint)!bVar14;
      fVar15 = (float)VectorUnsignedToFloat
                                (*(undefined4 *)(DAT_01037874 + uVar6 * 0x54 + 0xec),
                                 (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = fVar15 / DAT_0103762c;
      uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037630,3);
      if (uVar16 < uVar2) {
        if ((DAT_01037878 <= uVar2) || (uVar1 == 0)) {
LAB_01037428:
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_010376ec,3);
          if (uVar2 <= uVar16) goto LAB_0103747a;
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037714,3);
          if ((uVar2 <= uVar16) && (uVar1 != 0)) {
            iVar13 = 4;
            uVar4 = 3;
            goto LAB_010374aa;
          }
          goto LAB_010374ae;
        }
      }
      else {
        uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037714,3);
        if (uVar2 <= uVar16) goto LAB_01037428;
        if (uVar1 != 0) {
          uVar4 = 1;
          iVar13 = 2;
          uVar10 = 1;
          goto LAB_010375c8;
        }
LAB_0103747a:
        uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037718,3);
        if (uVar16 < uVar2) {
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_010376ec,3);
          if ((uVar2 <= uVar16) && (uVar1 != 0)) {
            iVar13 = 8;
            uVar4 = 7;
LAB_010374aa:
            uVar10 = 1;
            goto LAB_010375c8;
          }
LAB_010374e8:
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037720,3);
          if (uVar2 <= uVar16) goto LAB_0103751e;
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_0103771c,3);
          if ((uVar16 < uVar2) || (uVar1 == 0)) goto LAB_0103755a;
          bVar7 = 4;
          uVar5 = 3;
LAB_01037554:
          iVar13 = 8;
          uVar11 = 1;
          uVar10 = 1;
          uVar4 = 7;
        }
        else {
LAB_010374ae:
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_0103771c,3);
          if (uVar2 <= uVar16) goto LAB_010374e8;
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037718,3);
          if ((uVar2 <= uVar16) && (uVar1 != 0)) {
            uVar5 = 1;
            iVar13 = 8;
            bVar7 = 2;
            uVar11 = 1;
            uVar10 = 1;
            uVar4 = 7;
            goto LAB_010375c8;
          }
LAB_0103751e:
          uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037724,3);
          if (uVar16 < uVar2) {
            uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037720,3);
            if (uVar16 < uVar2) {
LAB_01037594:
              uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037728,3);
              if ((uVar2 <= uVar16) && (uVar1 != 0)) {
                bVar7 = 8;
                uVar5 = 7;
                goto LAB_010375b8;
              }
            }
            else if (uVar1 != 0) {
              bVar7 = 8;
              uVar5 = 7;
              goto LAB_01037554;
            }
LAB_010375c6:
            uVar1 = 0;
            uVar10 = 0;
            uVar4 = 0;
          }
          else {
LAB_0103755a:
            uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037728,3);
            if (uVar2 <= uVar16) goto LAB_01037594;
            uVar16 = VectorFloatToUnsigned(fVar15 * DAT_01037724,3);
            if ((uVar16 < uVar2) || (uVar1 == 0)) goto LAB_010375c6;
            bVar7 = 4;
            uVar5 = 3;
LAB_010375b8:
            iVar13 = 8;
            iVar9 = 3;
            uVar4 = 7;
            uVar10 = 1;
            uVar8 = 2;
            uVar11 = 1;
            uVar12 = 1;
          }
        }
      }
LAB_010375c8:
      iVar3 = DAT_0103787c + uVar6 * 0x2c;
      *(char *)(iVar3 + 8) = *(char *)(DAT_01037870 + 0x77d) << 3;
      *(byte *)(iVar3 + 9) = (byte)(iVar13 << 4) | 10;
      *(byte *)(iVar3 + 10) = bVar7 | (byte)(iVar9 << 4);
      *(undefined1 *)(iVar3 + 0x15) = 1;
      bVar7 = (byte)(uVar1 << 1);
      *(byte *)(iVar3 + 6) = bVar7 | (byte)(uVar1 << 3);
      *(byte *)(iVar3 + 7) = bVar7;
      *(char *)(iVar3 + 0xb) = (char)uVar1;
      *(char *)(iVar3 + 0xc) = (char)uVar1;
      *(undefined1 *)(iVar3 + 0xf) = uVar4;
      *(undefined1 *)(iVar3 + 0xd) = 0;
      *(undefined1 *)(iVar3 + 0x11) = uVar5;
      *(undefined1 *)(iVar3 + 0x14) = uVar12;
      *(undefined1 *)(iVar3 + 0x10) = uVar10;
      *(undefined1 *)(iVar3 + 0x12) = uVar11;
      *(undefined1 *)(iVar3 + 0x13) = uVar8;
      FUN_0100fcae(uVar6 & 0xff);
      *(undefined1 *)(DAT_01037880 + uVar6) = 1;
    }
    uVar6 = uVar6 + 1;
    if (1 < uVar6) {
      return param_1;
    }
  } while( true );
}

