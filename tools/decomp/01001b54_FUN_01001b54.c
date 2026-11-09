
void FUN_01001b54(uint param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_28;
  
  puVar5 = DAT_0100268c;
  pbVar4 = DAT_01002688;
  iVar17 = 0;
  bVar13 = 3;
  uVar1 = *(ushort *)(DAT_0100215c + 0x22);
  local_28 = param_1;
  pin_update(DAT_01002690,7,3);
  if (*pbVar4 < 2) {
    *puVar5 = 3;
  }
  else {
    *puVar5 = 0;
  }
  if (*pbVar4 == 3) {
    pin_update(DAT_01002744,7,0);
    pin_update(DAT_01002748,7,7);
    pin_update(DAT_0100274c,7,7);
    bVar13 = 0;
  }
  FUN_01001a7e(local_28 & 0xff,1);
  puVar3 = DAT_01002518;
  iVar2 = DAT_01002464;
  local_3c = 0;
  local_38 = 0;
  local_34 = DAT_01002460;
  uVar14 = 0;
  local_40[0] = bVar13;
  local_30 = uVar1 & param_1 & 0xf;
  do {
    uVar15 = 1 << (uVar14 & 0xff);
    if ((local_30 & 0xff & uVar15) != 0) {
      FUN_01006102(uVar14 & 0xff,2,&local_3c,&local_38);
      if (*pbVar4 == 3) {
        if ((pbVar4[4] & uVar15) == 0) {
          if ((pbVar4[5] & uVar15) != 0) {
            iVar17 = 1;
          }
        }
        else {
          iVar17 = 0;
        }
        *(char *)(local_34 + uVar14) = (char)iVar17;
        puVar3[iVar17] = puVar3[iVar17] | local_3c;
      }
      else {
        iVar17 = 0;
        *(undefined1 *)(local_34 + uVar14) = 0;
        *puVar3 = *puVar3 | local_3c;
      }
      puVar3[2] = puVar3[2] | local_38;
      if (*(char *)(local_34 + uVar14) == '\0') {
        uVar15 = 3;
      }
      else {
        uVar15 = (uint)local_40[0];
      }
      puVar16 = puVar3 + iVar17 * 0x2c + 0x1ae;
      switch(uVar14) {
      case 0:
        FUN_010027dc(DAT_01002750,0x3c,uVar15 << 3 & 0xff | 4);
        FUN_01006102(0,3,&local_3c,puVar3 + 3);
        piVar6 = DAT_01002754;
        puVar3[iVar17 * 0x2c + 0x1b1] = *(uint *)(DAT_0100215c + 0x1a8);
        iVar10 = *piVar6;
        uVar15 = *puVar16 | *(uint *)(iVar10 + 0x34) & 0x200000;
        *puVar16 = uVar15;
        *puVar16 = uVar15 | *(uint *)(iVar10 + 0x34) & 0x100000;
        FUN_01003598(0);
        uVar15 = FUN_01006cb8(0,0);
        puVar3[iVar17 * 0x2c + 0x1b3] = uVar15;
        puVar3[iVar17 * 0x2c + 0x1b7] = puVar3[iVar17 * 0x2c + 0x1b7] | 1;
        FUN_010066a0();
        break;
      case 1:
        FUN_010027dc(DAT_01002758,0x3c,uVar15 << 3 & 0xff | 4);
        FUN_01006102(1,3,&local_3c,puVar3 + 4);
        piVar6 = DAT_01002754;
        puVar3[iVar17 * 0x2c + 0x1b2] = *(uint *)(DAT_0100215c + 0x264);
        iVar10 = piVar6[1];
        uVar15 = puVar3[iVar17 * 0x2c + 0x1af] | *(uint *)(iVar10 + 0x34) & 0x200000;
        puVar3[iVar17 * 0x2c + 0x1af] = uVar15;
        puVar3[iVar17 * 0x2c + 0x1af] = uVar15 | *(uint *)(iVar10 + 0x34) & 0x100000;
        FUN_01003598(1);
        uVar15 = FUN_01006cb8(0,1);
        puVar3[iVar17 * 0x2c + 0x1b4] = uVar15;
        puVar3[iVar17 * 0x2c + 0x1b7] = puVar3[iVar17 * 0x2c + 0x1b7] | 2;
        FUN_010066ba();
        break;
      case 2:
        FUN_010027dc(DAT_0100275c,0xf0,uVar15 << 4 & 0xff | 0x80);
        FUN_01006102(2,3,&local_3c,puVar3 + 5);
        uVar15 = FUN_01006cb8(5,0);
        puVar3[iVar17 * 0x2c + 0x1b5] = uVar15;
        FUN_0100360a(0);
        puVar3[iVar17 * 0x2c + 0x1b7] = puVar3[iVar17 * 0x2c + 0x1b7] | 4;
        FUN_010066d4();
        break;
      case 3:
        FUN_010027dc(DAT_01002760,0xf0,uVar15 << 4 & 0xff | 0x80);
        FUN_01006102(3,3,&local_3c,puVar3 + 6);
        uVar15 = FUN_01006cb8(5,1);
        puVar3[iVar17 * 0x2c + 0x1b6] = uVar15;
        FUN_0100360a(1);
        puVar3[iVar17 * 0x2c + 0x1b7] = puVar3[iVar17 * 0x2c + 0x1b7] | 8;
        FUN_01006702();
      }
      FUN_01001a9c(uVar14 & 0xff);
      **(undefined1 **)(iVar2 + 0x14 + uVar14 * 4) = 0;
      **(undefined1 **)(iVar2 + 0x24 + uVar14 * 4) = 0;
      iVar10 = (uint)(byte)puVar3[0xb] << 0x1d;
      if (iVar10 < 0) {
        uVar19 = FUN_010020b4((uint)(byte)puVar3[0xb],iVar10,0,1);
        uVar19 = FUN_010020b4((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),1,1);
        FUN_010020b4((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),2,1);
      }
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 4);
  if (-1 < (int)((uint)(byte)puVar3[0xb] << 0x1f)) {
    *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x38) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x38) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x38) = 0;
    *(undefined4 *)(*(int *)(iVar2 + 8) + 0x38) = 0;
    puVar3[0x1f2] = 0;
    iVar17 = DAT_01002764;
    iVar10 = 0;
    do {
      switch(*(byte *)(*(int *)(iVar17 + iVar10 * 4) + 0xda) >> 4 & 3) {
      case 0:
        uVar12 = 0x32;
        break;
      case 1:
        uVar12 = 100;
        break;
      case 2:
        uVar12 = 200;
        break;
      case 3:
        uVar12 = 400;
        break;
      default:
        goto switchD_01001e3a_default;
      }
      *(undefined2 *)((int)puVar3 + iVar10 * 2 + 0x7da) = uVar12;
switchD_01001e3a_default:
      *(undefined2 *)((int)puVar3 + iVar10 * 2 + 0x7d4) = 0;
      iVar11 = iVar10 + 1;
      *(undefined1 *)((int)puVar3 + iVar10 + 0x7d8) = 0;
      iVar10 = iVar11;
    } while (iVar11 < 2);
    puVar3[499] = 0;
    puVar3[500] = 0;
    if (pbVar4[1] == 2) {
      bVar13 = 0xd;
      do {
        FUN_01008070(bVar13,local_40);
        if (local_40[0] != 0x1c) {
          puVar3[499] = puVar3[499] | 1 << local_40[0];
          uVar14 = (uint)bVar13;
          bVar18 = uVar14 == 0xd;
          if (bVar18) {
            uVar14 = (uint)local_40[0];
          }
          if (bVar18) {
            puVar3[500] = uVar14;
          }
        }
        bVar13 = bVar13 + 1;
      } while (bVar13 < 0x13);
    }
    if (pbVar4[2] == 1) {
      uVar14 = 0;
      bVar13 = 7;
      do {
        FUN_01008070(bVar13,local_40);
        if (local_40[0] != 0x1c) {
          uVar14 = uVar14 | 1 << (uint)local_40[0];
          bVar8 = bVar13;
          if (bVar13 == 7) {
            bVar8 = local_40[0];
          }
          if (bVar13 == 7) {
            *(byte *)(puVar3 + 0x1f6) = bVar8;
          }
        }
        bVar13 = bVar13 + 1;
      } while (bVar13 < 10);
      *(short *)(puVar3 + 0x1f5) = (short)(uVar14 >> (sbyte)puVar3[0x1f6]);
      bVar13 = 10;
      uVar14 = 0;
      do {
        FUN_01008070(bVar13,local_40);
        if (local_40[0] != 0x1c) {
          uVar14 = uVar14 | 1 << (uint)local_40[0];
          bVar8 = bVar13;
          if (bVar13 == 10) {
            bVar8 = local_40[0];
          }
          if (bVar13 == 10) {
            *(byte *)((int)puVar3 + 0x7d9) = bVar8;
          }
        }
        bVar13 = bVar13 + 1;
      } while (bVar13 < 0xd);
      *(short *)((int)puVar3 + 0x7d6) = (short)(uVar14 >> *(sbyte *)((int)puVar3 + 0x7d9));
    }
    FUN_01008308(local_28 & 0xff,0,0);
    FUN_01008308(local_28 & 0xff,1,0);
    iVar17 = DAT_0100276c;
    puVar7 = DAT_01002768;
    *(undefined1 *)(DAT_0100276c + 0x46) = *DAT_01002768;
    FUN_01008f08(0);
    FUN_01009cf0(0,0,*(undefined1 *)((int)puVar3 + 0x7de),*(undefined1 *)((int)puVar3 + 0x791));
    FUN_01008ae0(0);
    FUN_01002f16(0);
    *(undefined1 *)(iVar17 + 0xa6) = puVar7[1];
    FUN_01008f08(1);
    FUN_01009cf0(1,0,*(undefined1 *)((int)puVar3 + 0x7de),*(undefined1 *)((int)puVar3 + 0x791));
    FUN_01008ae0(1);
    FUN_01002f16(1);
    FUN_01003032();
    *DAT_01002774 = *(undefined4 *)(DAT_01002770 + *(int *)(*(int *)(iVar2 + 0xc) + 0x34) * 4);
    FUN_01002dcc(0);
    FUN_01002dcc(1);
    if (-1 < (int)((uint)(byte)puVar3[0xb] << 0x1d)) {
      FUN_01002dcc(2);
    }
    FUN_01002de0(0);
    FUN_01002de0(1);
    if (-1 < (int)((uint)(byte)puVar3[0xb] << 0x1d)) {
      FUN_01002de0(2);
    }
    FUN_0100a2b4(0x13,2,6);
    if (*pbVar4 == 3) {
      FUN_0100a2b4(0x2b,2,6);
    }
    if ((puVar3[0xb] & DAT_01002778) == DAT_01002778) {
      FUN_0100a46a(*DAT_0100277c,DAT_0100277c[0xf]);
    }
  }
  puVar5[3] = puVar5[3] & 0xf;
  if (*pbVar4 < 2) {
    puVar5[3] = (char)(*(int *)(*(int *)(iVar2 + 0xc) + 0x34) << 4);
  }
  else {
    iVar17 = FUN_01001ae2(0);
    puVar5[3] = puVar5[3] | (byte)(puVar3[iVar17 + 0x1b3] << 4);
    if (*pbVar4 == 3) {
      iVar17 = FUN_01001ae2(1);
      puVar5[3] = puVar5[3] | (byte)(puVar3[iVar17 + 0x1df] << 5);
    }
  }
  FUN_01000490(0x79,3);
  FUN_01000490(0x7d,3);
  FUN_01000490(0x7a,3);
  uVar9 = FUN_01000490(0x7e,3);
  uVar9 = FUN_010020ac(uVar9,*(undefined4 *)(iVar2 + 4));
  uVar9 = FUN_010020ac(uVar9,*(undefined4 *)(iVar2 + 0xc));
  uVar9 = FUN_010020ac(uVar9,*(undefined4 *)(iVar2 + 8));
  FUN_010020ac(uVar9,*(undefined4 *)(iVar2 + 0x10));
  FUN_010019d6();
  return;
}

