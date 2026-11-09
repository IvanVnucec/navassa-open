
undefined8 FUN_0102c230(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 *puVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  char cVar17;
  undefined4 local_30;
  uint local_28;
  
  local_28 = 0;
  FUN_0102c794();
  iVar10 = DAT_0102c76c;
  iVar8 = DAT_0102c768;
  piVar4 = DAT_0102c764;
  puVar3 = DAT_0102c760;
  iVar1 = DAT_0102c730;
  *(undefined4 *)(DAT_0102c730 + 0x10) = *DAT_0102c760;
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x14) = *puVar3;
  *(undefined4 *)(*piVar4 + 4) = 0xffffffff;
  *(undefined4 *)(piVar4[1] + 4) = 0xffffffff;
  FUN_01038d8a();
  thunk_EXT_FUN_20036634();
  thunk_EXT_FUN_20037054();
  thunk_EXT_FUN_200371d8();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x18) = *puVar3;
  FUN_010097ec();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x1c) = *puVar3;
  FUN_0100b074(0,*(undefined4 *)(iVar8 + 0x28));
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x20) = *puVar3;
  iVar5 = FUN_0101825c(iVar10);
  if (iVar5 != 0) {
    periph_init_e(7);
    uVar6 = FUN_0102c726();
    FUN_0102c788(uVar6,0x2de);
  }
  FUN_0102c794();
  uVar6 = DAT_0102c758;
  *(undefined4 *)(iVar1 + 0x24) = *puVar3;
  FUN_01009b44();
  FUN_0100b0fa(0);
  FUN_0100b008();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x28) = *puVar3;
  pin_update(uVar6,4,4);
  cVar17 = (*(byte *)(iVar10 + 0x10) & 1) + 3;
  FUN_01038ce6(cVar17);
  uVar7 = FUN_0100b1da();
  FUN_01009a04(cVar17,uVar7,0);
  FUN_010071b4(cVar17,0);
  FUN_01009a6c(cVar17);
  FUN_01015e2c(200);
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x2c) = *puVar3;
  pin_update(DAT_0102c770,0x10,0);
  FUN_010198e0(6);
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x30) = *puVar3;
  FUN_0101852c();
  pin_update(uVar6,4,0);
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x38) = *puVar3;
  FUN_0102c1a0();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x3c) = *puVar3;
  puVar13 = (undefined4 *)&Reserved3;
  FUN_0100f26e(0x24,&LAB_0102ca70,0x24,iVar1 + 0x22c);
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x40) = *puVar3;
  FUN_0102c1d2();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x44) = *puVar3;
  FUN_0100b074(1,*(undefined4 *)(iVar8 + 0x10));
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x44) = *puVar3;
  thunk_EXT_FUN_200371a8();
  FUN_01006a26();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x48) = *puVar3;
  thunk_EXT_FUN_20035d58();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x4c) = *puVar3;
  thunk_EXT_FUN_200370a0();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x50) = *puVar3;
  FUN_01038d94();
  iVar8 = FUN_01019d2c((char)*(undefined2 *)(iVar10 + 0x22));
  if (iVar8 != 0) {
    periph_init_e(8);
    uVar6 = FUN_0102c726();
    *puVar13 = 0x340;
    FUN_0102c78e(uVar6,iVar8,3);
  }
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x78) = *puVar3;
  bVar14 = 0;
  bVar15 = *(byte *)(iVar10 + 0x22);
  do {
    if ((int)(((bVar15 & 0xf) >> (uint)bVar14) << 0x1f) < 0) {
      FUN_01029d1e(bVar14);
    }
    bVar14 = bVar14 + 1;
  } while (bVar14 < 4);
  FUN_0102c794();
  puVar2 = DAT_0102c734;
  *(undefined4 *)(iVar1 + 0x7c) = *puVar3;
  iVar8 = FUN_0101a08c((char)*puVar2);
  if (iVar8 != 0) {
    periph_init_e(8);
    uVar6 = FUN_0102c726();
    FUN_0102c788(uVar6,0x355);
  }
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x80) = *puVar3;
  FUN_0102c1bc();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x84) = *puVar3;
  if ((int)((uint)(byte)*puVar2 << 0x1f) < 0) {
    FUN_0102f358(0);
  }
  if ((int)((uint)(byte)*puVar2 << 0x1e) < 0) {
    FUN_0102f358(1);
  }
  if ((int)((uint)(byte)*puVar2 << 0x1d) < 0) {
    FUN_0101a7a8(2);
  }
  if ((int)((uint)(byte)*puVar2 << 0x1c) < 0) {
    FUN_0101a7a8(3);
  }
  cVar17 = *DAT_0102c774;
  cVar12 = DAT_0102c774[1];
  if (cVar17 != '\x01') {
    cVar17 = '\0';
  }
  if (cVar12 != '\x01') {
    cVar12 = '\0';
  }
  if (((*(char *)(iVar10 + 0x1c6) == '\0' || *(char *)(iVar10 + 0x282) == '\0') || cVar17 != '\0')
      || cVar12 != '\0') {
    FUN_01038e54(0);
  }
  if (((int)((uint)(byte)*puVar2 << 0x1f) < 0) && (*(char *)(iVar10 + 0x1c6) == '\0')) {
    FUN_01039654();
  }
  if (((int)((uint)(byte)*puVar2 << 0x1e) < 0) && (*(char *)(iVar10 + 0x282) == '\0')) {
    FUN_01039654(1);
  }
  FUN_01020774();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x88) = *puVar3;
  FUN_01010218();
  FUN_0102c794();
  *(undefined4 *)(iVar1 + 0x8c) = *puVar3;
  FUN_0102d64e();
  iVar8 = FUN_01025584();
  bVar15 = 0;
  do {
    if (((uint)*puVar2 & 1 << (uint)(byte)(bVar15 + 2)) != 0) {
      FUN_0101acd0(bVar15);
      if (iVar8 == 0) {
        iVar8 = FUN_0101df54(bVar15);
      }
      if (iVar8 == 0) {
        if (*(char *)((uint)bVar15 * 0xbc + iVar10 + 0x3c) != '\x02') {
          iVar8 = FUN_0101aa38(bVar15);
          goto LAB_0102c546;
        }
LAB_0102c54c:
        iVar8 = FUN_0101ac18(bVar15);
      }
      else {
LAB_0102c546:
        if (iVar8 == 0) goto LAB_0102c54c;
      }
      if (iVar8 == 0) {
        FUN_01035096(bVar15,DAT_0102c778);
        FUN_0101e126(bVar15);
      }
    }
    bVar15 = bVar15 + 1;
    if (1 < bVar15) {
      FUN_0102c794();
      *(undefined4 *)(iVar1 + 0x90) = *puVar3;
      iVar8 = FUN_010220e6();
      if (iVar8 != 0) {
        periph_init_e(8);
        uVar6 = FUN_0102c726();
        FUN_0102c788(uVar6,0x38e);
      }
      FUN_0102c794();
      *(undefined4 *)(iVar1 + 0x94) = *puVar3;
      bVar15 = 0;
      do {
        if (((uint)*puVar2 & 1 << (uint)bVar15) != 0) {
          FUN_0102e828(bVar15,1);
          FUN_0102e71a(bVar15,1);
          FUN_0102e828(bVar15,0);
          FUN_0102e71a(bVar15,0);
        }
        bVar15 = bVar15 + 1;
      } while (bVar15 < 2);
      periph_init_d(2);
      periph_init_f(1);
      uVar9 = 0;
      uVar11 = 0;
      do {
        if ((int)((0xcU >> *(sbyte *)(piVar4[uVar11] + 0x10)) << 0x1f) < 0) {
          uVar9 = uVar9 | 1 << (uVar11 & 0xff);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 4);
      local_30 = CONCAT31((int3)((uint)param_2 >> 8),(char)uVar9);
      uVar11 = 0;
      FUN_0102c794();
      *(undefined4 *)(iVar1 + 0x98) = *puVar3;
      do {
        iVar10 = piVar4[uVar11];
        switch(*(undefined1 *)(iVar10 + 0x10)) {
        case 0:
          iVar8 = (*(code *)**(undefined4 **)(iVar10 + 0x48))();
          break;
        case 1:
          iVar8 = (**(code **)(*(int *)(iVar10 + 0x48) + 4))();
          break;
        case 2:
        case 3:
          uVar16 = (uint)*(byte *)(iVar10 + 1);
          iVar8 = DAT_0102c77c + uVar16 * 4;
          if ((int)uVar11 < 2) {
            FUN_01009518(*(undefined4 *)(iVar8 + 0x2c),0,uVar11 & 0xff,1);
            uVar6 = *(undefined4 *)(iVar8 + 0x4c);
          }
          else {
            FUN_01009518(*(undefined4 *)(iVar8 + 0x34),5,uVar11 & 0xff,1);
            uVar6 = *(undefined4 *)(iVar8 + 0x34);
          }
          FUN_01007728(uVar6,uVar16,1);
          iVar8 = (**(code **)(*(int *)(piVar4[uVar11] + 0x48) + 8))();
          local_28 = local_28 | 1 << uVar16;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 4);
      uVar11 = 0;
      do {
        if ((int)((local_28 >> (uVar11 & 0xff)) << 0x1f) < 0) {
          iVar5 = piVar4[uVar11 & 0xff];
          FUN_0101d28e(*(undefined1 *)(iVar5 + 2),*(uint *)(iVar5 + 0x34) & 0xf80000);
          FUN_010050e0(1 << *(sbyte *)(iVar5 + 1),0);
          iVar10 = FUN_0102c71a();
          pin_update(iVar10 + 0x3c);
          FUN_0102553e(1 << *(sbyte *)(iVar5 + 1));
          FUN_0102d67c(*(undefined1 *)(iVar5 + 1));
          iVar10 = FUN_0102c71a();
          pin_update(iVar10 + 0x3b);
          iVar10 = FUN_0102c70e();
          pin_update(iVar10 + 0x3b);
          iVar10 = FUN_0102c70e();
          pin_update(iVar10 + 0x3c);
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 2);
      thunk_EXT_FUN_20034534();
      thunk_EXT_FUN_200345ca(uVar9 & 0xff);
      FUN_0102c794();
      *(undefined4 *)(iVar1 + 0x9c) = *puVar3;
      return CONCAT44(local_30,iVar8);
    }
  } while( true );
}

