
int FUN_01021508(undefined4 param_1,uint *param_2,int param_3,int param_4,byte param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  char cVar18;
  undefined8 uVar19;
  char local_104 [4];
  uint local_100;
  uint local_fc;
  byte local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  uint local_d8;
  byte *local_d4;
  uint local_d0;
  undefined4 local_cc;
  byte *local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  int local_84;
  int local_80 [2];
  undefined8 local_78;
  uint local_70;
  byte local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  uint local_38;
  undefined4 local_30;
  uint *local_2c;
  int local_28;
  
  local_ec = 0;
  local_fc = 0;
  local_88 = param_2[1] >> 0x15 & 1 ^ 1;
  local_100 = 0;
  local_d8 = (uint)*DAT_01021f14;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_4;
  FUN_01020fbc(&local_fc,&local_100);
  FUN_010214a0(local_28,local_2c);
  iVar14 = local_28;
  puVar4 = local_2c;
  uVar9 = local_30;
  local_8c = *(undefined4 *)(DAT_01022114 + 0x44);
  uVar16 = 0;
  local_90 = *(undefined4 *)(DAT_01022114 + 0x48);
  iVar7 = 0;
  if ((char)local_2c[3] == '\0') {
    local_e8 = 0;
    do {
      uVar12 = (uint)*(byte *)(DAT_01021c78 + uVar16);
      if (((int)((0xc00000U >> uVar12) << 0x1f) < 0) && ((int)((*puVar4 >> uVar12) << 0x1f) < 0)) {
        FUN_0102146e(local_80);
        local_e8 = FUN_01021172(uVar12,uVar9,local_80,param_5);
        iVar6 = FUN_01021da2(iVar14,0,uVar12,local_e8);
        iVar7 = local_e8;
        if (iVar6 != 0) goto LAB_01021c04;
      }
      uVar16 = uVar16 + 1;
      iVar7 = local_e8;
    } while (uVar16 < 0x18);
  }
  uVar16 = DAT_01021f50;
  switch((char)puVar4[3]) {
  case '\0':
    local_ec = 0x1f;
    break;
  case '\x01':
    puVar4[1] = puVar4[1] & DAT_01021f50;
    puVar4[2] = puVar4[2] & uVar16;
    local_ec = 0x11;
    break;
  case '\x02':
    local_ec = 0xe;
    break;
  case '\x03':
    local_ec = 8;
    break;
  default:
    *(undefined4 *)(iVar14 + 0x28) = 0xe105;
  }
  if (*(char *)(DAT_01022118 + 0x20) != '\0') {
    local_ec = local_ec & 0xfffffff5;
  }
  uVar16 = local_100;
  iVar6 = param_3;
  local_30 = uVar9;
  local_2c = puVar4;
  if ((local_ec & 0xc) != 0) {
    local_28 = iVar14;
    bVar5 = FUN_0102129c(2,puVar4);
    iVar14 = local_28;
    uVar12 = 0;
    do {
      if (((int)((uint)(bVar5 >> (uVar12 & 0xff)) << 0x1f) < 0) && (param_5 == 0)) {
        iVar7 = FUN_01036000(uVar12 & 0xff,0,0);
        if (iVar7 != 0) goto LAB_01021c00;
      }
      uVar12 = uVar12 + 1;
      uVar16 = local_100;
      iVar6 = param_3;
    } while ((int)uVar12 < 2);
  }
  for (; local_28 = iVar14, local_f0 = iVar6, uVar16 < local_fc; uVar16 = uVar16 + 1) {
    bVar5 = *DAT_0102211c;
    local_c8 = DAT_0102211c;
    bVar17 = bVar5 == 0;
    if (bVar17) {
      bVar5 = *(byte *)(DAT_01022118 + 0x20);
    }
    if ((!bVar17 || bVar5 != 0) && (param_5 == 0)) {
      iVar14 = DAT_01022120 + uVar16 * 8;
      FUN_01006cfc(0,DAT_01022120,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0xc));
      FUN_01006cfc(1,extraout_r1,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0xc));
      FUN_01006cfc(2,extraout_r1_00,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0xc));
      FUN_01006cfc(3,extraout_r1_01,*(undefined4 *)(iVar14 + 8),*(undefined4 *)(iVar14 + 0xc));
    }
    FUN_01006d30(2);
    FUN_01006d30(3);
    iVar14 = DAT_01022124;
    uVar12 = (uint)*local_c8;
    if ((uVar12 != 0) && (uVar12 = (uint)param_5, uVar12 == 0)) {
      uVar12 = DAT_01022120 + uVar16 * 4;
      *(undefined4 *)(uVar12 + 0x210) = *(undefined4 *)(DAT_01022124 + 0x498);
      *(undefined4 *)(uVar12 + 0x310) = *(undefined4 *)(iVar14 + 0x610);
      *(undefined4 *)(uVar12 + 0x410) = *(undefined4 *)(iVar14 + 0x554);
      *(undefined4 *)(uVar12 + 0x510) = *(undefined4 *)(iVar14 + 0x6cc);
    }
    FUN_01021c88(uVar12,*DAT_01022128);
    FUN_01021c88(DAT_01022128,DAT_01022128[1]);
    local_c0 = 0;
    do {
      uVar12 = *(uint *)(DAT_0102212c + local_c0 * 4);
      bVar5 = FUN_0102129c(uVar12,local_2c);
      iVar14 = DAT_01022130;
      if ((int)((local_ec >> (uVar12 & 0xff)) << 0x1f) < 0) {
        uVar15 = 0;
        do {
          if (((int)((uint)(bVar5 >> (uVar15 & 0xff)) << 0x1f) < 0) && (param_5 == 0)) {
            FUN_0100a880(uVar15 & 0xff,uVar12);
            if (uVar12 == 2 || uVar12 == 3) {
              FUN_010360da(uVar15 * 0x1c + iVar14);
            }
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 2);
        spi_notify_thunk(local_f0,0x30);
        local_38 = FUN_010213cc(uVar12,bVar5,local_f0 + 0x3c);
        local_94 = 0xe >> (uVar12 & 0xff);
        local_98 = local_94 & 1;
        for (local_c4 = 0; local_c4 < local_38; local_c4 = local_c4 + 1) {
          iVar14 = local_f0 + local_c4 * 8;
          local_d4 = (byte *)(iVar14 + 0x3c);
          bVar1 = *(byte *)(iVar14 + 0x3d);
          uVar15 = (uint)bVar1;
          local_f8 = bVar1 + 2;
          local_dc = (uint)local_f8;
          local_e4 = (uint)*local_d4;
          local_84 = DAT_01022124;
          bVar5 = *local_c8;
          bVar17 = bVar5 == 0;
          if (bVar17) {
            bVar5 = *(byte *)(DAT_01022118 + 0x20);
          }
          if ((!bVar17 || bVar5 != 0) && (local_c8[3] == 0)) {
            FUN_01007f1e(uVar15,1);
            FUN_01007f1e(local_dc & 0xff,1);
          }
          iVar14 = DAT_01022114;
          *(undefined4 *)(DAT_01022114 + 0x44) = local_8c;
          *(undefined4 *)(iVar14 + 0x48) = local_90;
          bVar5 = local_d4[2];
          if (bVar5 != 0) {
            bVar5 = 1;
          }
          uVar8 = local_e4;
          if (local_e4 != 1) {
            uVar8 = 0;
          }
          FUN_01006c2c(uVar8,uVar12,uVar15,bVar5);
          local_f4 = FUN_01006cb8(uVar12,uVar15);
          uVar8 = local_e4;
          if (local_e4 != 0) {
            uVar8 = 1;
          }
          uVar19 = FUN_01006dfc(uVar8 & 0xff,uVar12,uVar15);
          local_a8 = uVar19;
          iVar6 = FUN_01006cb8(5,uVar15);
          uVar19 = FUN_01006dfc(uVar8 & 0xff,5,uVar15);
          local_b8 = uVar19;
          local_cc = FUN_01006dc0(uVar8 & 0xff,uVar12,uVar15);
          if ((local_e4 == 1) && (local_98 != 0)) {
            if (local_f4 != 2) {
              iVar7 = 0xe110;
              iVar14 = local_28;
              goto LAB_01021c00;
            }
            iVar7 = 0;
          }
          local_ac = local_f0 + uVar12 * 2 + uVar15;
          *(byte *)(local_ac + 0x30) = *(byte *)(local_ac + 0x30) | (byte)(1 << (local_f4 & 0xff));
          local_9c = (short)(ushort)bVar1 * 0x1c;
          builtin_strncpy(local_104,"\x01\x01\x01\x01",4);
          local_b0 = local_9c + DAT_01022130;
          if ((param_5 == 0) && (local_88 != 0)) {
            if (local_98 != 0) {
              *(undefined8 *)(iVar6 * 0x60 + DAT_01022110) = local_b8;
              FUN_01009d6a((undefined4)local_b8,local_b8._4_4_,iVar6);
              FUN_0103624a(local_b0,2);
            }
            FUN_01021c7c();
            iVar7 = stream_event_dispatcher(DAT_01022128[uVar15],uVar12,local_cc,0,1,0,local_94 & 1)
            ;
            iVar14 = local_28;
            if (iVar7 != 0) goto LAB_01021c00;
          }
          iVar14 = local_28;
          iVar3 = DAT_01022130;
          local_bc = DAT_01022114 + iVar6;
          uVar8 = 0;
          local_a0 = DAT_01022134;
          local_e8 = iVar7;
          local_e0 = iVar6;
          do {
            local_d0 = (uint)*(byte *)(DAT_01021c78 + uVar8);
            uVar19 = FUN_01021de0(local_d8,uVar16,uVar12,local_f4,local_d0,local_2c,local_d4,
                                  local_f0,uVar15,(char)local_2c[3],local_100);
            uVar9 = (undefined4)((ulonglong)uVar19 >> 0x20);
            if ((int)uVar19 == 0) {
              FUN_0102146e(local_80);
              uVar13 = 0x1ffU >> (local_d0 & 0xff) & 1;
              uVar10 = uVar15;
              if ((int)((DAT_01021f50 >> (local_d0 & 0xff)) << 0x1f) < 0) {
                cVar18 = local_104[uVar15] == '\0';
                uVar19 = local_a8;
                if (!(bool)cVar18) {
                  FUN_01021c94();
                  uVar19 = local_a8;
                  if (cVar18 != '\0') {
                    *(undefined1 *)(local_b0 + 1) = 2;
                    uVar9 = FUN_0100a7dc();
                    *(undefined4 *)(iVar3 + 4 + local_9c) = uVar9;
                    iVar7 = FUN_010362b0(local_b0,0);
                    bVar17 = iVar7 == 0;
                    if (bVar17) {
                      if (*(char *)(local_bc + 5) != '\0') {
                        if (local_e0 == 0) {
                          FUN_01013a76(0xc,1);
                          FUN_01008f08(0,0);
                          uVar9 = 0;
                        }
                        else {
                          if (local_e0 != 1) goto LAB_01021a06;
                          FUN_01013a76(0xe,1);
                          FUN_01008f08(1,0);
                          uVar9 = 1;
                        }
                        FUN_01009094(uVar9,0);
                      }
LAB_01021a06:
                      if (uVar12 == 2) {
                        iVar7 = FUN_0101a690(local_f8,3,0,0);
                        bVar17 = iVar7 == 0;
                        if (!bVar17) goto LAB_01021a42;
                      }
                      FUN_01009cf0(local_f4,0,*(undefined1 *)(local_a0 + uVar15),
                                   *(undefined1 *)(DAT_01022114 + 0xbf + local_f4));
                      iVar7 = FUN_010214bc((undefined4)local_a8,local_a8._4_4_,local_f4,uVar12,
                                           uVar15);
                      bVar17 = iVar7 == 0;
                    }
LAB_01021a42:
                    if (!bVar17) goto LAB_01021c00;
                    FUN_01025880(uVar15,*(int *)(DAT_01022138 + uVar12 * 8 + uVar15 * 4) + 0x2c);
                    uVar19 = local_a8;
                  }
                }
              }
              else {
                if (uVar13 == 0) {
                  *(undefined4 *)(iVar14 + 0x28) = 0xe106;
                  iVar7 = 0xe106;
                  goto LAB_01021c04;
                }
                cVar18 = local_104[uVar15 + 2] == '\0';
                if (!(bool)cVar18) {
                  FUN_01021c94();
                  if (cVar18 != '\0') {
                    if (uVar12 == 2 || uVar12 == 3) {
                      if (*(char *)(local_bc + 5) != '\0') {
                        if (local_e0 == 0) {
                          uVar9 = 0xc;
                        }
                        else {
                          if (local_e0 != 1) goto LAB_01021ab4;
                          uVar9 = 0xe;
                        }
                        FUN_01013a76(uVar9,0);
                      }
LAB_01021ab4:
                      if (uVar12 == 2) {
                        iVar7 = FUN_0101a690(local_f8,1,0,0);
                        bVar17 = iVar7 == 0;
                        if (!bVar17) goto LAB_01021a42;
                      }
                    }
                    FUN_01009cf0(local_e0,*(undefined1 *)
                                           (local_84 + 0x3c + (short)(ushort)bVar1 * 0xbc),
                                 *(undefined1 *)(local_a0 + local_dc),
                                 *(undefined1 *)(local_bc + 0xbf));
                    iVar7 = FUN_010214bc((undefined4)local_b8,local_b8._4_4_,local_e0,uVar12,
                                         local_dc & 0xff);
                    bVar17 = iVar7 == 0;
                    if (!bVar17) goto LAB_01021a42;
                    if (local_e4 == 1) {
                      *(undefined1 *)(DAT_01022110 + 0xd0) = 0;
                      FUN_01031d86(DAT_01022128[uVar15],local_cc,1);
                    }
                  }
                }
                local_58 = local_e0;
                uVar10 = local_dc & 0xff;
                uVar19 = local_b8;
                local_50 = local_b8;
              }
              local_80[0] = 1 << uVar10;
              local_60 = local_f4;
              local_64 = local_d8;
              local_40 = (undefined1)local_e4;
              local_5c = (uint)*(byte *)(local_ac + 0x30);
              local_3f = (undefined1)local_2c[3];
              uVar10 = (uint)*local_c8;
              bVar17 = uVar10 == 0;
              if (bVar17) {
                uVar10 = (uint)*(byte *)(DAT_01022118 + 0x20);
              }
              uVar2 = uVar10;
              if (!bVar17 || uVar10 != 0) {
                uVar2 = local_100;
              }
              local_70 = uVar16;
              local_68 = uVar12;
              local_54 = local_f4;
              local_48 = local_a8;
              local_78 = uVar19;
              if ((!bVar17 || uVar10 != 0) && uVar16 != uVar2) {
                iVar7 = DAT_01022120 + local_d0 * 8;
                if (uVar12 == 2) {
                  puVar11 = (undefined4 *)(iVar7 + 0x6d0);
                }
                else {
                  puVar11 = (undefined4 *)(iVar7 + 0x610);
                }
                bVar5 = FUN_0101bb08(*puVar11,puVar11[1],uVar16);
                local_6c = bVar5 & 1 ^ 1;
              }
              else {
                local_6c = 0;
              }
              local_e8 = FUN_01021172(local_d0 & 0xff,local_30,local_80,param_5);
              if (uVar13 != 0) {
                FUN_0101cf98(uVar15);
              }
              uVar19 = FUN_01021da2(iVar14,uVar15,local_d0 & 0xff,local_e8);
              uVar9 = (undefined4)((ulonglong)uVar19 >> 0x20);
              iVar7 = local_e8;
              if ((int)uVar19 != 0) goto LAB_01021c04;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x18);
          iVar7 = local_e8;
          local_28 = iVar14;
          if (param_5 == 0) {
            bVar17 = local_88 == 0;
            if (!bVar17) {
              FUN_01021c7c(local_88,uVar9,local_cc);
              iVar7 = stream_event_dispatcher(DAT_01022128[uVar15],uVar12);
              bVar17 = iVar7 == 0;
            }
            iVar14 = local_28;
            if (!bVar17) goto LAB_01021c00;
          }
        }
      }
      local_c0 = local_c0 + 1;
    } while (local_c0 < 5);
    iVar6 = local_f0;
    iVar14 = local_28;
  }
LAB_01021c04:
  iVar6 = DAT_01022130;
  iVar14 = DAT_01022114;
  *(undefined4 *)(DAT_01022114 + 0x44) = local_8c;
  *(undefined4 *)(iVar14 + 0x48) = local_90;
  FUN_0103624a(iVar6,2);
  FUN_0103624a(iVar6 + 0x1c,2);
  return iVar7;
LAB_01021c00:
  local_28 = iVar14;
  *(int *)(local_28 + 0x28) = iVar7;
  goto LAB_01021c04;
}

