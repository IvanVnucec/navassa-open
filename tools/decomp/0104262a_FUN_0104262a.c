
int FUN_0104262a(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  char local_dc [4];
  int local_d8;
  int local_d4;
  int local_d0;
  uint *local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  int local_bc;
  ushort *local_b8;
  undefined4 local_44;
  undefined1 local_34;
  undefined4 uStack_28;
  
  pbVar2 = DAT_010429c8;
  uVar9 = *param_2;
  if (((uVar9 & 0xc) != 0) && (param_2[6] == 2)) {
    uVar3 = (uVar9 << 0x1c) >> 0x1e;
    if (2 < uVar3) {
      return 0x2500;
    }
    if (((*DAT_010429c8 ^ uVar9) & 0xff & uVar9) != 0) {
      uStack_28 = param_4;
      iVar4 = FUN_01042bca(uVar3,DAT_010429c8,local_dc);
      if (iVar4 != 0) {
        return iVar4;
      }
      uVar9 = 0;
      local_d0 = 0;
      local_cc = param_2;
      do {
        iVar4 = DAT_010429cc + uVar9 * 8;
        uVar3 = *(uint *)(iVar4 + 0xa0);
        iVar10 = *(int *)(iVar4 + 0xa4);
        local_34 = 0;
        local_d4 = uVar9 * 0x48;
        iVar4 = DAT_010429c4 + local_d4;
        local_b8 = (ushort *)(DAT_010429d0 + uVar9 * 0x24c);
        pcVar5 = local_dc;
        pcVar1 = pcVar5 + uVar9 * 2;
        if (*pcVar1 != '\0') {
          pcVar5 = (char *)(uint)*local_b8;
        }
        if ((*pcVar1 != '\0' && pcVar5 != (char *)0x0) &&
           (iVar11 = DAT_010429d4 + uVar9 * 0xbc, DAT_010429d8 <= *(uint *)(iVar11 + 0x24))) {
          iVar12 = DAT_010429dc + uVar9 * 0x10;
          bVar8 = *(byte *)(iVar12 + 2);
          iVar6 = DAT_010429dc;
          if (0x78 < bVar8) {
            iVar6 = 0x78;
          }
          if (0x78 < bVar8) {
            *(char *)(iVar12 + 2) = (char)iVar6;
          }
          bVar14 = *(byte *)(iVar12 + 2) < 0x28;
          if (bVar14) {
            bVar8 = 0x28;
          }
          if (bVar14) {
            *(byte *)(iVar12 + 2) = bVar8;
          }
          local_bc = iVar4;
          FUN_0100a84c(iVar4);
          FUN_0100929c(&local_c8,*(undefined4 *)(DAT_010429cc + uVar9 * 4 + 0x5c));
          iVar6 = DAT_010429e0 + uVar9 * 0x80;
          local_c0 = *(undefined4 *)(iVar6 + 0x500);
          FUN_01009784(uVar3 + 20000,iVar10 + (uint)(0xffffb1df < uVar3),2,0);
          iVar10 = DAT_010429e8;
          uVar15 = DAT_010429e4;
          uVar13 = *(undefined4 *)(iVar11 + 0x498);
          *(undefined4 *)(iVar11 + 0x498) = 20000;
          *(undefined4 *)(iVar6 + 0x500) = uVar15;
          FUN_0104282a();
          FUN_01041650(uVar9 & 0xff,&local_bc);
          uVar15 = VectorSignedToFloat(local_44,(byte)(in_fpscr >> 0x15) & 3);
          FUN_01041d84(uVar15,uVar9 & 0xff);
          if (*(int *)(iVar11 + 0x38) == iVar10) {
            FUN_01042838(DAT_010429ec,2,uVar9 & 0xff);
          }
          local_d8 = uVar9 * 0x14;
          iVar7 = FUN_010298e2(uVar9 & 0xff,pbVar2 + local_d8 + 0x2c);
          if (iVar7 == 0) {
            FUN_010414c8(uVar9 & 0xff,&local_bc,iVar12,local_cc[4]);
          }
          *(undefined2 *)(pbVar2 + local_d8 + 0x14) =
               *(undefined2 *)(DAT_010429c4 + 0x38 + local_d4);
          *(undefined2 *)(pbVar2 + local_d8 + 0x16) = *(undefined2 *)(iVar4 + 0x3a);
          FUN_01041c6c(uVar9 & 0xff,pbVar2 + local_d8 + 4);
          *pbVar2 = *pbVar2 | (byte)(1 << (uVar9 + 2 & 0xff));
          FUN_0100a854(iVar4,0);
          if (*(int *)(iVar11 + 0x38) == iVar10) {
            FUN_010428e6(DAT_010429ec,uVar9 & 0xff,local_cc);
          }
          FUN_01009784(local_c8,uStack_c4,2,0);
          iVar4 = DAT_010429e0;
          *(undefined4 *)(iVar6 + 0x500) = local_c0;
          *(undefined4 *)(iVar11 + 0x498) = uVar13;
          FUN_0104282a();
          iVar4 = iVar4 + uVar9 * 0x158;
          FUN_0101c4b8(iVar4,iVar4 + 0x3c,uVar9 & 0xff);
          FUN_0101c55c(iVar4 + 0x40,uVar9 & 0xff);
          FUN_0101c698(iVar4 + 0x58,uVar9 & 0xff);
          FUN_0101a8a8(uVar9 + 2 & 0xff,iVar11 + 0x78);
          FUN_0101cd80(*(undefined1 *)(iVar4 + 0x153),uVar9 & 0xff);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < 2);
      return local_d0;
    }
  }
  return 0;
}

