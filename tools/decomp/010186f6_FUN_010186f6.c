
undefined8 FUN_010186f6(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  short sVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  ushort uVar19;
  uint extraout_r1;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  char cVar26;
  uint in_fpscr;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  longlong lVar31;
  byte local_40;
  byte local_3f;
  undefined2 local_3e;
  uint local_3c;
  undefined8 local_38;
  
  puVar11 = DAT_010190c4;
  local_3e = DAT_01018a90;
  local_3c = CONCAT22(local_3c._2_2_,DAT_01018a94);
  sVar10 = (short)param_2;
  param_1 = param_1 + param_2 * 0xbc;
  puVar22 = DAT_010190c4 + sVar10 * 0x15 + 0xd;
  *(byte *)puVar22 = *(byte *)(param_1 + 0x60);
  bVar1 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x72));
  local_38 = (ulonglong)CONCAT14(bVar1,(undefined4)local_38);
  bVar2 = *(byte *)((int)&local_3e + (uint)*(byte *)(param_1 + 0x71));
  bVar3 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x70));
  local_38 = (ulonglong)CONCAT14(bVar1,(uint)bVar3);
  uVar12 = local_38;
  bVar4 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x6e));
  bVar5 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x6d));
  bVar6 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x6f));
  local_3f = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x6c));
  if (*(char *)(param_1 + 0x73) == '\0') {
    uVar19 = 1;
  }
  else {
    uVar19 = (ushort)*(byte *)(param_1 + 0x74);
  }
  *(ushort *)((int)puVar11 + sVar10 * 0x54 + 0x36) =
       (ushort)bVar1 * (ushort)bVar2 * (ushort)bVar3 * (ushort)bVar6 * (ushort)bVar4 * (ushort)bVar5
       * (ushort)local_3f * uVar19;
  cVar26 = *(char *)(param_1 + 0x68);
  bVar25 = cVar26 == '\0';
  if (bVar25) {
    cVar26 = *(char *)(param_1 + 0x69);
  }
  if (bVar25 && cVar26 == '\0') {
    cVar26 = '\x01';
  }
  else {
    cVar26 = '\x02';
  }
  *(char *)(puVar11 + sVar10 * 0x15 + 0xe) =
       cVar26 * *(char *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x67)) *
       *(char *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x66)) *
       *(char *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x65)) *
       *(char *)((int)&local_3c + (uint)*(byte *)(param_1 + 100));
  bVar7 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x7d));
  bVar8 = *(byte *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x7c));
  bVar9 = *(byte *)((int)&local_3e + (uint)*(byte *)(param_1 + 0x7b));
  cVar26 = *(char *)(param_1 + 0x79);
  bVar25 = cVar26 == '\0';
  if (bVar25) {
    cVar26 = *(char *)(param_1 + 0x78);
  }
  if (bVar25 && cVar26 == '\0') {
    cVar26 = '\x01';
  }
  else {
    cVar26 = '\x03';
  }
  *(byte *)((int)puVar11 + sVar10 * 0x54 + 0x39) =
       bVar9 * bVar8 * bVar7 * *(char *)((int)&local_3c + (uint)*(byte *)(param_1 + 0x7a)) * cVar26;
  uVar24 = (uint)*(byte *)((int)puVar11 + sVar10 * 0x54 + 0x39) *
           (uint)(byte)puVar11[sVar10 * 0x15 + 0xe] *
           (uint)*(ushort *)((int)puVar11 + sVar10 * 0x54 + 0x36) * (uint)(byte)*puVar22;
  puVar11[sVar10 * 0x15 + 0xf] = uVar24;
  if ((*(char *)(param_1 + 0xb1) == '\x03' || *(char *)(param_1 + 0xb1) == '\x04') ||
     (*(char *)(param_1 + 0x3c) == '\0')) {
    puVar11[sVar10 * 0x15 + 0x14] = *(int *)(param_1 + 0x28) * uVar24;
  }
  else {
    if (puVar11[3] < DAT_01019248) {
      uVar24 = 4;
    }
    else {
      uVar24 = 6;
    }
    puVar11[sVar10 * 0x15 + 0x14] = puVar11[3] / uVar24;
  }
  uVar24 = *(int *)(param_1 + 0x28) * (uint)(byte)*puVar22;
  puVar11[sVar10 * 0x15 + 0x10] = uVar24;
  uVar24 = *(ushort *)((int)puVar11 + sVar10 * 0x54 + 0x36) * uVar24;
  puVar11[sVar10 * 0x15 + 0x11] = uVar24;
  uVar24 = (byte)puVar11[sVar10 * 0x15 + 0xe] * uVar24;
  puVar11[sVar10 * 0x15 + 0x12] = uVar24;
  puVar11[sVar10 * 0x15 + 0x13] = *(byte *)((int)puVar11 + sVar10 * 0x54 + 0x39) * uVar24;
  local_38._4_4_ = (uint)bVar1;
  uVar24 = (uint)bVar6 * (uint)bVar3 * local_38._4_4_ * puVar11[sVar10 * 0x15 + 0x10] * (uint)bVar2;
  uVar23 = uVar24 * bVar4;
  puVar11[sVar10 * 0x15 + 0x17] = uVar24;
  puVar11[sVar10 * 0x15 + 0x16] = uVar23;
  puVar11[sVar10 * 0x15 + 0x15] = bVar5 * uVar23;
  uVar24 = puVar11[sVar10 * 0x15 + 0x17];
  puVar11[sVar10 * 0x15 + 0x18] = puVar11[sVar10 * 0x15 + 0x16];
  puVar11[sVar10 * 0x15 + 0x19] = uVar24;
  uVar24 = puVar11[sVar10 * 0x15 + 0x12];
  puVar11[sVar10 * 0x15 + 0x1b] = uVar24;
  puVar11[sVar10 * 0x15 + 0x1a] = (uint)bVar9 * (uint)bVar8 * bVar7 * uVar24;
  uVar23 = puVar11[sVar10 * 0x15 + 0x14];
  uVar24 = puVar11[3];
  *(char *)(puVar11 + sVar10 * 0x15 + 0x20) = (char)(uVar24 / uVar23);
  local_38 = uVar12;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined2 *)((int)puVar11 + sVar10 * 0x54 + 0x82) = 1;
  }
  else {
    uVar14 = FUN_01018de4(*(undefined4 *)(param_1 + 0x28),uVar24 / uVar23,
                          puVar11[sVar10 * 0x15 + 0xf]);
    *(undefined2 *)((int)puVar11 + sVar10 * 0x54 + 0x82) = uVar14;
  }
  lVar31 = FUN_0101369c((int)((ulonglong)puVar11[3] * 10),(int)((ulonglong)puVar11[3] * 10 >> 0x20),
                        (uint)(byte)*puVar22 * *(int *)(param_1 + 0x28) * 4);
  if (lVar31 == 0x2d) {
    *(undefined1 *)((int)puVar11 + sVar10 * 0x54 + 0x86) = 1;
  }
  else {
    uVar14 = FUN_01018df4();
    *(undefined2 *)(puVar11 + sVar10 * 0x15 + 0x21) = uVar14;
  }
  *(undefined1 *)((int)puVar11 + sVar10 * 0x54 + 0x7a) = *(undefined1 *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xb1) == '\x03' || *(char *)(param_1 + 0xb1) == '\x04') {
    uVar15 = 0;
  }
  else {
    uVar15 = 2;
  }
  iVar16 = FUN_01017e08(uVar15,(undefined1 *)(param_1 + 0xb0),&local_40);
  if (iVar16 == 0) {
    local_3c = (uint)local_40;
    uVar24 = *puVar11;
    fVar27 = (float)VectorUnsignedToFloat(uVar24,(byte)(in_fpscr >> 0x15) & 3);
    fVar28 = (float)VectorUnsignedToFloat
                              (local_3c * puVar11[sVar10 * 0x15 + 0x12],(byte)(in_fpscr >> 0x15) & 3
                              );
    uVar15 = FUN_01012c10((fVar27 * 10.0) / fVar28);
    uVar30 = FUN_0102fbe0(uVar15);
    uVar17 = FUN_0101f3f4((int)uVar30,(int)((ulonglong)uVar30 >> 0x20));
    lVar31 = (ulonglong)uVar24 * 10;
    local_38._0_4_ = (undefined4)lVar31;
    local_38._4_4_ = (uint)((ulonglong)lVar31 >> 0x20);
    uVar15 = local_38._4_4_;
    uVar29 = VectorFloatToUnsigned(uVar17,3);
    uVar17 = (undefined4)local_38;
    local_38 = lVar31;
    uVar23 = FUN_0101369c(uVar29,uVar17,uVar15,local_3c * *(int *)(param_1 + 0x2c),0);
    uVar24 = uVar23;
    while (cVar26 = uVar24 == 0x20, uVar24 < 0x20) {
      FUN_01018dd8();
      uVar24 = extraout_r1;
      if (cVar26 != '\0') goto LAB_01018a7c;
      uVar24 = extraout_r1 + 1;
    }
    uVar24 = uVar23;
    if (uVar23 < 0x20) {
LAB_01018a7c:
      uVar23 = FUN_01018dee((undefined4)local_38,local_38._4_4_,uVar24);
      puVar11[sVar10 * 0x15 + 0x1d] = uVar23;
      *(char *)(puVar11 + sVar10 * 0x15 + 0x1c) = (char)uVar24;
    }
    else {
      uVar21 = puVar11[5];
      uVar24 = *(int *)(param_1 + 0x2c) * 3;
      uVar23 = (uint)((ulonglong)local_40 * (ulonglong)uVar21);
      iVar20 = (int)((ulonglong)local_40 * (ulonglong)uVar21 >> 0x20);
      if (uVar21 == uVar24 * (uVar21 / uVar24)) {
        uVar24 = FUN_01018dee(uVar23,iVar20,3);
      }
      else {
        uVar24 = uVar23 >> 2 | iVar20 << 0x1e;
      }
      puVar11[sVar10 * 0x15 + 0x1d] = uVar24;
      uVar13 = FUN_01018dee((int)((ulonglong)*puVar11 * 10),(int)((ulonglong)*puVar11 * 10 >> 0x20),
                            puVar11[sVar10 * 0x15 + 0x1d]);
      *(undefined1 *)(puVar11 + sVar10 * 0x15 + 0x1c) = uVar13;
    }
    if (*(char *)((int)puVar11 + sVar10 * 0x54 + 0x7a) == '\x01') {
      uVar14 = FUN_01018de4(local_3c,1,*(undefined4 *)(param_1 + 0x2c));
      *(undefined2 *)(puVar11 + sVar10 * 0x15 + 0x1e) = uVar14;
    }
    else {
      uVar14 = FUN_01018de6(local_3c,puVar11[sVar10 * 0x15 + 0x1d],*(undefined4 *)(param_1 + 0x2c));
      *(undefined2 *)(puVar11 + sVar10 * 0x15 + 0x1e) = uVar14;
      *(short *)((int)puVar11 + sVar10 * 0x54 + 0x7e) =
           (short)(puVar11[3] / *(uint *)(param_1 + 0x28));
    }
    *(undefined1 *)((int)puVar11 + sVar10 * 0x54 + 0x7b) = 0;
    uVar24 = 1;
    *(undefined1 *)(puVar11 + sVar10 * 0x15 + 0x1f) = 1;
    uVar23 = *(uint *)(param_1 + 0x28);
    if (uVar23 != 0) {
      uVar24 = *(uint *)(param_1 + 0x2c);
    }
    if (uVar23 != 0 && uVar24 != 0) {
      if (uVar24 < uVar23) {
        cVar26 = '\0';
        *(undefined1 *)((int)puVar11 + sVar10 * 0x54 + 0x7b) = 2;
        FUN_01018a96(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
        if (cVar26 == '\0') goto LAB_01018a70;
        uVar19 = *(short *)((int)puVar11 + sVar10 * 0x54 + 0x7e) *
                 (ushort)(byte)puVar11[sVar10 * 0x15 + 0x1f];
      }
      else {
        if (uVar24 <= uVar23) {
          uVar18 = (uint)*(byte *)((int)puVar11 + sVar10 * 0x54 + 0x7a);
          uVar24 = uVar18;
          uVar21 = uVar23;
          if (uVar18 == 2) {
            uVar21 = *(uint *)(param_1 + 0x2c);
            uVar24 = uVar23;
          }
          if (uVar18 != 2 || uVar24 != uVar21) goto LAB_01018a70;
        }
        cVar26 = '\0';
        *(undefined1 *)((int)puVar11 + sVar10 * 0x54 + 0x7b) = 1;
        FUN_01018a96(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
        if (cVar26 == '\0') goto LAB_01018a70;
        uVar19 = *(ushort *)((int)puVar11 + sVar10 * 0x54 + 0x7e) /
                 (ushort)(byte)puVar11[sVar10 * 0x15 + 0x1f];
      }
      *(ushort *)((int)puVar11 + sVar10 * 0x54 + 0x7e) = uVar19;
    }
  }
LAB_01018a70:
  return CONCAT44(param_4,iVar16);
}

