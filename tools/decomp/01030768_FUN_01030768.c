
void FUN_01030768(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  char cVar12;
  uint in_fpscr;
  undefined4 uVar13;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 uVar14;
  undefined4 extraout_s1_04;
  undefined8 uVar15;
  
  iVar3 = DAT_01030e28;
  uVar14 = DAT_01030e10;
  uVar13 = DAT_01030e0c;
  uVar2 = (uint)*(ushort *)(DAT_01030e24 + 0x22);
  if (param_1 == 0) {
    cVar12 = (int)(uVar2 << 0x1f) < 0;
    if ((int)(uVar2 << 0x1b) < 0) {
      cVar12 = cVar12 + '\x02';
    }
    if ((int)(uVar2 << 0x19) < 0) {
      cVar12 = cVar12 + '\x04';
    }
    if ((int)(uVar2 << 0x17) < 0) {
      cVar12 = cVar12 + '\b';
    }
    iVar10 = 0;
  }
  else {
    cVar12 = (int)(uVar2 << 0x1e) < 0;
    if ((int)(uVar2 << 0x1a) < 0) {
      cVar12 = cVar12 + '\x02';
    }
    if ((int)(uVar2 << 0x18) < 0) {
      cVar12 = cVar12 + '\x04';
    }
    if ((int)(uVar2 << 0x16) < 0) {
      cVar12 = cVar12 + '\b';
    }
    iVar10 = 0xbc;
  }
  puVar8 = (undefined4 *)(DAT_01030e28 + (short)param_1 * 0xc);
  iVar4 = DAT_01030e24 + iVar10;
  puVar7 = (undefined4 *)(iVar4 + 0x618);
  puVar11 = (undefined4 *)(iVar4 + 0x4a0);
  iVar9 = DAT_01030e24 + iVar10;
  iVar10 = DAT_01030e24 + iVar10;
  puVar5 = (undefined4 *)(iVar9 + 0x328);
  puVar6 = (undefined4 *)(iVar10 + 0x1b0);
  switch(cVar12) {
  case '\x01':
    uVar15 = FUN_01030cc2();
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    iVar4 = 1;
    uVar13 = 0;
    do {
      iVar9 = (int)((ulonglong)uVar15 >> 0x20) * (iVar4 + (int)uVar15);
      puVar5 = (undefined4 *)(iVar3 + 4 + iVar9);
      uVar14 = VectorUnsignedToFloat(*(undefined4 *)(iVar10 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
      *puVar5 = uVar14;
      uVar15 = FUN_01030c24(uVar14,*puVar6);
      iVar4 = iVar4 + 1;
      *(char *)((int)puVar5 + iVar9) = (char)uVar13;
    } while (iVar4 < 4);
    break;
  case '\x02':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar9 + 0x330),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[4] = uVar13;
    uVar15 = FUN_01030ca6();
    puVar8[3] = extraout_s1;
    puVar8[1] = puVar8[4];
    *(undefined1 *)(puVar8 + 2) = 0;
    iVar10 = 2;
    *puVar8 = puVar8[3];
    uVar13 = 0;
    goto LAB_01030894;
  case '\x03':
    FUN_01030cc2();
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    uVar13 = 0;
    FUN_01030c32();
    uVar15 = FUN_01030ca6();
    puVar8[3] = extraout_s1_00;
    iVar10 = 2;
LAB_01030894:
    do {
      iVar4 = (int)((ulonglong)uVar15 >> 0x20) * (iVar10 + (int)uVar15);
      puVar6 = (undefined4 *)(iVar3 + 4 + iVar4);
      uVar14 = VectorUnsignedToFloat(puVar5[2],(byte)(in_fpscr >> 0x15) & 3);
      *puVar6 = uVar14;
      uVar15 = FUN_01030c24(uVar14,*puVar5);
      iVar10 = iVar10 + 1;
      *(char *)((int)puVar6 + iVar4) = (char)uVar13;
    } while (iVar10 < 4);
    break;
  case '\x04':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar13 = *puVar11;
    *(undefined1 *)(puVar8 + 8) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[6] = uVar13;
    puVar8[10] = puVar8[7];
    iVar10 = 0;
    puVar8[9] = puVar8[6];
    *(undefined1 *)(puVar8 + 0xb) = 0;
    do {
      iVar9 = (iVar10 + param_1) * 0xc;
      uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + 4 + iVar9) = uVar13;
      uVar13 = VectorUnsignedToFloat(*puVar11,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + iVar9) = uVar13;
      iVar10 = iVar10 + 1;
      *(undefined1 *)(iVar3 + 8 + iVar9) = 0;
    } while (iVar10 < 2);
    break;
  case '\x05':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar10 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[1] = uVar13;
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar13 = FUN_01030c0a(uVar13,*puVar11);
    puVar8[4] = uVar13;
    puVar8[6] = extraout_s1_01;
    *(undefined1 *)(puVar8 + 5) = 0;
    puVar8[3] = puVar8[6];
    puVar8[10] = puVar8[7];
    puVar8[9] = puVar8[6];
    uVar1 = 0;
    goto LAB_01030bea;
  case '\x06':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar9 + 0x330),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[4] = uVar13;
    uVar13 = *puVar5;
    *(undefined1 *)(puVar8 + 5) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[3] = uVar13;
    puVar8[1] = puVar8[4];
    uVar1 = 0;
    *puVar8 = puVar8[3];
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar14 = *puVar11;
    *(undefined1 *)(puVar8 + 8) = 0;
    uVar13 = FUN_01030c1a(uVar13,uVar14,puVar8[7]);
    puVar8[10] = uVar13;
    puVar8[9] = puVar8[6];
    goto LAB_01030b62;
  case '\a':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar10 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[1] = uVar13;
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar9 + 0x330),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[4] = uVar13;
    uVar13 = *puVar5;
    *(undefined1 *)(puVar8 + 5) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[3] = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar13 = FUN_01030c0a(uVar13,*puVar11);
    puVar8[6] = extraout_s1_02;
    puVar8[10] = uVar13;
    uVar1 = 0;
    puVar8[9] = puVar8[6];
    goto LAB_01030bea;
  case '\b':
    uVar15 = FUN_01030bfc();
    iVar10 = 0;
    uVar13 = *puVar7;
    *(undefined1 *)(puVar8 + 0xb) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[9] = uVar13;
    do {
      iVar9 = (int)((ulonglong)uVar15 >> 0x20) * (iVar10 + (int)uVar15);
      uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x620),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + 4 + iVar9) = uVar13;
      uVar13 = VectorUnsignedToFloat(*puVar7,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(iVar3 + iVar9) = uVar13;
      iVar10 = iVar10 + 1;
      *(undefined1 *)(iVar3 + 8 + iVar9) = 0;
    } while (iVar10 < 3);
    break;
  case '\t':
    FUN_01030cd0();
    FUN_01030c7c();
    goto LAB_01030aa6;
  case '\n':
    FUN_01030c32();
    FUN_01030cb2(0);
    puVar8[1] = puVar8[4];
    uVar1 = 0;
    *puVar8 = puVar8[3];
    *(undefined1 *)(puVar8 + 2) = 0;
    FUN_01030bfc();
    uVar13 = *puVar7;
    *(undefined1 *)(puVar8 + 0xb) = uVar1;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[9] = uVar13;
    puVar8[7] = puVar8[10];
    *(undefined1 *)(puVar8 + 8) = uVar1;
    puVar8[6] = puVar8[9];
    break;
  case '\v':
    FUN_01030cd0();
    FUN_01030c32();
    FUN_01030cb2();
    FUN_01030c5e();
