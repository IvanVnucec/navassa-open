
int FUN_01019d2c(void)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 in_r3;
  byte bVar13;
  undefined1 uVar14;
  undefined1 auStack_40 [3];
  byte local_3d;
  byte local_38;
  byte local_37;
  char local_36 [10];
  undefined2 local_2c;
  undefined4 uStack_28;
  
  pbVar2 = DAT_0101a558;
  iVar1 = DAT_0101a554;
  uStack_28 = in_r3;
  if (*DAT_0101a558 == 0) {
    iVar9 = thunk_EXT_FUN_20037148();
    uVar14 = (undefined1)*(undefined2 *)(iVar1 + 0x22);
    if (iVar9 != 0) goto LAB_01019d5a;
  }
  else {
    uVar14 = (undefined1)*(undefined2 *)(DAT_0101a554 + 0x22);
  }
  iVar9 = thunk_EXT_FUN_20036186(uVar14);
LAB_01019d5a:
  if ((((iVar9 == 0) && (iVar9 = FUN_01019c40(uVar14,auStack_40), iVar9 == 0)) &&
      ((*pbVar2 != 0 || (iVar9 = FUN_01019fea(auStack_40), iVar9 == 0)))) &&
     ((*pbVar2 != 0 || (iVar9 = thunk_EXT_FUN_200371d8(), iVar9 == 0)))) {
    iVar9 = FUN_01018424(auStack_40);
  }
  FUN_01019fe4();
  piVar5 = DAT_0101a564;
  iVar4 = DAT_0101a560;
  puVar3 = DAT_0101a55c;
  uVar10 = *DAT_0101a55c;
  *(uint *)(DAT_0101a560 + 0x58) = uVar10;
  puVar7 = DAT_0101a56c;
  iVar6 = DAT_0101a568;
  uVar11 = (uint)local_38;
  iVar12 = *piVar5;
  if (iVar9 == 0) {
    uVar10 = (uint)*pbVar2;
  }
  if (iVar9 == 0 && uVar10 == 0) {
    if ((int)(uVar11 << 0x1f) < 0) {
      *DAT_0101a56c = *(undefined1 *)(*(int *)(DAT_0101a568 + *(int *)(iVar12 + 8) * 8) + 0x2a);
    }
    if ((int)(uVar11 << 0x1e) < 0) {
      puVar7[1] = *(undefined1 *)(*(int *)(iVar6 + 4 + *(int *)(piVar5[1] + 8) * 8) + 0x2a);
    }
  }
  if ((int)(uVar11 << 0x1f) < 0) {
    FUN_01017212(0,*(undefined1 *)(*(int *)(iVar6 + *(int *)(iVar12 + 8) * 8) + 0x2a));
  }
  if ((int)((uint)local_38 << 0x1e) < 0) {
    FUN_01017212(1,*(undefined1 *)(*(int *)(iVar6 + 4 + *(int *)(piVar5[1] + 8) * 8) + 0x2a));
  }
  if (iVar9 == 0) {
    iVar9 = FUN_01017d88(iVar1,uVar14);
  }
  FUN_01019fe4();
  uVar10 = *puVar3;
  *(uint *)(iVar4 + 0x5c) = uVar10;
  if (iVar9 == 0) {
    uVar10 = (uint)*pbVar2;
  }
  if (iVar9 == 0 && uVar10 == 0) {
    iVar9 = FUN_01008d14();
  }
  FUN_01019fe4();
  *(uint *)(iVar4 + 0x60) = *puVar3;
  if (iVar9 == 0) {
    iVar9 = FUN_0102fc48();
  }
  FUN_01019fe4();
  uVar10 = *puVar3;
  *(uint *)(iVar4 + 100) = uVar10;
  if (iVar9 == 0) {
    uVar10 = (uint)*pbVar2;
  }
  if (iVar9 == 0 && uVar10 == 0) {
    iVar9 = FUN_01030cf0();
  }
  uVar10 = 0;
  do {
    uVar11 = 0;
    do {
      if (local_36[uVar11 + uVar10 * 5] == '\0') {
LAB_01019e96:
        if ((iVar9 == 0) && (((uint)local_37 & 1 << (uVar10 & 0xff)) != 0)) {
          iVar9 = FUN_0102f85c(uVar10 & 0xff,1 << (uVar11 & 0xff) & 0xff);
        }
      }
      else if ((iVar9 == 0) && (iVar9 = FUN_0102e846(uVar11,uVar10 & 0xff), iVar9 == 0)) {
        iVar9 = FUN_0102f38c(uVar10 & 0xff,uVar11);
        goto LAB_01019e96;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 5);
    uVar10 = uVar10 + 1;
    if (1 < (int)uVar10) {
      FUN_01019fe4();
      *(uint *)(iVar4 + 0x68) = *puVar3;
      if (iVar9 == 0) {
        iVar9 = FUN_010105e2(local_2c);
      }
      FUN_01019fe4();
      pcVar8 = DAT_0101a578;
      iVar6 = DAT_0101a574;
      iVar1 = DAT_0101a570;
      *(uint *)(iVar4 + 0x6c) = *puVar3;
      bVar13 = 0;
      do {
        if ((((uint)local_3d & 1 << (uint)bVar13) != 0) && (iVar9 == 0)) {
          FUN_0101acd0(bVar13);
          iVar9 = FUN_01030fc0(bVar13);
          if (iVar9 == 0) {
            FUN_0101708c(bVar13);
            iVar9 = FUN_0101a9fa(bVar13,0);
            if (iVar9 == 0) {
              FUN_01022304(bVar13);
              FUN_0100dc3c(bVar13,1,0xa1b8);
              FUN_0101d884(bVar13);
              FUN_0101d8a0(bVar13);
              FUN_0100de60(bVar13);
              FUN_0100a506(bVar13,*pcVar8 != '\0');
              FUN_0101df90(bVar13);
              iVar9 = FUN_010173d8(bVar13);
            }
          }
          if ((iVar9 == 0) &&
             (((*(byte *)(iVar6 + 1) & 3) == 0 || (iVar9 = FUN_010310a8(bVar13), iVar9 == 0)))) {
            FUN_01031410(bVar13);
            pin_update(*(int *)(iVar1 + (uint)bVar13 * 4) + 0x137,1,1);
          }
        }
        bVar13 = bVar13 + 1;
      } while (bVar13 < 2);
      FUN_01019fe4();
      *(uint *)(iVar4 + 0x70) = *puVar3;
      if (iVar9 == 0) {
        FUN_010254d4(local_38);
        iVar9 = FUN_01022738(local_38);
      }
      FUN_01019fe4();
      *(uint *)(iVar4 + 0x74) = *puVar3;
      if (iVar9 == 0) {
        FUN_01013faa(0,0);
        FUN_01013faa(1,0);
        FUN_01013faa(0x12,0);
      }
      return iVar9;
    }
  } while( true );
}

