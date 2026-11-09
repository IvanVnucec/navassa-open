
undefined8 FUN_0103fcce(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 in_r3;
  int unaff_r6;
  undefined1 *unaff_r7;
  int unaff_r8;
  int iVar14;
  ushort uVar15;
  char cVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  uint uVar11;
  
  FUN_0103fdb8();
  uVar21 = DAT_01040268;
  if (unaff_r7[2] == '\0') {
    uVar6 = FUN_0102ef64();
    iVar10 = unaff_r6 + 0x74;
    uVar15 = *(ushort *)(unaff_r7 + 4);
    uVar2 = *(ushort *)(unaff_r7 + 6);
    fVar19 = *(float *)(unaff_r6 + 0x60);
    fVar20 = *(float *)(unaff_r6 + 0x6c);
    iVar7 = FUN_0103fdb8();
  }
  else {
    uVar6 = FUN_0102ef7c(*unaff_r7,*(undefined1 *)(unaff_r6 + 5));
    sVar5 = (short)uVar6 - *(short *)(unaff_r6 + 0x6a);
    uVar11 = (int)*(short *)(unaff_r6 + 0x6a) + uVar6;
    uVar9 = (undefined2)uVar11;
    if (sVar5 < 10) {
      sVar5 = 10;
    }
    *(short *)(unaff_r7 + 8) = sVar5;
    if (0x3ff < (uVar11 & 0xffff)) {
      uVar9 = 0x3ff;
    }
    *(undefined2 *)(unaff_r7 + 10) = uVar9;
    iVar10 = unaff_r6 + 0x78;
    uVar15 = *(ushort *)(unaff_r7 + 8);
    uVar2 = *(ushort *)(unaff_r7 + 10);
    fVar19 = *(float *)(unaff_r6 + 100);
    fVar20 = *(float *)(unaff_r6 + 0x70);
    iVar7 = FUN_0103fdb8();
  }
  uVar4 = (uint)uVar2;
  uVar11 = (uint)uVar15;
  if (iVar7 == 0) {
    iVar7 = FUN_0103fdb8();
  }
  in_fpscr = in_fpscr & 0xfffffff;
  if (fVar20 <= ABS(0.0 - fVar19)) {
    if (iVar7 == 0) {
      uVar15 = 0;
      do {
        fVar18 = 0.0 - fVar19;
        sVar5 = *(short *)(iVar10 + (uint)uVar15 * 2);
        iVar14 = (int)sVar5;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < 0.0) << 0x1f | (uint)(fVar18 == 0.0) << 0x1e;
        in_fpscr = uVar1 | (uint)NAN(fVar18) << 0x1c;
        if (unaff_r7[2] == '\0') {
          if (-1 < (int)uVar1) {
LAB_010400e6:
            iVar14 = (int)-sVar5;
          }
        }
        else {
          bVar3 = (byte)(uVar1 >> 0x18);
          if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
          goto LAB_010400e6;
        }
        do {
          uVar6 = uVar6 + iVar14;
          uVar8 = uVar6 & 0xffff;
          bVar17 = SBORROW4(uVar8,uVar11);
          iVar7 = uVar8 - uVar11;
          uVar1 = uVar11;
          if (uVar11 <= uVar8) {
            bVar17 = SBORROW4(uVar4,uVar8);
            iVar7 = uVar4 - uVar8;
            uVar1 = uVar4;
          }
          cVar16 = uVar8 == uVar1;
          if (iVar7 < 0 != bVar17) {
            uVar6 = uVar6 - iVar14;
            iVar7 = 0x2e04;
            goto LAB_010401d6;
          }
          FUN_0104026c();
          if (cVar16 == '\0') {
            FUN_0102ee6c();
          }
          else {
            FUN_0102ee4a();
            if (*(char *)(unaff_r6 + 6) == '\x02') {
              FUN_01040278();
            }
          }
          iVar7 = FUN_0103fdb8();
          uVar21 = 0;
          if (iVar7 != 0) goto LAB_010401d6;
          uVar12 = 0xffffffff;
          if (unaff_r7[2] == '\0') {
            if (iVar14 < 1) {
LAB_0104017e:
              uVar12 = 1;
            }
          }
          else if (-1 < iVar14) goto LAB_0104017e;
          fVar18 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
          in_fpscr = in_fpscr & 0xfffffff;
        } while (fVar20 <= fVar18 * (0.0 - fVar19));
        iVar7 = 0;
        *(undefined1 *)(unaff_r8 + 0xc) = 1;
        if ((ABS(0.0 - fVar19) < ABS(0.0 - fVar19)) &&
           ((uVar6 = uVar6 - iVar14, unaff_r7[2] != '\0' ||
            (FUN_0102ee4a(*unaff_r7,*(undefined1 *)(unaff_r6 + 5),uVar6 & 0xffff),
            *(char *)(unaff_r6 + 6) == '\x02')))) {
          FUN_01040278();
        }
LAB_010401d6:
        uVar15 = uVar15 + 1;
        cVar16 = uVar15 == 1;
      } while (uVar15 < 2);
      FUN_0104026c();
      if (cVar16 == '\0') {
        FUN_0102ee6c();
        puVar13 = (undefined4 *)(unaff_r8 + 0x18 + (uint)(byte)unaff_r7[1] * 4);
        iVar10 = 0x24;
      }
      else {
        FUN_0102ee4a();
        if (*(char *)(unaff_r6 + 6) == '\x02') {
          FUN_01040278();
        }
        puVar13 = (undefined4 *)(unaff_r8 + 0x14 + (uint)(byte)unaff_r7[1] * 4);
        iVar10 = 0x20;
      }
      *puVar13 = 0;
      *(undefined4 *)(unaff_r8 + iVar10 + (uint)(byte)unaff_r7[1] * 4) = uVar21;
    }
  }
  else {
    *(undefined1 *)(unaff_r8 + 0xc) = 1;
    if (unaff_r7[2] == '\0') {
      *(undefined4 *)(unaff_r8 + 0x14 + (uint)(byte)unaff_r7[1] * 4) = 0;
      *(undefined4 *)(unaff_r8 + 0x20 + (uint)(byte)unaff_r7[1] * 4) = 0;
    }
    else {
      *(undefined4 *)(unaff_r8 + 0x18 + (uint)(byte)unaff_r7[1] * 4) = 0;
      *(undefined4 *)(unaff_r8 + 0x24 + (uint)(byte)unaff_r7[1] * 4) = 0;
    }
  }
  if (iVar7 == 0x2e04) {
    iVar7 = 0;
    *(undefined1 *)(unaff_r8 + 0xc) = 0;
    if ((unaff_r7[2] != '\0') ||
       (FUN_0102ee4a(*unaff_r7,*(undefined1 *)(unaff_r6 + 5),
                     *(undefined2 *)(unaff_r8 + (uint)(byte)unaff_r7[1] * 2 + 0xe)),
       *(char *)(unaff_r6 + 6) == '\x02')) {
      FUN_0102ee6c(*unaff_r7,*(undefined1 *)(unaff_r6 + 5),
                   *(undefined2 *)(unaff_r8 + (uint)(byte)unaff_r7[1] * 2 + 0x10));
    }
  }
  return CONCAT44(in_r3,iVar7);
}

