
int FUN_010378fa(ushort *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  int extraout_r1;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  int iVar20;
  int iVar21;
  ushort *puVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort *puVar25;
  bool bVar26;
  bool bVar27;
  
  puVar19 = DAT_0103850c;
  puVar10 = DAT_01038508;
  puVar4 = DAT_01038504;
  uVar3 = DAT_01038500;
  uVar2 = DAT_010384fc;
  iVar20 = DAT_010384f8;
  iVar14 = DAT_010384e4;
  iVar21 = 0;
  if (*(char *)(DAT_010384f8 + 0x1c) == '\0') {
    *(undefined1 *)(DAT_010384f8 + 0x1c) = 1;
    FUN_0103c140(param_1,puVar19);
    FUN_0103c33a(DAT_01038510);
    FUN_0103c33a(puVar10);
LAB_01037968:
    *(undefined2 *)(iVar20 + 0x10) = 0;
    *(undefined2 *)(iVar20 + 0x12) = 0x1000;
    *(undefined4 *)(iVar20 + 8) = 0;
    *(undefined2 *)(iVar20 + 0xc) = 0;
    puVar1 = DAT_010384f4;
    *(ushort **)(iVar20 + 0x18) = param_1;
    *puVar1 = puVar19;
    puVar1[3] = iVar14;
    puVar1[0xc] = uVar3;
    puVar1 = DAT_010384f4;
    *(undefined4 *)(puVar4 + 2) = uVar2;
    puVar1[2] = iVar20 + 0xe;
    FUN_0103d024(puVar19);
  }
  else if (*(char *)(DAT_010384f8 + 0x1c) == '\x02') {
    *(undefined1 *)(DAT_010384f8 + 0x1c) = 1;
    FUN_0103c140(param_1,puVar19);
    goto LAB_01037968;
  }
  FUN_0103cfd2();
  if (*(int *)puVar19 == 0) {
    iVar21 = 0x4801;
  }
  if (*(char *)(DAT_01038514 + 0x77d) == '\0') {
    uVar15 = *DAT_01038518;
    if (*(int *)puVar19 != 0) {
      FUN_0100adea(0x2d);
      iVar21 = DAT_010384f8;
      *(undefined2 *)(DAT_010384f8 + 0xe) = 0;
      uVar12 = (uint)puVar19[3] | (byte)*puVar19 & 3;
      puVar19[3] = (ushort)uVar12;
      uVar16 = 0;
      do {
        if ((uVar12 & 1 << (uVar16 & 0xff)) != 0) {
          iVar20 = iVar21 + uVar16 * 0x14;
          *(int *)(iVar20 + 0x2c) = *(int *)(iVar20 + 0x2c) + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < 2);
      uVar6 = *DAT_0103851c;
      puVar19[2] = uVar6;
      iVar20 = (uint)uVar6 << 0x15;
      if (-1 < iVar20) {
        *(ushort *)(iVar21 + 0x14) = (ushort)((uint)iVar20 >> 0x1f);
      }
      if ((short)*DAT_0103851c < 0) {
        FUN_0103c33a(DAT_01038510);
        FUN_0103c33a(puVar10);
        *DAT_0103851c = puVar19[2];
      }
      puVar5 = DAT_01038520;
      if ((int)((uint)puVar19[2] << 0x12) < 0) {
        DAT_01038524[5] = *DAT_01038520 | 0x808;
      }
      else {
        DAT_01038524[5] = *DAT_01038520;
      }
      if ((int)((uint)puVar19[2] << 0x17) < 0) {
        puVar5[2] = *DAT_0103851c & 0xf;
        puVar5[3] = (ushort)(((uint)*DAT_0103851c << 0x18) >> 0x1c);
      }
      iVar21 = DAT_01038528;
      puVar19 = DAT_0103850c;
      uVar12 = 0;
      do {
        if (((uint)puVar19[3] & 1 << (uVar12 & 0xff)) != 0) {
          *(undefined1 *)(iVar21 + uVar12 * 0x14) = 1;
          FUN_010298e2(uVar12 & 0xff,iVar21 + uVar12 * 0x14);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 2);
      FUN_01038380();
      *(undefined2 *)(DAT_010384f8 + 0x10) = 1;
      FUN_0100ae0a(0x2e,1);
      uVar12 = 0;
      do {
        if (((uint)puVar19[3] & 1 << (uVar12 & 0xff)) != 0) {
          *(short *)((int)DAT_010384f4 + 0x12) = (short)uVar12;
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 2);
      FUN_01023ba8(uVar15,DAT_010384f4,0x10,0,&LAB_0103801c_1,&LAB_01038020_1,&LAB_01038024_1,
                   &LAB_0103838c_1,&LAB_01038390_1,&LAB_0103807c_1,1);
      iVar21 = thunk_FUN_010383e8(puVar19,DAT_01038510,param_1);
      FUN_0100ae0a(0x2e,0);
      puVar1 = DAT_010384f4;
      if (iVar21 != 0) {
        return 0;
      }
      *(undefined1 *)(DAT_010384f4 + 4) = 1;
      *(undefined1 *)(puVar1 + 5) = 1;
      puVar24 = (ushort *)0x1;
      puVar22 = (ushort *)0x1;
      uVar12 = 0;
      iVar21 = 0;
      puVar25 = puVar19;
      do {
        puVar1 = DAT_010384f4;
        puVar23 = (ushort *)0x0;
        puVar18 = puVar25;
        do {
          if (puVar22 == (ushort *)0x0) {
            puVar25 = (ushort *)(-(uint)(puVar23 == (ushort *)0x0) >> 0x1f);
          }
          else {
            puVar25 = puVar23;
            if (puVar23 != (ushort *)0x0) {
              puVar25 = (ushort *)0x1;
            }
          }
          iVar20 = FUN_01037fdc();
          if (iVar20 != 0) {
            *(short *)((int)puVar1 + 0x12) = (short)puVar25;
            uVar6 = (ushort)((int)puVar25 << 3);
            if (uVar12 == 0) {
              uVar11 = 0x481;
LAB_01037bbe:
              uVar6 = uVar6 | uVar11;
            }
            else {
              puVar13 = (ushort *)-((int)((uint)puVar19[2] << 0x14) >> 0x1f);
              puVar17 = puVar13;
              if (puVar13 == (ushort *)0x0) {
                puVar17 = puVar22;
              }
              if (puVar13 == (ushort *)0x0 && puVar25 == puVar17) {
                uVar6 = uVar6 | (ushort)((int)(short)puVar5[6] << 5) |
                        (ushort)((int)(short)puVar5[5] << 4);
                uVar11 = 0x681;
                goto LAB_01037bbe;
              }
              uVar6 = uVar6 | 0x681;
            }
            *(ushort *)((int)puVar1 + 0x16) = uVar6;
            mailbox_xfer(0x2f,(byte *)((int)puVar25 + uVar12 * 10 + 0xb));
            if (uVar12 == 0) {
              puVar7 = (undefined1 *)0x10381f5;
            }
            else {
              puVar7 = &LAB_01038214_1;
            }
            FUN_01023ba8(uVar15,puVar1,0x4c,0,&LAB_0103801c_1,&LAB_01038020_1,0,&LAB_0103838c_1,
                         &LAB_01038390_1,puVar7,1);
            iVar20 = FUN_01023cb0(uVar15,0xffffffff);
            if (iVar20 == 1) {
              uVar8 = FUN_010232b8();
              iVar9 = FUN_010289ba(3);
              if (*(ushort **)(iVar9 + 4) == param_1) {
                FUN_010380b8(puVar1);
              }
              else {
                iVar20 = 2;
              }
              restore_priority(uVar8);
            }
            if (iVar20 == 1) {
              iVar20 = FUN_01037fbe(param_1,*(undefined4 *)(param_1 + 0x14));
            }
            if (iVar20 != 0) {
              if (iVar20 == 2 || iVar20 == 5) {
                iVar21 = 0x4802;
              }
              else {
                iVar21 = 0x4803;
                if ((iVar20 != 3) && (iVar20 == 4)) {
                  iVar21 = 0x4804;
                }
              }
            }
            mailbox_xfer(0x2f,0);
          }
          if (puVar24 == (ushort *)0x0) {
            if (puVar5[((uint)puVar18 & 0xffff) + 5] != 0) {
              uVar8 = FUN_0103c7f4(DAT_01038510 + ((uint)puVar18 & 0xffff) * 0x260);
              FUN_0103d500((uint)puVar18 & 0xffff,uVar8,puVar19);
            }
          }
          else {
            puVar24 = (ushort *)0x0;
          }
          puVar13 = DAT_01038510;
          puVar17 = puVar5 + 5;
          if (puVar17[(int)puVar25] != 0) {
            if (uVar12 == 0) {
              FUN_010383ce();
            }
            else {
              FUN_010383dc(puVar19,DAT_01038510,param_1);
            }
            puVar18 = DAT_0103851c;
            if (iVar21 != 0) {
              *DAT_0103852c = 0;
              puVar17 = (ushort *)0xffff;
              puVar18[3] = 0xffff;
              break;
            }
            puVar17 = puVar13 + (int)puVar25 * 0x260;
            iVar9 = FUN_0103c6c0(uVar12 & 0xff,puVar19,puVar17,puVar1);
            iVar20 = DAT_010384f8;
            if (iVar9 == 0) {
              puVar17 = (ushort *)((int)puVar25 * 0x14);
              uVar16 = ((uint)*(ushort *)(DAT_010384f8 + 0x12) << 0x14) >> 0x1c;
              *(uint *)((int)puVar17 + DAT_010384f8 + 0x28) = uVar16;
              bVar26 = 7 < uVar16;
              if (bVar26) {
                uVar16 = 7;
              }
              if (bVar26) {
                *(uint *)((int)puVar17 + iVar20 + 0x28) = uVar16;
              }
            }
            else {
              FUN_01037fd4();
              puVar17[(int)puVar25] = 0;
            }
          }
          puVar23 = (ushort *)((int)puVar23 + 1);
          puVar18 = puVar25;
        } while (puVar23 < (ushort *)0x2);
        *(undefined1 *)(DAT_010384f4 + 5) = 0;
        if (uVar12 == 0) {
          uVar6 = puVar5[5];
          bVar26 = (ushort *)(uint)uVar6 != (ushort *)0x1;
          puVar22 = (ushort *)(uint)uVar6;
          if (!bVar26) {
            puVar22 = puVar5;
          }
          if (!bVar26) {
            puVar17 = (ushort *)(uint)puVar22[6];
          }
          if (bVar26 || puVar17 != (ushort *)0x1) {
            bVar26 = uVar6 != 0;
          }
          else {
            bVar26 = *(byte *)((int)puVar13 +
                              (uint)(byte)puVar13[1] * 0x18 +
                              (uint)*(byte *)((int)puVar13 + 3) * 0x18 + 0x2f) >> 1 <=
                     *(byte *)((int)puVar13 +
                              (uint)(byte)puVar10[1] * 0x18 +
                              (uint)*(byte *)((int)puVar10 + 3) * 0x18 + 0x4ef) >> 1;
          }
          puVar22 = (ushort *)(-(uint)!bVar26 >> 0x1f);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 2);
      puVar18 = (ushort *)((uint)puVar25 & 0xffff);
      if (*(short *)(iVar14 + (int)puVar18 * 2) != 0) {
        uVar15 = FUN_0103c7f4(puVar13 + (int)puVar18 * 0x260);
        FUN_0103d500((uint)puVar25 & 0xffff,uVar15);
        iVar14 = extraout_r1;
        puVar18 = puVar19;
      }
      iVar20 = DAT_010384f8;
      bVar26 = puVar5[5] == 0;
      if (bVar26) {
        puVar18 = puVar5;
      }
      if (bVar26) {
        iVar14 = (int)(short)puVar18[6];
      }
      if (bVar26 && iVar14 == 0) {
        return iVar21;
      }
      bVar27 = *(short *)(DAT_010384f8 + 0xe) == 0;
      bVar26 = bVar27 && iVar21 == 0;
      if (bVar27 && iVar21 == 0) {
        puVar24 = puVar13 + 0x4c0;
        bVar26 = -1 < (int)((uint)puVar13[0x4c2] << 0x14);
      }
      if (bVar26) {
        puVar19 = (ushort *)(uint)puVar5[6];
        if ((puVar5[5] & puVar5[6]) != 0) {
          iVar14 = (uint)*puVar13 - (uint)*puVar10;
          if (iVar14 < 0) {
            iVar14 = -iVar14;
          }
          if (*(int *)(puVar24 + 0x24) < iVar14) {
            if (puVar22 == (ushort *)0x0) {
              puVar5[6] = 0;
            }
            else {
              puVar5[5] = 0;
            }
          }
        }
        puVar1 = DAT_010384f4;
        uVar12 = 0;
        do {
          FUN_01037fd4();
          if (puVar19[uVar12] != 0) {
            puVar19 = puVar13 + uVar12 * 0x260;
            FUN_0103c98c(uVar12 & 0xff,uVar3,puVar19,puVar1);
            uVar6 = FUN_01037fd4();
            puVar19[uVar12] = uVar6;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 2);
        uVar6 = puVar5[5];
        iVar14 = (int)(short)uVar6;
        puVar10 = puVar5;
        if (iVar14 == 0) {
          puVar10 = (ushort *)(int)(short)puVar5[6];
        }
        if (iVar14 == 0 && puVar10 == (ushort *)0x0) goto LAB_01037fb2;
        puVar4[1] = (ushort)(iVar14 << 2) | (ushort)((int)(short)puVar5[6] << 3) | 0x2090;
        *(undefined1 *)puVar4 = 1;
        FUN_01037fc4(uVar6 != 1);
        FUN_01037fe8();
        iVar14 = FUN_01037fba();
        if (iVar14 != 0) {
          if (iVar14 == 2 || iVar14 == 5) {
            iVar21 = 0x4802;
          }
          else if ((iVar14 == 3) || (iVar14 != 4)) {
            iVar21 = 0x4803;
          }
          else {
            iVar21 = 0x4804;
          }
        }
        mailbox_xfer(0x30,0);
        bVar26 = iVar21 == 0;
        if (bVar26) {
          bVar26 = *(short *)(iVar20 + 0xe) == 0;
        }
      }
      if (!bVar26) {
        return iVar21;
      }
      uVar12 = 0;
      do {
        iVar14 = FUN_01037fdc();
        if (iVar14 != 0) {
          FUN_0103c830(uVar12 & 0xff,uVar3,uVar2,puVar24);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 2);
      while ((int)(short)puVar5[6] + (int)(short)puVar5[5] != 0) {
        puVar10 = param_1;
        FUN_010383dc(DAT_01038510 + 0x4c0);
        FUN_01037fc4(puVar5[5] != 1);
        FUN_01037fe8();
        iVar14 = FUN_01037fba();
        if (iVar14 != 0) {
          if (iVar14 == 2 || iVar14 == 5) {
            iVar21 = 0x4802;
          }
          else if ((iVar14 == 3) || (iVar14 != 4)) {
            iVar21 = 0x4803;
          }
          else {
            iVar21 = 0x4804;
          }
        }
        mailbox_xfer(0x30,0);
        puVar19 = DAT_01038510;
        if (iVar21 != 0) {
          return iVar21;
        }
        if (*(short *)(iVar20 + 0xe) != 0) {
          return 0;
        }
        puVar24 = DAT_01038510 + 0x4c0;
        uVar12 = 0;
        do {
          FUN_01037fd4();
          if (puVar10[uVar12] != 0) {
            puVar10 = puVar24;
            FUN_0103ca30(uVar12 & 0xff,uVar2,puVar24,puVar19 + uVar12 * 0x260);
            iVar14 = FUN_01037fd4();
            puVar10[uVar12] = (ushort)iVar14;
            if (iVar14 == 0) {
              puVar4[1] = puVar4[1] & (&DAT_01038568)[uVar12];
              puVar10 = puVar4;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 2);
      }
      if (*(short *)(iVar20 + 0xe) == 0) {
        *DAT_01038524 = puVar4[1];
      }
    }
  }
  else {
    iVar21 = 0x4806;
  }
LAB_01037fb2:
  FUN_0103cfec();
  return iVar21;
}

