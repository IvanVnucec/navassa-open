
void FUN_0100140c(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  int *piVar18;
  int iVar19;
  bool bVar20;
  
  iVar4 = DAT_010018e0 + (short)param_1 * 0xb0;
  iVar5 = *(int *)(DAT_010018e0 + 0x2c);
  iVar10 = DAT_01001748 + param_1 * 4;
  puVar17 = *(uint **)(iVar10 + 0xc);
  iVar8 = *(int *)(iVar10 + 4);
  *DAT_01001b38 = *(undefined4 *)(DAT_01001b3c + puVar17[0xd] * 4);
  FUN_01002f16(puVar17[0xd]);
  uVar11 = (param_1 & 0xff) + 4;
  *DAT_01001b40 =
       *DAT_01001b40 & ~(byte)(1 << (uVar11 & 0xff)) | (byte)(puVar17[0xd] << (uVar11 & 0xff));
  uVar11 = puVar17[7];
  if (uVar11 == 0) {
    *(uint *)(iVar4 + 0x6c0) = (uint)*(byte *)(DAT_010018e0 + 0x790);
  }
  else {
    if (-1 < iVar5 << 0x1d) {
      iVar16 = 0;
      uVar14 = 0;
      piVar15 = DAT_010018e4;
      piVar18 = DAT_01001b44;
      iVar19 = DAT_01001b48;
      do {
        if ((int)((uVar11 >> (uVar14 & 0xff)) << 0x1f) < 0) {
          if (iVar16 == 0) {
            FUN_01002dfe(puVar17[0xc],iVar19);
            FUN_01002f16(puVar17[0xd]);
            bVar1 = (char)uVar14 - (char)((int)uVar14 / 2 << 1);
            iVar2 = DAT_01001b4c;
            if (1 < (int)uVar14) {
              iVar2 = DAT_01001b50;
            }
            FUN_01002df8(puVar17[0xc],iVar2 + (short)(ushort)bVar1 * 0x6c);
            uVar12 = *puVar17;
            uVar13 = puVar17[1];
            puVar9 = DAT_01001b34;
            if (*(char *)((int)DAT_01001b34 + 0x25) == '\0') {
              puVar9 = puVar17 + 2;
              uVar6 = puVar9[bVar1];
              bVar20 = CARRY4(uVar12,uVar6);
              uVar12 = uVar12 + uVar6;
              uVar13 = uVar13 + ((int)uVar6 >> 0x1f) + (uint)bVar20;
            }
            FUN_01002e90(puVar17[0xc],puVar9,uVar12,uVar13,(byte)(iVar5 >> 0x11) & 1);
          }
          else {
            if ((int)uVar14 < 2) {
              pbVar7 = (byte *)(*piVar15 + 0x1ab);
            }
            else {
              pbVar7 = (byte *)(*piVar18 + 0x1b6);
            }
            if ((*pbVar7 & 3) == 1) {
              pin_update(pbVar7,3,2);
            }
          }
          iVar16 = iVar16 + 1;
        }
        uVar14 = uVar14 + 1;
        piVar15 = piVar15 + 1;
        iVar19 = iVar19 + 0x10;
        piVar18 = piVar18 + 1;
      } while ((int)uVar14 < 4);
    }
    if ((iVar5 << 0x19 < 0) && (*(int *)(iVar4 + 0x6c0) == 0)) {
      uVar14 = *(uint *)(DAT_01001b24 + (uint)*(byte *)(iVar4 + 0x6b5) * 8);
      uVar11 = *(int *)(iVar4 + 0x6b0) + 1;
      iVar19 = uVar11 - uVar14 * (uVar11 / uVar14);
      *(int *)(iVar4 + 0x6b0) = iVar19;
      if ((iVar5 << 0x18 < 0) && (iVar19 == 0)) {
        uVar11 = FUN_010009f6(iVar4 + 0x630,*(byte *)(iVar4 + 0x6b5) ^ 1,param_1 & 0xff,
                              *(undefined4 *)(DAT_010018e0 + 0x2c));
        puVar17[0xe] = uVar11;
      }
    }
  }
  if (-1 < iVar5 << 0x1d) {
    if (((int)((uint)(byte)puVar17[7] << 0x1f) < 0) && ((param_1 & 0xff) == (uint)*DAT_0100174c)) {
      **(undefined1 **)(DAT_01001748 + 0x34) = 2;
    }
    if (((int)(puVar17[7] << 0x1e) < 0) && ((param_1 & 0xff) == (uint)DAT_0100174c[1])) {
      **(undefined1 **)(DAT_01001748 + 0x38) = 2;
    }
    if (((int)(puVar17[7] << 0x1d) < 0) && ((param_1 & 0xff) == (uint)DAT_0100174c[2])) {
      **(undefined1 **)(DAT_01001748 + 0x3c) = 2;
    }
    if (((int)(puVar17[7] << 0x1c) < 0) && ((param_1 & 0xff) == (uint)DAT_0100174c[3])) {
      **(undefined1 **)(DAT_01001748 + 0x40) = 2;
    }
    iVar19 = *(int *)(iVar10 + 0xc);
    iVar4 = *(int *)(iVar10 + 4);
    *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar19 + 0x38);
    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(iVar19 + 0x3c);
    *(undefined4 *)(iVar19 + 0x3c) = *(undefined4 *)(DAT_010018e0 + 8);
  }
  iVar4 = DAT_010018e0;
  *(int *)(DAT_010018e0 + 0x2c) = iVar5;
  FUN_0100611a(*(undefined4 *)(iVar4 + param_1 * 4),*(undefined4 *)(iVar8 + 0x3c));
  *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(iVar4 + 8);
  uVar11 = puVar17[0xe];
  if (uVar11 != 0) {
    if (uVar11 == 0xeb0c) {
      FUN_010018e8(2);
      FUN_010018e8(0);
      FUN_010018e8(3);
      FUN_010018e8(1);
    }
    puVar3 = DAT_01001b30;
    *DAT_01001b28 = DAT_01001b2c;
    *puVar3 = 0x1eb;
    boot_msg(1,uVar11,1);
    return;
  }
  return;
}