LAB_01030aa6:
    puVar8[7] = puVar8[10];
    puVar8[6] = puVar8[9];
    *(undefined1 *)(puVar8 + 8) = 0;
    break;
  case '\f':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    FUN_01030c16(uVar13,*puVar11,0);
    uVar1 = 0;
    FUN_01030c5e();
    puVar8[1] = puVar8[10];
    *puVar8 = puVar8[9];
    *(undefined1 *)(puVar8 + 2) = uVar1;
    puVar8[4] = puVar8[10];
    puVar8[3] = puVar8[9];
    *(undefined1 *)(puVar8 + 5) = uVar1;
    break;
  case '\r':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar10 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[1] = uVar13;
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    FUN_01030c16(uVar13,*puVar11);
    FUN_01030c7c();
    break;
  case '\x0e':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar9 + 0x330),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[4] = uVar13;
    uVar13 = *puVar5;
    *(undefined1 *)(puVar8 + 5) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[3] = uVar13;
    puVar8[1] = puVar8[4];
    uVar1 = 0;
    *puVar8 = puVar8[3];
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar14 = *puVar11;
    *(undefined1 *)(puVar8 + 8) = 0;
    FUN_01030c40(uVar13,uVar14);
    puVar8[9] = extraout_s1_03;
LAB_01030b62:
    *(undefined1 *)(puVar8 + 0xb) = uVar1;
    break;
  case '\x0f':
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar10 + 0x1b8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[1] = uVar13;
    uVar13 = *puVar6;
    *(undefined1 *)(puVar8 + 2) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    *puVar8 = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar9 + 0x330),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[4] = uVar13;
    uVar13 = *puVar5;
    *(undefined1 *)(puVar8 + 5) = 0;
    uVar13 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    puVar8[3] = uVar13;
    uVar13 = VectorUnsignedToFloat(*(undefined4 *)(iVar4 + 0x4a8),(byte)(in_fpscr >> 0x15) & 3);
    puVar8[7] = uVar13;
    uVar14 = *puVar11;
    *(undefined1 *)(puVar8 + 8) = 0;
    uVar1 = FUN_01030c40(uVar13,uVar14);
    uVar14 = extraout_s1_04;
    goto LAB_01030be6;
  default:
    uVar1 = 0;
    puVar8[1] = DAT_01030e0c;
    *puVar8 = uVar14;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[4] = uVar13;
    puVar8[3] = uVar14;
    *(undefined1 *)(puVar8 + 5) = 0;
    puVar8[7] = uVar13;
    puVar8[6] = uVar14;
    *(undefined1 *)(puVar8 + 8) = 0;
    puVar8[10] = uVar13;
LAB_01030be6:
    puVar8[9] = uVar14;
LAB_01030bea:
    *(undefined1 *)(puVar8 + 0xb) = uVar1;
  }
  return;
}

