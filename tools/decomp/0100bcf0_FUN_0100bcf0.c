
int FUN_0100bcf0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  short sVar1;
  ushort uVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  short unaff_r10;
  uint uVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  byte local_48;
  undefined1 local_47;
  undefined1 local_46;
  int local_44;
  int local_40;
  undefined1 auStack_3c [16];
  undefined1 *puStack_2c;
  undefined4 local_28;
  
  piVar4 = DAT_0100cac0;
  piVar3 = DAT_0100c81c;
  iVar12 = *(int *)(param_2 + 4);
  local_44 = *(int *)(param_2 + 0xc);
  piVar14 = (int *)(iVar12 + 0x2c);
  local_46 = param_2[100];
  uVar16 = 0;
  local_48 = param_2[0x6e];
  sVar1 = *(short *)(iVar12 + 0x2a);
  *DAT_0100c81c = (int)sVar1;
  piVar3[1] = -(int)sVar1;
  piVar3[2] = *piVar14;
  piVar3[3] = *(int *)(iVar12 + 0x30);
  *(undefined1 *)(piVar3 + 4) = 1;
  *(undefined4 *)(param_2 + 0x74) = 100;
  param_2[0x70] = (char)param_1;
  uVar8 = 0x8000;
  sVar1 = (short)piVar4[5];
  if (sVar1 == 0x20) {
    *(undefined2 *)(param_2 + 0x1a) = 0x26;
    *(undefined4 *)(param_2 + 0x20) = 0x2000;
LAB_0100bd78:
    unaff_r10 = 1;
  }
  else {
    if (sVar1 == 0x40) {
      *(undefined2 *)(param_2 + 0x1a) = 0x3c;
      if (*(int *)(iVar12 + 0x74) != 0x4001) {
        uVar8 = 0x4000;
      }
LAB_0100bd76:
      *(undefined4 *)(param_2 + 0x20) = uVar8;
      goto LAB_0100bd78;
    }
    if (sVar1 == 0x80) {
      *(undefined2 *)(param_2 + 0x1a) = 0x6e;
      goto LAB_0100bd76;
    }
  }
  fVar18 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(param_2 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_2 + 0x24) = 1.0 / fVar18;
  *(undefined1 *)(local_44 + 9) = 1;
  *(undefined1 *)(local_44 + 0xc) = 0;
  local_40 = param_1 * 0x18;
  sVar1 = (short)param_1;
  if ((char)piVar4[3] == '\0') {
    uVar2 = (ushort)local_48;
    piVar15 = piVar4 + (short)uVar2 * 0x18 + sVar1 * 0xc + 0x6b8;
    piVar4[(short)uVar2 * 0x18 + sVar1 * 0xc + 0x6bd] =
         (int)(piVar4 + (short)uVar2 * 0xc + param_1 * 6 + 0x60b);
    piVar9 = *(int **)(param_2 + 0xe8);
  }
  else {
    iVar13 = (short)(ushort)(byte)param_2[0x6d] * 0x30 +
             DAT_0100cac4 + sVar1 * 0x1800 + *(int *)(param_2 + 0x68) * 0xc00;
    piVar15 = (int *)(iVar13 + 0x220);
    *(int **)(iVar13 + 0x234) = piVar4 + param_1 * 6 + 0x60b;
    piVar9 = piVar4 + sVar1 * 0x300 +
                      *(int *)(param_2 + 0x68) * 0x180 + (uint)(byte)param_2[0x6d] * 0x40 + 9;
  }
  pcVar5 = DAT_0100cb90;
  *(int **)(param_2 + 0xe4) = piVar9;
  *(int **)(param_2 + 0x14) = piVar15;
  *(int **)(param_2 + 0xf0) = piVar4 + 0x609;
  puStack_2c = param_2;
  local_28 = param_3;
  if (*pcVar5 != '\0') {
    local_47 = FUN_0100a4f4(param_1);
    FUN_0100a506(param_1,0);
  }
  *(undefined1 *)(local_44 + 0x98) = 0;
  iVar13 = FUN_0100c7cc(local_48,param_2,2,local_46);
  bVar17 = iVar13 == 0;
  piVar9 = piVar3;
  if (bVar17) {
    *(undefined1 *)(piVar4 + 4) = 1;
    uVar10 = 0x80000000;
    bVar11 = 0;
    do {
      if ((uVar10 & *(uint *)(iVar12 + 0x74)) != 0) break;
      bVar11 = bVar11 + 1;
      uVar10 = uVar10 >> 1;
    } while (bVar11 < 0x20);
    *(undefined1 *)((int)piVar4 + 6) = 1;
    *(undefined1 *)((int)piVar4 + 7) = 1;
    *(undefined1 *)(piVar4 + 2) = 0x17;
    *piVar4 = (1 << (uint)(byte)(0x20 - bVar11)) + -1;
    *(undefined2 *)(piVar4 + 1) = 0;
    FUN_0101d9de(param_1,piVar4);
    *piVar3 = *(int *)(iVar12 + 0x78);
    piVar3[1] = *(int *)(iVar12 + 0x7c);
    piVar3[2] = *(int *)(iVar12 + 0x74);
    piVar3[3] = *(int *)(iVar12 + 0x74);
    piVar9 = DAT_0100cbfc;
    FUN_0101dad0(*param_2,(char)piVar4[4],piVar3);
    FUN_0100b9fa(param_1,local_46,(char)piVar4[4]);
    FUN_0100c7b2(param_2);
    iVar12 = *(int *)(param_2 + 0x14);
    *(undefined2 *)(iVar12 + 0xc) = 0;
    *(undefined2 *)(iVar12 + 0xe) = 0;
    FUN_0100ba76(param_1,iVar12 + 0xc,(char)*piVar9);
    piVar14 = (int *)piVar4[7];
    *(undefined1 *)((int)piVar4 + 0xe) =
         *(undefined1 *)(*(int *)(param_2 + 0xf0) + ((uint)piVar14 & 0xff));
    uVar6 = FUN_0100c474(param_2);
    *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x10) = uVar6;
    iVar13 = FUN_0101ddf6(param_1,auStack_3c);
    bVar17 = iVar13 == 0;
  }
  if (bVar17) {
    FUN_0101deb2(param_1,1,0);
    FUN_0100a5ae(param_1,*(undefined1 *)((int)piVar4 + 0xe));
    FUN_0100c05c();
    FUN_0101026a(param_1,2,&local_48);
    FUN_010104ae(param_1,2,6,local_28);
    *(short *)(param_2 + 0x18) = unaff_r10 + 3;
    iVar13 = FUN_0100c066(param_2);
    if (iVar13 == 0) {
      FUN_010104ae(param_1,2,local_48,local_28);
      do {
        piVar14 = (int *)((int)piVar14 + 1);
        if (piVar4[8] < (int)((uint)piVar14 & 0xff)) {
          FUN_0100d160(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x14),
                       *(undefined4 *)(param_2 + 0xe4),piVar4[8] & 0xff);
          iVar12 = *(int *)(param_2 + 0x14);
          *(undefined4 *)(iVar12 + 0x18) = 0xffffffff;
          *(undefined4 *)(iVar12 + 0x1c) = 0xffffffff;
          goto LAB_0100bfd8;
        }
        uVar6 = *(undefined1 *)(*(int *)(param_2 + 0xf0) + ((uint)piVar14 & 0xff));
        *(undefined1 *)((int)piVar4 + 0xe) = uVar6;
        uVar7 = FUN_0100c474(param_2,uVar6);
        *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x10) = uVar7;
        FUN_0100a5ae(param_1,uVar6);
        iVar13 = FUN_0100c05c();
        if (iVar13 != 0) {
          uVar16 = 4;
          goto LAB_0100bfd8;
        }
        *(short *)(param_2 + 0x18) = unaff_r10;
        iVar13 = FUN_0100c066(param_2);
      } while (iVar13 == 0);
      uVar16 = 5;
LAB_0100bfd8:
      if ((*DAT_0100cb90 != '\0') && (FUN_0100e0bc(param_2,(char)*piVar9), iVar13 == 0)) {
        iVar13 = FUN_0100a506(param_1,local_47);
      }
      *(short *)((int)piVar4 + param_1 * 2 + 0x18) =
           *(short *)((int)piVar4 + param_1 * 2 + 0x18) + 1;
      *(undefined1 *)((int)piVar4 + param_1 + 0x12) = 1;
      *(undefined1 *)(local_44 + 0x98) = 1;
      if (iVar13 == 0) {
        iVar13 = FUN_0101de6a(param_1,auStack_3c);
      }
      if (iVar13 == 0) {
        *(undefined1 *)(*(int *)(param_2 + 0x14) + 0x28) = 1;
      }
      if (uVar16 < 3) goto LAB_0100c04e;
    }
    FUN_0100bc98(param_1);
    FUN_0100ba30(param_1,0,(char)piVar4[4]);
  }
LAB_0100c04e:
  *(undefined1 *)(local_44 + 0xc) = 2;
  return iVar13;
}

