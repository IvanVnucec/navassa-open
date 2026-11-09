
uint FUN_010481ca(byte param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar4 = DAT_01048b30;
  uVar11 = 0;
  *(byte *)(DAT_01048b30 + 0x10) = *(byte *)(DAT_01048b30 + 0x10) | param_1;
  uVar8 = 0;
  do {
    iVar13 = DAT_01048b44;
    bVar1 = *(byte *)(DAT_01048b40 + uVar8);
    uVar14 = 1 << (uVar8 & 0xff);
    puVar9 = (undefined1 *)(DAT_01048b34 + uVar8);
    if ((param_1 & uVar14) != 0) {
      *puVar9 = 1;
      puVar9[0x14] = 1;
      iVar13 = iVar13 + uVar8 * 0x4c;
      puVar9[0x10] = 0;
      if (*(char *)(iVar13 + 0x2c) == '\0') {
        uVar7 = *(uint *)(DAT_01048b48 + uVar8 * 4);
        if (1 < (int)uVar8) {
          cVar2 = *(char *)((short)(ushort)bVar1 * 0xbc + DAT_01048b3c + 0x3c);
          bVar15 = cVar2 != '\x02';
          if (bVar15) {
            cVar2 = *(char *)(iVar4 + (uint)bVar1);
          }
          if (bVar15 && cVar2 != '\0') {
            thunk_FUN_0101abba((uint)bVar1);
          }
        }
        FUN_01048b12(uVar7,uVar8 & 0xff,1);
        uVar11 = uVar11 | 1 << (uVar7 & 0xff);
      }
      else {
        uVar11 = uVar11 | 3;
      }
      FUN_01048b7c(uVar8 & 0xff);
      *(undefined1 *)(iVar4 + uVar8 + 0x13) = 0;
      bVar1 = *(byte *)(iVar4 + (uint)*(byte *)(iVar13 + 1));
      if (bVar1 < 2) {
        FUN_010483ea(bVar1,1);
        puVar9[0xb] = 1;
      }
      else {
        FUN_010483e8();
        puVar9[0xb] = 0;
      }
      uVar7 = (uint)*(byte *)(iVar13 + 1);
      cVar2 = *(char *)(iVar4 + 2 + uVar7);
      bVar15 = cVar2 != '\0';
      if (bVar15) {
        cVar2 = *(char *)(iVar4 + uVar7 + 4);
      }
      if (bVar15 && cVar2 != '\x1c') {
        if (uVar7 == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = 5;
        }
        thunk_FUN_0100a2b4(uVar6,2,6);
      }
      thunk_FUN_01017f68(uVar8 & 0xff,1);
      thunk_FUN_01002ba0(uVar8 & 0xff,0);
    }
    if ((uVar14 & *(ushort *)(DAT_01048b3c + 0x22) & 0xf) == 0) {
      uVar14 = 1 << (uVar8 + 4 & 0xff) & (uint)*DAT_01048b4c;
      if (uVar14 != 0) {
        uVar14 = 1;
      }
      if (uVar8 - 2 < 2) {
LAB_010482fc:
        FUN_010483e8();
        puVar9[0xb] = 0;
      }
      else if ((int)uVar8 < 2) {
        bVar15 = *(int *)(*(int *)(*(int *)(DAT_01048b50 + uVar8 * 4) + 0x44) + 0x34) == 0;
        if (bVar15) {
          uVar14 = uVar14 & 0xff;
        }
        if (bVar15 && uVar14 == 0) goto LAB_010482fc;
      }
    }
    iVar13 = DAT_01048b54;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 4);
  if (*(char *)(DAT_01048b54 + 0xd0) == '\0') {
    FUN_010484e4(1);
  }
  iVar5 = DAT_01048b58;
  uVar8 = 0;
  do {
    iVar10 = iVar13 + uVar8 * 0x60;
    bVar1 = *(byte *)(iVar10 + 0x35);
    uVar14 = uVar11 & 0xff;
    bVar3 = *(byte *)(iVar4 + (uint)bVar1);
    iVar12 = iVar5 + uVar8;
    if (((uVar14 & 1 << (uVar8 & 0xff)) == 0) || (1 < bVar3)) {
      if (bVar3 == 2) {
        uVar14 = (uint)*(byte *)(iVar10 + 0x10);
      }
      if (bVar3 != 2 || uVar14 != 0) goto LAB_010483d6;
      FUN_01048b02();
      FUN_01048b0a();
      FUN_010483ee();
      if (uVar8 == 0) {
        thunk_FUN_01013a76(0xd,0);
        uVar6 = 0xc;
LAB_010483d0:
        thunk_FUN_01013a76(uVar6,0);
      }
      else if (uVar8 == 1) {
        thunk_FUN_01013a76(0xf,0);
        uVar6 = 0xe;
        goto LAB_010483d0;
      }
    }
    else {
      if (*(char *)(iVar10 + 0x10) == '\0') {
        FUN_010483ee();
      }
      if (*(char *)(iVar4 + (uint)bVar1) == '\0') {
        thunk_FUN_010071b4(uVar8,0);
      }
      else if (*(char *)(iVar10 + 0x10) == '\0') {
        FUN_01048b02();
        FUN_01048b0a();
      }
      *(undefined1 *)(iVar10 + 0x11) = 0;
      *(undefined1 *)(iVar12 + 2) = *(undefined1 *)(iVar12 + 5);
      if (uVar8 == 0) {
        thunk_FUN_01013a76(0xc,1);
        uVar6 = 0xd;
      }
      else {
        if (uVar8 != 1) goto LAB_010483d6;
        thunk_FUN_01013a76(0xe,1);
        uVar6 = 0xf;
      }
      thunk_FUN_01013a76(uVar6,1);
LAB_010483d6:
      if (*(char *)(iVar12 + 2) != '\0') {
        FUN_01048b0a();
      }
    }
    uVar8 = uVar8 + 1;
    if (1 < uVar8) {
      return uVar11;
    }
  } while( true );
}

