
void FUN_01014e14(byte *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int extraout_r1;
  undefined4 extraout_r1_00;
  uint extraout_r1_01;
  uint uVar10;
  byte *extraout_r1_02;
  byte *extraout_r1_03;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint unaff_r11;
  uint uVar16;
  bool bVar17;
  undefined8 uVar18;
  uint local_34;
  undefined1 local_30;
  
  bVar14 = *param_1;
  uVar5 = FUN_01014694(2);
  uVar5 = uVar5 & bVar14;
  uVar6 = FUN_01014694(0xc);
  bVar14 = (byte)uVar5 | (byte)uVar6;
  periph_init_d(1);
  pbVar2 = DAT_01015488;
  if (*DAT_01015488 == 1) {
    if (*DAT_0101548c < 2) {
      FUN_010146be(0,bVar14);
    }
    else {
      FUN_010146be(1,bVar14);
    }
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_01014df6(bVar14);
  }
  if (((int)((uint)bVar14 << 0x1f) < 0) && (DAT_01015444[0x14] == 1 || DAT_01015444[0x14] == 3)) {
    FUN_0102ceb6();
  }
  if (iVar7 == 0) {
    iVar7 = 0;
    uVar12 = 0;
    do {
      if ((int)((uVar5 >> (uVar12 & 0xff)) << 0x1f) < 0) {
        FUN_010151b8();
        iVar7 = (**(code **)(extraout_r1 + 8))();
      }
      do {
        uVar12 = uVar12 + 1;
        if (3 < (int)uVar12) goto LAB_01014eb4;
      } while (iVar7 != 0);
    } while( true );
  }
LAB_01014eb4:
  uVar3 = DAT_01015490;
  uVar12 = 0;
  local_34 = uVar6;
  do {
    uVar6 = 1 << (uVar12 & 0xff);
    uVar16 = unaff_r11;
    if (((uVar5 & (1 << (uVar12 + 2 & 0xff) | uVar6)) != 0) &&
       (uVar6 = (local_34 >> (uVar12 & 0xff)) << 0x1f, -1 < (int)uVar6)) {
      iVar13 = *(int *)(DAT_01015478 + (uVar12 & 0xff) * 4);
      iVar15 = *(int *)(DAT_01015478 + (uVar12 + 2 & 0xff) * 4);
      FUN_0101d28e(*(undefined1 *)(iVar13 + 2),*(uint *)(iVar13 + 0x34) & 0xf80000);
      FUN_010050e0(1 << *(sbyte *)(iVar13 + 1),0);
      pin_update(*(int *)(DAT_01015494 + (uint)*(byte *)(iVar13 + 1) * 4) + 0x3c,1,1);
      FUN_0102553e(1 << *(sbyte *)(iVar13 + 1));
      FUN_0102d67c(*(undefined1 *)(iVar13 + 1));
      if (*(char *)(iVar13 + 1) == '\0') {
        FUN_010151c2(uVar3);
        pin_update(uVar3,0x10,0x10);
        FUN_010151c8(uVar3,extraout_r1_00,0);
        uVar9 = uVar3;
      }
      else {
        FUN_010151c2(DAT_01015498);
        pin_update(DAT_01015498,0x10,0x10);
        pin_update(DAT_01015498,0x20,0);
        uVar9 = DAT_01015498;
      }
      uVar16 = DAT_01015494;
      pin_update(uVar9,0x10,unaff_r11 & 0x10);
      pin_update(*(int *)(uVar16 + (uint)*(byte *)(iVar13 + 1) * 4) + 0x3b,1,1);
      iVar8 = FUN_010151ac();
      pin_update(iVar8 + 0x3b);
      iVar8 = FUN_010151ac();
      pin_update(iVar8 + 0x3c);
      uVar6 = *(uint *)(iVar13 + 8);
      bVar17 = uVar6 != 1;
      if (!bVar17) {
        uVar6 = (uint)*(byte *)(iVar15 + 0x31);
      }
      if (bVar17 || uVar6 != 0) {
        FUN_0102db4c(*(undefined1 *)(iVar13 + 2),7,0,0);
      }
      else {
        FUN_0102db4c(*(undefined1 *)(iVar13 + 2),7,1,0);
      }
      uVar6 = (uint)(!bVar17 && uVar6 == 0);
      FUN_0102db4c(*(undefined1 *)(iVar13 + 2),8,uVar6,0);
      if ((int)((uVar5 >> (uVar12 & 0xff)) << 0x1f) < 0) {
        uVar16 = *(uint *)(iVar13 + 8);
        if (uVar16 != 0xffffffff) {
LAB_0101500e:
          uVar9 = FUN_01006cb8(uVar16,uVar12 & 0xff);
          uVar6 = (uint)*(byte *)(iVar13 + 2);
          FUN_01009518(uVar9,uVar16,uVar6,1);
          bVar17 = *(char *)(iVar13 + 0x2c) == '\0';
          uVar10 = extraout_r1_01;
          if (bVar17) {
            uVar10 = (uint)*(byte *)(iVar15 + 0x2c);
          }
          if (!bVar17 || uVar10 != 0) {
            FUN_01006c2c(1,uVar16,*(undefined1 *)(iVar13 + 1),1);
            FUN_01009518(*(undefined4 *)(DAT_01015424 + (uint)*(byte *)(iVar13 + 1) * 4 + 0x4c),
                         uVar16,*(undefined1 *)(iVar13 + 2),1);
            uVar6 = (uint)*(byte *)(iVar13 + 1);
            FUN_01006c2c(1,uVar16,uVar6,0);
          }
        }
      }
      else {
        uVar6 = (uint)*DAT_01015438;
        if ((uVar6 & 1 << (uVar12 + 4 & 0xff)) != 0) {
          uVar16 = 1;
          goto LAB_0101500e;
        }
      }
    }
    uVar12 = uVar12 + 1;
    unaff_r11 = uVar16;
  } while ((int)uVar12 < 2);
  FUN_0102dd0e(4);
  FUN_0100815e(4);
  pbVar11 = pbVar2;
  if (pbVar2[3] == 0) {
    thunk_EXT_FUN_200345ca(uVar5);
    pbVar11 = extraout_r1_02;
  }
  if (bVar14 != 0) {
    uVar6 = (uint)DAT_0101549c[10];
    pbVar11 = DAT_0101549c;
  }
  if ((bVar14 != 0 && uVar6 != 0x1c) && (pbVar11 = DAT_01015444, *(int *)(DAT_01015444 + 0xc) != 0))
  {
    uVar18 = pin_update(DAT_010154a0,0xf);
    FUN_01015272((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0);
    pbVar11 = extraout_r1_03;
  }
  if (iVar7 == 0) {
    pbVar11 = (byte *)(uint)*pbVar2;
  }
  if (iVar7 == 0 && pbVar11 == (byte *)0x1) {
    FUN_01001b54(uVar5);
  }
  FUN_0102e658(*(undefined1 *)(DAT_01015420 + 0xc));
  uVar6 = 0;
  do {
    iVar13 = FUN_0102b506(uVar6 & 0xff);
    if ((((*(char *)(iVar13 + 5) == '\x02') && ((*(uint *)(iVar13 + 0x14) & uVar5) != 0)) &&
        ((int)((*(uint *)(*(int *)(iVar13 + 0x18) + 0x34) >> *(sbyte *)(iVar13 + 6)) << 0x1f) < 0))
       && (FUN_0102b510(*(undefined1 *)(iVar13 + 4)), iVar7 == 0)) {
      iVar15 = DAT_010154a4 + uVar6 * 0x2c;
      if (*(int *)(*(int *)(iVar15 + 0x20) + 4) != 0) {
        local_30 = 5;
        local_34 = *(uint *)(iVar15 + 4);
        iVar7 = (**(code **)(*(int *)(iVar15 + 0x20) + 4))(iVar13,&local_34);
        if (iVar7 != 0) goto LAB_0101511e;
      }
      FUN_0102b584(iVar13,2);
    }
LAB_0101511e:
    uVar6 = uVar6 + 1;
    if (0x13 < (int)uVar6) {
      uVar4 = FUN_01014694(0xc);
      *DAT_010154a8 = uVar4;
      iVar13 = DAT_01015428;
      if (pbVar2[3] == 2) {
        uVar6 = 0;
        do {
          if (*(char *)(iVar13 + uVar6 + 0x18) != '\0') {
            FUN_0100b302(uVar6);
            FUN_0100b558(uVar6,2);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 2);
      }
      puVar1 = DAT_01015438;
      if (iVar7 == 0) {
        bVar14 = 0;
        do {
          uVar6 = (uint)bVar14;
          if ((int)((uVar5 >> (uint)bVar14) << 0x1f) < 0) {
            FUN_01008252(uVar6,0);
          }
          if (((int)((uVar5 >> (uint)(byte)(bVar14 + 2)) << 0x1f) < 0) &&
             (FUN_01008252(uVar6 + 4,0), ((uint)*puVar1 & 1 << (uint)(byte)(bVar14 + 4)) != 0)) {
            FUN_01008252(uVar6 + 2,0);
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < 2);
      }
      FUN_010153b8(4,0,iVar7);
      return;
    }
  } while( true );
}

