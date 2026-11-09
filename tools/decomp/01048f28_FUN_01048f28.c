
int FUN_01048f28(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint in_fpscr;
  float fVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  byte local_50;
  byte local_4f;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  float local_30 [4];
  
  local_30[3] = (float)param_4;
  local_48 = (uint)*param_1 & (uint)*(ushort *)(DAT_01049714 + 0x22) & 0xf;
  iVar8 = 0;
  local_44 = (byte)DAT_0104970c[2] & 1;
  local_4f = *(byte *)((int)DAT_0104970c + 9) & 1;
  if (*(char *)(DAT_01049714 + 0x780) != '\0') {
    local_4f = 2;
  }
  local_38 = *DAT_0104970c;
  uStack_34 = DAT_0104970c[1];
  local_4c = *(uint *)((int)DAT_0104970c + 10);
  bVar1 = *(byte *)((int)DAT_0104970c + 0xe) & 1;
  if ((int)(local_48 << 0x1f) < 0) {
    *DAT_01049718 = bVar1;
  }
  else if ((int)(local_48 << 0x1e) < 0) {
    *DAT_0104971c = bVar1;
  }
  bVar1 = 0;
  do {
    iVar15 = DAT_01049724;
    bVar9 = *(byte *)(DAT_01049720 + (uint)bVar1);
    uVar10 = (uint)bVar9;
    if ((int)((local_48 >> (uint)bVar1) << 0x1f) < 0) {
      iVar5 = DAT_01049724;
      if (iVar8 != 0) goto LAB_010490e0;
      local_40 = local_38;
      uStack_3c = uStack_34;
      if ((int)((3U >> (uint)bVar1) << 0x1f) < 0) {
        local_40 = local_38 + local_4c;
        uStack_3c = ((int)local_4c >> 0x1f) + uStack_34 + (uint)CARRY4(local_38,local_4c);
        iVar5 = DAT_01049714 + (short)(ushort)bVar9 * 0xbc;
        if ((local_4c != 0) && (*(char *)(iVar5 + 0x1ac) == '\0')) goto LAB_01049112;
        if (local_4c == *(uint *)(iVar5 + 0x1a8)) goto LAB_010490e2;
        uVar7 = local_4c;
        if ((int)local_4c < 0) {
          uVar7 = -local_4c;
        }
        local_30[0] = DAT_0104975c;
        local_30[1] = (float)DAT_01049760;
        local_30[2] = (float)DAT_01049764;
        fVar11 = (float)VectorUnsignedToFloat
                                  (*(undefined4 *)(DAT_01049728 + 0x10),(byte)(in_fpscr >> 0x15) & 3
                                  );
        uVar13 = VectorFloatToUnsigned((fVar11 * DAT_010492c8) / DAT_010492cc,3);
        if (*(char *)(iVar5 + 0x1c6) == '\x01') {
          fVar11 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar5 + 0x1bc),(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = fVar11 / local_30[*(byte *)(iVar5 + 0x1ae)];
        }
        else {
          fVar11 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar5 + 0x1c0),(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = fVar11 / local_30[*(byte *)(iVar5 + 0x1af)];
        }
        uVar12 = VectorFloatToUnsigned(fVar11,3);
        if (uVar13 < uVar12) {
          uVar12 = uVar13;
        }
        if (uVar12 < uVar7 + (*(uint *)(iVar5 + 0x19c) >> 1)) {
          iVar8 = 0xe707;
        }
        else {
          *(uint *)(iVar5 + 0x1a8) = local_4c;
          thunk_FUN_0100a880(uVar10,0);
          thunk_FUN_010063e8(bVar1,2,*(int *)(DAT_0104972c + uVar10 * 4) + 0x40,0);
        }
        puVar2 = *(uint **)(*(int *)(iVar15 + uVar10 * 4) + 0xc);
        puVar6 = (uint *)*puVar2;
        if (DAT_01049730 > puVar6) {
          puVar2 = (uint *)puVar2[3];
        }
        iVar5 = DAT_01049734;
        if (DAT_01049730 <= puVar6 || puVar2 <= puVar6) {
          if (*(char *)(DAT_01049734 + uVar10) == '\0') goto LAB_010490e0;
        }
        else if (*(char *)(DAT_01049734 + uVar10) == '\x01') {
LAB_010490e0:
          uVar14 = CONCAT44(iVar5,iVar8);
          if (iVar8 == 0) goto LAB_010490e2;
          goto LAB_01049122;
        }
LAB_01049112:
        uVar14 = CONCAT44(iVar5,0xe707);
      }
      else {
LAB_010490e2:
        uVar7 = (uStack_3c - 1) + (uint)CARRY4(local_40,DAT_01049738);
        if ((uVar7 == 0) || ((uVar7 < 2 && (local_40 + DAT_01049738 < DAT_0104973c)))) {
          uVar14 = thunk_FUN_01014702(bVar1,&local_50);
        }
        else {
          uVar14 = 0x10000e705;
        }
      }
LAB_01049122:
      iVar8 = (int)uVar14;
      if (local_50 < 2) {
        bVar9 = local_50;
        if (local_50 != 0) goto LAB_0104913e;
LAB_01049140:
        if (iVar8 == 0) {
          iVar8 = thunk_FUN_01006cfc(bVar1,(int)((ulonglong)uVar14 >> 0x20),local_38,uStack_34);
          iVar5 = thunk_FUN_01006ce2(bVar1);
          if (*(char *)(DAT_01049740 + iVar5) != '\0') {
            puVar2 = (uint *)(iVar5 * 0x60 + DAT_01049744);
            *puVar2 = local_38;
            puVar2[1] = uStack_34;
          }
        }
      }
      else {
        if ((local_50 == 2) && (local_44 != 0)) {
LAB_0104913e:
          bVar9 = 1;
          goto LAB_01049140;
        }
        bVar9 = 0;
        if (iVar8 == 0) {
          iVar8 = 0xe704;
          goto LAB_01049232;
        }
      }
      if ((iVar8 == 0) && (thunk_FUN_01007f1e(bVar1,local_4f), bVar9 != 0)) {
        if (bVar1 < 2) {
          uVar3 = 0;
        }
        else {
          uVar3 = 5;
        }
        iVar5 = thunk_FUN_01006cb8(uVar3,uVar10);
        if (local_50 == 2) {
          uVar13 = 0;
          uVar7 = 0;
          do {
            if ((int)((0xcU >> (uint)*(byte *)(*(int *)(iVar15 + uVar7 * 4) + 0x10)) << 0x1f) < 0) {
              uVar13 = uVar13 | 1 << (uVar7 & 0xff);
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 4);
          if (*(char *)(DAT_01049740 + iVar5) == '\0') {
            puVar4 = (undefined4 *)(DAT_01049744 + iVar5 * 0x60);
            *puVar4 = 0;
            puVar4[1] = 0;
            thunk_FUN_01007cd8(iVar5,uVar13 & 0xff);
          }
          thunk_FUN_01007728(iVar5,uVar10,1);
        }
        if ((int)((3U >> (uint)bVar1) << 0x1f) < 0) {
          iVar8 = thunk_FUN_010324be();
          if (iVar8 == 0) {
            iVar8 = thunk_FUN_010092d0(0,uVar10,local_40,uStack_3c,iVar5,0);
          }
        }
        else {
          iVar8 = thunk_FUN_01040ce2(bVar1);
        }
        puVar2 = (uint *)(DAT_01049744 + iVar5 * 0x60);
        if (uStack_3c != puVar2[1] || local_40 != *puVar2) {
          *(undefined1 *)(DAT_01049710 + iVar5 + 0xc2) = 1;
        }
      }
    }
LAB_01049232:
    bVar1 = bVar1 + 1;
    if (3 < bVar1) {
      return iVar8;
    }
  } while( true );
}

