
int FUN_0101f45c(byte *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  undefined4 local_120;
  byte local_11c;
  uint local_118;
  int local_114;
  uint local_110;
  float local_10c;
  float local_108;
  undefined1 *local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  undefined1 auStack_f0 [8];
  undefined1 local_e8;
  undefined1 local_e7;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  byte local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [8];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 auStack_60 [40];
  byte local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined4 uStack_28;
  
  iVar6 = DAT_0101ff58;
  local_118 = (uint)*param_1;
  uVar1 = *DAT_0101ff54;
  *(undefined1 *)(DAT_0101ff58 + 4) = 0x17;
  *(undefined1 *)(iVar6 + 8) = 0;
  uStack_28 = param_4;
  local_120 = (undefined1 *)FUN_0101ddf6(local_118,auStack_a8);
  if (local_120 == (undefined1 *)0x0) {
    FUN_0101deb2(local_118 & 0xff,2,0);
    local_120 = (undefined1 *)FUN_0101db98(DAT_0101f61c,local_118 & 0xff,0);
  }
  iVar6 = *(int *)(param_1 + 4);
  pbVar4 = (byte *)(iVar6 + 0xf0);
  if (*(char *)(iVar6 + 0xf1) == '\x01') {
    bVar7 = (byte)(-(uint)(*pbVar4 == 0) >> 0x1f);
  }
  else {
    bVar7 = 0;
  }
  bVar14 = *(char *)(iVar6 + 0xf2) == '\0';
  if (bVar14) {
    pbVar4 = (byte *)(uint)*pbVar4;
  }
  bVar2 = bVar14 && pbVar4 == (byte *)0x0;
  bVar14 = !bVar14 || pbVar4 != (byte *)0x0;
  local_104 = param_2;
  FUN_0101f870(auStack_98,iVar6 + 0xf8);
  local_e7 = 0;
  FUN_0101f86e(&local_e0);
  local_b7 = 0;
  local_b4 = 1;
  local_e8 = 1;
  local_67 = 0;
  local_b8 = bVar7;
  local_b6 = bVar2;
  local_b5 = bVar14;
  FUN_0101f86e(auStack_60);
  local_37 = 0;
  local_34 = 1;
  local_2f = 0;
  local_2e = 0;
  local_68 = 0;
  local_b0 = 0;
  *local_104 = 0;
  local_38 = bVar7;
  local_36 = bVar2;
  local_35 = bVar14;
  local_f8 = FUN_0101f896(uVar1,0,param_1 + 0x5c);
  local_fc = FUN_0101f896(uVar1,4,param_1 + 0x5c);
  local_100 = FUN_0101f896(uVar1,2,param_1 + 0x5c);
  local_110 = 0;
  local_114 = DAT_0101ff5c + local_118 * 0x54;
  do {
    if (local_120 != (undefined1 *)0x0) break;
    if ((int)((local_f8 >> (local_110 & 0xff)) << 0x1f) < 0) {
      local_11c = 0;
      do {
        if ((int)((local_fc >> local_11c) << 0x1f) < 0) {
          uVar10 = 0;
          do {
            if ((int)((local_100 >> (uVar10 & 0xff)) << 0x1f) < 0) {
              bVar7 = 0;
LAB_0101f5be:
              if (local_110 == 0) goto LAB_0101f7ac;
              if (param_1[0x5d] != 2) {
                bVar7 = 1;
              }
              if (*(char *)(DAT_0101ff60 + local_118 * 0xbc + 0x90) == '\x02') {
                local_e0 = 0;
                local_e7 = 1;
                switch(local_110) {
                case 1:
                  local_dc = *(undefined4 *)(local_114 + 0x5c);
                  break;
                case 2:
                  local_dc = *(undefined4 *)(local_114 + 100);
                  break;
                case 3:
                  local_dc = *(undefined4 *)(local_114 + 0x58);
                  break;
                case 4:
                  local_dc = *(undefined4 *)(local_114 + 0x60);
                  break;
                case 5:
                  local_dc = *(undefined4 *)(local_114 + 0x54);
                  break;
                case 6:
                  local_dc = *(undefined4 *)(local_114 + 0x6c);
                  break;
                case 7:
                  local_dc = *(undefined4 *)(local_114 + 0x68);
                  break;
                default:
                  local_d8 = 0x1e;
                  goto LAB_0101f60c;
                }
                local_d8 = 0x1e;
              }
LAB_0101f60c:
              uVar8 = local_110;
              if (1 < bVar7) goto LAB_0101f7d6;
              bVar3 = 1;
              do {
                uVar12 = uVar8 & 0xff;
                param_1[100] = bVar3;
                iVar6 = *(int *)(param_1 + 4);
                uVar11 = (uint)*param_1;
                uVar5 = uVar8 & 0xff;
                iVar13 = *(int *)(DAT_0101ff68 + uVar11 * 4);
                if (uVar5 == 1) {
                  local_120._0_1_ = 4;
                }
                else if (uVar5 == 2 || uVar5 == 3) {
                  local_120._0_1_ = 3;
                }
                else if (uVar5 == 4 || uVar5 == 5) {
                  local_120._0_1_ = 2;
                }
                else if (uVar5 == 6) {
                  local_120._0_1_ = 1;
                }
                else if (uVar5 == 7) {
                  local_120._0_1_ = 0;
                }
                local_120._0_2_ = CONCAT11(1,(undefined1)local_120);
                local_120 = (undefined1 *)(uint)CONCAT12(1,(undefined2)local_120);
                FUN_0101ccc6(&local_120,uVar11);
                iVar13 = iVar13 + 0x9b;
                pin_update(iVar13,1,1);
                pin_update(iVar13,8,8);
                FUN_0101dae4(uVar11,0,iVar6 + (short)uVar12 * 0x1c + 0x18);
                local_120 = auStack_70;
                FUN_0101f904(local_118 & 0xff,uVar8 & 0xff,bVar7,auStack_f0);
                FUN_0101f9ba(local_118 & 0xff,bVar7);
                *DAT_0101ff64 = 0;
                local_120 = (undefined1 *)FUN_0101fa2e(param_1,uVar8 & 0xff,bVar7,&local_10c);
                uVar8 = (uint)bVar7;
                if (local_120 == (undefined1 *)0x0) {
                  iVar13 = *(int *)(param_1 + 4);
                  iVar9 = 0;
                  iVar6 = (uint)(local_10c < *(float *)(iVar13 + 4)) << 0x1f;
                  if (iVar6 < 0) {
                    iVar9 = 0x2204;
                  }
                  if ((-1 < iVar6) &&
                     (fVar16 = (float)FUN_0101edc0(local_108 / local_10c),
                     fVar17 = *(float *)(iVar13 + 8),
                     fVar16 * -10.0 < fVar17 == (NAN(fVar16 * -10.0) || NAN(fVar17)))) {
                    iVar9 = 0x2205;
                  }
                  *(char *)(*(int *)(param_1 + 8) + uVar8 * 8 + uVar12 + 0x18) = (char)iVar9;
                  iVar6 = *(int *)(param_1 + 8) + uVar8 * 0x40 + uVar12 * 8;
                  *(float *)(iVar6 + 0x48) = local_10c;
                  *(float *)(iVar6 + 0x4c) = local_108;
                  local_120 = (undefined1 *)iVar9;
                  if (**(char **)(param_1 + 4) == '\0') {
                    local_120 = (undefined1 *)0x0;
                  }
                }
                FUN_0101fa08(local_118 & 0xff,bVar7);
                FUN_0101d920(local_118 & 0xff,0);
                *(byte *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + uVar8 * 8 + uVar12) =
                     (byte)(-(uint)(local_120 == (undefined1 *)0x0) >> 0x1f);
                *local_104 = 1;
LAB_0101f7ac:
                uVar8 = (uint)local_11c;
                do {
                  while( true ) {
                    bVar7 = bVar7 + 1;
                    if (5 < bVar7) goto LAB_0101f80e;
                    if (bVar7 == 0) goto LAB_0101f5be;
                    if (bVar7 == 2) break;
                    if ((bVar7 == 4) && (cVar15 = uVar8 == 0, !(bool)cVar15)) {
                      FUN_0101f862();
                      if (cVar15 == '\0') {
                        bVar7 = 5;
                      }
                      goto LAB_0101f7d6;
                    }
                  }
                  cVar15 = (uVar10 & 0xff) == 0;
                } while ((bool)cVar15);
                FUN_0101f862();
                uVar8 = uVar10;
                if (cVar15 == '\0') {
                  bVar7 = 3;
                }
LAB_0101f7d6:
                bVar3 = 0;
              } while( true );
            }
LAB_0101f80e:
            uVar10 = uVar10 + 1;
          } while (((uVar10 & 0xff) < 8) && (local_120 == (undefined1 *)0x0));
        }
        local_11c = local_11c + 1;
      } while ((local_11c < 8) && (local_120 == (undefined1 *)0x0));
    }
    local_110 = local_110 + 1;
  } while ((int)local_110 < 8);
  iVar6 = FUN_0101de6a(local_118 & 0xff,auStack_a8);
  if (local_120 == (undefined1 *)0x0) {
    local_120 = (undefined1 *)iVar6;
  }
  return (int)local_120;
}

