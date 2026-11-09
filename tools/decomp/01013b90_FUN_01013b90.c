
undefined8 FUN_01013b90(uint param_1,undefined1 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_30;
  
  pbVar6 = DAT_01014504;
  pbVar5 = DAT_01014500;
  pbVar4 = DAT_010144fc;
  pbVar3 = DAT_010144f8;
  pbVar2 = DAT_010144f4;
  uVar10 = 0;
  uVar9 = 1;
  if ((*(byte *)(DAT_010144f0 + param_1) != 0) && (*(byte *)(DAT_010144f0 + param_1) < 4))
  goto LAB_01013d6e;
  uVar7 = param_1 & 0xff;
  switch(uVar7) {
  case 0:
    uVar8 = (uint)DAT_010143c0[4];
    goto LAB_01013bf0;
  case 1:
    uVar8 = (uint)DAT_010143c0[8];
    goto LAB_01013bf0;
  case 2:
    if (*(char *)(DAT_010144f0 + 2) == '\0') {
      uVar8 = (uint)*DAT_01014348;
      goto LAB_01013c3a;
    }
    uVar8 = (uint)(DAT_01014348[1] >> 7);
    goto LAB_01013c44;
  case 3:
    bVar11 = *(char *)(DAT_010144f0 + 3) == '\0';
    uVar8 = (uint)DAT_010144f8[1];
    break;
  case 4:
    bVar11 = *(char *)(DAT_010144f0 + 4) == '\0';
    uVar8 = (uint)DAT_010144fc[1];
    break;
  case 5:
    uVar8 = (uint)DAT_010143c0[5];
    goto LAB_01013c62;
  case 6:
    bVar11 = *(char *)(DAT_010144f0 + 6) == '\0';
    uVar8 = (uint)DAT_01014500[1];
    break;
  case 7:
    bVar11 = *(char *)(DAT_010144f0 + 7) == '\0';
    uVar8 = (uint)DAT_01014504[1];
    break;
  case 8:
    uVar8 = (uint)DAT_010143c0[2];
    goto LAB_01013bf0;
  case 9:
    bVar1 = DAT_010143c0[3];
    goto LAB_01013c82;
  case 10:
    uVar8 = (uint)DAT_010143c0[10];
    goto LAB_01013bf0;
  case 0xb:
    bVar1 = DAT_010143c0[0xb];
LAB_01013c82:
    uVar8 = ((uint)bVar1 << 0x1a) >> 0x1f;
    goto LAB_01013bf4;
  case 0xc:
    uVar8 = (uint)*DAT_010143b0;
    goto LAB_01013c62;
  case 0xd:
    bVar11 = *(char *)(DAT_010144f0 + 0xd) == '\0';
    uVar8 = (uint)DAT_010144f4[9];
    break;
  case 0xe:
    uVar8 = (uint)DAT_010143b0[2];
LAB_01013c62:
    uVar8 = (uVar8 << 0x1c) >> 0x1f;
    goto LAB_01013bf4;
  case 0xf:
    bVar11 = *(char *)(DAT_010144f0 + 0xf) == '\0';
    uVar8 = (uint)DAT_010144f4[10];
    break;
  case 0x10:
    uVar8 = (uint)*DAT_010143c0;
LAB_01013bf0:
    uVar8 = (uVar8 << 0x1c) >> 0x1f;
    goto LAB_01013bf4;
  case 0x11:
    uVar8 = (uint)DAT_010144f4[0xb];
    goto LAB_01013c3a;
  case 0x12:
    uVar8 = ((uint)DAT_010144f4[4] << 0x19) >> 0x1f;
    goto LAB_01013bf4;
  default:
    uVar10 = 0xce00;
    goto LAB_01013d6e;
  }
  if (bVar11) {
LAB_01013c3a:
    uVar8 = uVar8 & 1;
  }
  else {
    uVar8 = (uVar8 << 0x1e) >> 0x1f;
LAB_01013c44:
    uVar8 = uVar8 ^ 1;
  }
LAB_01013bf4:
  bVar11 = uVar8 == 0;
  if (bVar11) {
    if (7 < uVar7) {
      bVar11 = uVar7 == 0x12;
      goto LAB_01013c00;
    }
  }
  else {
LAB_01013c00:
    if (!bVar11) {
      if (uVar8 != 0) {
LAB_01013d6e:
        uVar9 = 0;
      }
      goto LAB_01013cfe;
    }
  }
  if (uVar7 == 0) {
    uVar8 = (uint)DAT_010144f4[2];
LAB_01013ce0:
    local_30 = uVar8 & 7;
  }
  else {
    if (uVar7 == 1) {
      uVar8 = (uint)DAT_010144f4[1];
      goto LAB_01013ce0;
    }
    if (uVar7 == 2) {
      uVar8 = (uint)*DAT_010144f4;
      goto LAB_01013ce0;
    }
    if (uVar7 == 3) {
      uVar8 = (uint)*DAT_010144f8;
      goto LAB_01013ce0;
    }
    if (uVar7 == 4) {
      uVar8 = (uint)*DAT_010144fc;
      goto LAB_01013ce0;
    }
    if (uVar7 == 5) {
      uVar8 = (uint)DAT_010144f4[4];
      goto LAB_01013ce0;
    }
    if (uVar7 == 6) {
      uVar8 = (uint)*DAT_01014500;
      goto LAB_01013ce0;
    }
    if (uVar7 == 7) {
      uVar8 = (uint)*DAT_01014504;
      goto LAB_01013ce0;
    }
    if (uVar7 == 0x12) {
      uVar8 = (uint)DAT_010144f4[3];
      goto LAB_01013ce0;
    }
    local_30 = 0;
  }
  uVar8 = FUN_01014370(param_1 & 0xff,1);
  if (local_30 == uVar8) {
    if (uVar7 == 0) {
      uVar7 = (uint)pbVar2[2];
LAB_01013d52:
      uVar7 = (uVar7 << 0x1b) >> 0x1e;
    }
    else {
      if (uVar7 == 1) {
        uVar7 = (uint)pbVar2[1];
        goto LAB_01013d52;
      }
      if (uVar7 == 2) {
        uVar7 = (uint)*pbVar2;
        goto LAB_01013d52;
      }
      if (uVar7 == 3) {
        uVar7 = (uint)*pbVar3;
        goto LAB_01013d52;
      }
      if (uVar7 == 4) {
        uVar7 = (uint)*pbVar4;
        goto LAB_01013d52;
      }
      if (uVar7 == 5) {
        uVar7 = (uint)pbVar2[4];
        goto LAB_01013d52;
      }
      if (uVar7 == 6) {
        uVar7 = (uint)*pbVar5;
        goto LAB_01013d52;
      }
      if (uVar7 == 7) {
        uVar7 = (uint)*pbVar6;
        goto LAB_01013d52;
      }
      if (uVar7 == 0x12) {
        uVar7 = (uint)pbVar2[3];
        goto LAB_01013d52;
      }
      uVar7 = 0;
    }
    uVar8 = FUN_0101438c(param_1 & 0xff,1);
    if (uVar7 == uVar8) goto LAB_01013cfe;
  }
  uVar9 = 2;
LAB_01013cfe:
  *param_2 = uVar9;
  return CONCAT44(local_30,uVar10);
}

