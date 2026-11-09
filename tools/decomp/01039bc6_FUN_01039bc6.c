
int FUN_01039bc6(uint param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte local_f0;
  uint local_ec;
  int local_e4;
  byte *local_e0;
  byte local_d0 [4];
  int local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  byte local_b8 [16];
  uint local_a8 [4];
  uint local_98 [4];
  uint local_88 [4];
  byte local_78 [16];
  int local_68 [17];
  
  local_cc = 0;
  local_68[0x10] = param_2;
  FUN_0102229c(local_68,0x20,0);
  for (bVar4 = 0; bVar4 < 0x10; bVar4 = bVar4 + 1) {
    local_b8[bVar4] = bVar4;
  }
  do {
    uVar2 = FUN_0103d6c0();
  } while (uVar2 == 0);
  for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
    if ((int)((param_1 >> (uVar9 >> 1 & 0xff)) << 0x1f) < 0) {
      for (bVar4 = 0; bVar4 < 0x10; bVar4 = bVar4 + 1) {
        FUN_0103a02c(uVar9,bVar4,0,local_68 + uVar9 * 2);
      }
    }
    local_88[uVar9] = 0x7fffffff;
  }
  local_e4 = FUN_0103a0e2(*(undefined1 *)(DAT_0103a204 + 2),param_1,local_98);
  if (local_e4 == 0) {
    local_ec = 0;
    uVar9 = local_ec;
    while (local_ec = uVar9, local_cc == 0) {
      bVar1 = false;
      while (!bVar1) {
        if (local_ec == 0) {
          local_e0 = DAT_0103a230;
        }
        else {
          local_e0 = local_78;
          for (bVar4 = 0; bVar4 < 2; bVar4 = bVar4 + 1) {
            uVar2 = DAT_0103a234 & -(uVar2 & 1) ^ uVar2 >> 1;
            for (bVar7 = 0; bVar7 < 0x20; bVar7 = bVar7 + 8) {
              uVar9 = uVar2 >> (uint)bVar7 & 0xf;
              uVar5 = uVar2 >> (uint)(byte)(bVar7 + 4) & 0xf;
              local_f0 = local_b8[uVar9];
              local_b8[uVar9] = local_b8[uVar5];
              local_b8[uVar5] = local_f0;
            }
          }
          for (bVar4 = 0; bVar4 < 0x10; bVar4 = bVar4 + 1) {
            local_78[bVar4] = local_b8[bVar4];
          }
        }
        for (bVar4 = 0; bVar4 < 0x10; bVar4 = bVar4 + 1) {
          bVar7 = local_e0[bVar4];
          for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
            local_a8[uVar9] = 0x7fffffff;
            local_d0[uVar9] = 0;
          }
          for (bVar8 = 0; bVar8 < 9; bVar8 = bVar8 + 1) {
            for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
              if ((int)((param_1 >> (uVar9 >> 1 & 0xff)) << 0x1f) < 0) {
                FUN_0103a02c(uVar9,bVar7,bVar8 - 4,local_68 + uVar9 * 2);
              }
            }
            local_e4 = FUN_0103a0e2(*(undefined1 *)(DAT_0103a204 + 2),param_1,local_98);
            if (local_e4 != 0) break;
            for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
              if ((int)((param_1 >> (uVar9 >> 1 & 0xff)) << 0x1f) < 0) {
                if (local_98[uVar9] < local_a8[uVar9]) {
                  local_a8[uVar9] = local_98[uVar9];
                  local_d0[uVar9] = bVar8;
                }
              }
            }
          }
          for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
            if ((int)((param_1 >> (uVar9 >> 1 & 0xff)) << 0x1f) < 0) {
              FUN_0103a02c(uVar9,bVar7,local_d0[uVar9] - 4,local_68 + uVar9 * 2);
              if (local_a8[uVar9] < local_88[uVar9]) {
                local_68[uVar9 * 2 + 8] = local_68[uVar9 * 2];
                local_68[uVar9 * 2 + 9] = local_68[uVar9 * 2 + 1];
                local_88[uVar9] = local_a8[uVar9];
              }
            }
          }
        }
        bVar1 = true;
      }
      if (local_ec < 7) {
        for (uVar5 = 0; uVar9 = local_ec + 1, (uVar5 & 0xff) < 0x10; uVar5 = uVar5 + 1) {
          for (uVar9 = 0; uVar9 < 4; uVar9 = uVar9 + 1) {
            uVar6 = uVar5;
            if ((int)((param_1 >> (uVar9 >> 1 & 0xff)) << 0x1f) < 0) {
              local_c8 = local_ec;
              uVar6 = uVar5 & 0xff;
              local_c0 = FUN_0101bb08(local_68[uVar9 * 2 + 8],local_68[uVar9 * 2 + 9],uVar6 << 2);
              local_c0 = local_c0 & 0xf;
              uStack_bc = 0;
              iVar11 = local_c0 - 4;
              iVar10 = (int)*(char *)(DAT_0103a204 + local_c8 + 3);
              if (iVar11 < 0) {
                iVar10 = iVar10 + iVar11;
              }
              else if (local_f0 == 0) {
                iVar3 = FUN_0103d6c0();
                if (iVar3 % 2 == 0) {
                  iVar10 = iVar11 - iVar10;
                }
                else {
                  iVar10 = iVar10 + iVar11;
                }
              }
              else {
                iVar10 = iVar11 - iVar10;
              }
              if (4 < iVar10) {
                iVar10 = 4;
              }
              if (iVar10 < -4) {
                iVar10 = -4;
              }
              FUN_0103a02c(uVar9,uVar5 & 0xff,iVar10,local_68 + uVar9 * 2);
            }
            uVar5 = uVar6;
          }
        }
      }
      else {
        local_cc = 1;
        uVar9 = local_ec;
      }
    }
    for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1) {
      if ((int)((param_1 >> (uVar2 >> 1 & 0xff)) << 0x1f) < 0) {
        if (local_88[uVar2] < *(uint *)(DAT_0103a22c + (uVar2 >> 1) * 4)) {
          *(int *)(local_68[0x10] + uVar2 * 4 + 0x24) =
               *(int *)(local_68[0x10] + uVar2 * 4 + 0x24) + 1;
        }
        if (local_88[uVar2] < *(uint *)(local_68[0x10] + uVar2 * 4 + 0x14)) {
          iVar10 = local_68[uVar2 * 2 + 9];
          iVar11 = local_68[0x10] + uVar2 * 8;
          *(int *)(iVar11 + 0x38) = local_68[uVar2 * 2 + 8];
          *(int *)(iVar11 + 0x3c) = iVar10;
          *(uint *)(local_68[0x10] + uVar2 * 4 + 0x14) = local_88[uVar2];
        }
      }
    }
  }
  return local_e4;
}

