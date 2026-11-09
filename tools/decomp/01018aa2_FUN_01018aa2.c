
undefined8 FUN_01018aa2(int param_1,int param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint extraout_r1;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ushort uVar14;
  bool bVar15;
  char cVar16;
  uint in_fpscr;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  uint uVar20;
  longlong lVar21;
  byte local_40 [2];
  undefined2 local_3e;
  undefined2 local_3c [2];
  uint local_38;
  
  local_3e = DAT_010195d8;
  local_3c[0] = DAT_010195d4;
  if (*(char *)(param_1 + 0x49) == '\x01') {
    bVar5 = 6;
  }
  else if (*(char *)(param_1 + 0x49) == '\x02') {
    bVar5 = 8;
  }
  else {
    bVar5 = 0xc;
  }
  *param_3 = bVar5;
  cVar16 = *(char *)(param_1 + 0x41);
  uVar9 = (uint)*(byte *)((int)local_3c + (*(byte *)(param_1 + 0x40) - 2));
  bVar15 = cVar16 == '\0';
  if (bVar15) {
    cVar16 = *(char *)(param_1 + 0x42);
  }
  if (!bVar15 || cVar16 != '\0') {
    uVar9 = uVar9 << 1;
  }
  bVar5 = (byte)uVar9;
  cVar16 = *(char *)(param_1 + 0x43);
  bVar15 = cVar16 == '\0';
  if (bVar15) {
    cVar16 = *(char *)(param_1 + 0x44);
  }
  if (!bVar15 || cVar16 != '\0') {
    bVar5 = (byte)(uVar9 << 1);
  }
  param_3[1] = bVar5;
  cVar16 = *(char *)(param_1 + 0x3c);
  bVar15 = cVar16 == '\0';
  if (bVar15) {
    cVar16 = *(char *)(param_1 + 0x3d);
  }
  if (bVar15 && cVar16 == '\0') {
    cVar16 = '\x01';
  }
  else {
    cVar16 = '\x02';
  }
  bVar10 = *(char *)((int)local_3c + (uint)*(byte *)(param_1 + 0x38)) *
           *(char *)((int)local_3c + (uint)*(byte *)(param_1 + 0x39)) *
           *(char *)((int)local_3c + (uint)*(byte *)(param_1 + 0x3a)) *
           *(char *)((int)local_3c + (uint)*(byte *)(param_1 + 0x3b)) * cVar16;
  param_3[2] = bVar10;
  bVar5 = *(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x30));
  bVar1 = *(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x31));
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar14 = 1;
  }
  else {
    uVar14 = (ushort)*(byte *)(param_1 + 0x2d);
  }
  uVar2 = (ushort)*(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x2f));
  uVar8 = uVar14 * uVar2 * (ushort)bVar5 * (ushort)bVar1 *
          (ushort)*(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x32)) *
          (ushort)*(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x33)) *
          (ushort)*(byte *)((int)local_3c + (*(byte *)(param_1 + 0x34) - 2)) *
          (ushort)*(byte *)((int)local_3c + (uint)*(byte *)(param_1 + 0x35));
  *(ushort *)(param_3 + 4) = uVar8;
  iVar11 = (uint)uVar8 *
           (uint)bVar10 * (int)(short)(ushort)param_3[1] * (int)(short)(ushort)*param_3;
  *(int *)(param_3 + 8) = iVar11;
  *(int *)(param_3 + 0x1c) = *(int *)(param_1 + 4) * iVar11;
  uVar9 = (uint)(*(int *)(param_1 + 4) * iVar11) / (uint)*param_3;
  *(uint *)(param_3 + 0xc) = uVar9;
  uVar9 = uVar9 / param_3[1];
  *(uint *)(param_3 + 0x10) = uVar9;
  uVar9 = uVar9 / bVar10;
  *(uint *)(param_3 + 0x14) = uVar9;
  *(uint *)(param_3 + 0x18) = uVar9 / uVar8;
  uVar9 = *(uint *)(param_3 + 0x14) / (uint)((int)(short)uVar2 * (int)(short)uVar14);
  *(uint *)(param_3 + 0x20) = uVar9;
  uVar9 = uVar9 / bVar5;
  *(uint *)(param_3 + 0x24) = uVar9;
  *(uint *)(param_3 + 0x28) = uVar9 / bVar1;
  *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_3 + 0xc);
  *(uint *)(param_3 + 0x30) = *(uint *)(param_3 + 0xc) / (uint)param_3[1];
  uVar9 = (uint)*(byte *)(param_2 + 0x3a);
  if (uVar9 != 0) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      uVar9 = *(uint *)(param_3 + 0xc) / (uint)*(byte *)(param_2 + 0x3b);
    }
    else {
      uVar9 = *(uint *)(param_3 + 0x10) / (uint)*(byte *)(param_2 + 0x3b);
    }
  }
  *(uint *)(param_3 + 0x34) = uVar9;
  *(uint *)(param_3 + 0x38) = uVar9;
  local_38 = (uint)param_3[2] * (uint)param_3[1] * *(int *)(param_1 + 4) * (uint)uVar8 * 2;
  param_3[0x4c] = (byte)(DAT_010190c4[3] / local_38);
  puVar4 = DAT_010190c4;
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar6 = (undefined2)(DAT_010190c4[3] / (uint)(*(int *)(param_1 + 4) << 1));
  }
  else {
    uVar6 = (undefined2)(DAT_010190c4[3] / (uint)(*(int *)(param_1 + 4) << 7));
  }
  *(undefined2 *)(param_3 + 0x4e) = uVar6;
  lVar21 = FUN_01018dee((int)((ulonglong)puVar4[3] * 10),(int)((ulonglong)puVar4[3] * 10 >> 0x20),
                        *(int *)(param_1 + 4) << 2);
  if (lVar21 == 0x2d) {
    param_3[0x52] = 1;
  }
  else {
    uVar6 = FUN_01018df4();
    *(undefined2 *)(param_3 + 0x50) = uVar6;
  }
  uVar9 = puVar4[1];
  bVar15 = (uVar9 / *(uint *)(param_3 + 0x1c) & 0xff) == 1;
  if (bVar15) {
    uVar9 = 0;
  }
  bVar5 = (byte)uVar9;
  if (!bVar15) {
    bVar5 = 1;
  }
  param_3[0x53] = bVar5;
  param_3[0x46] = *(byte *)(param_1 + 0x8c);
  cVar16 = *(char *)(param_1 + 0x11);
  if (cVar16 != '\0') {
    cVar16 = '\x02';
  }
  iVar11 = FUN_01017e08(cVar16,param_1 + 0x8c,local_40);
  bVar15 = iVar11 == 0;
  if (bVar15) {
    uVar9 = (uint)local_40[0];
    uVar20 = *puVar4;
    fVar19 = (float)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorUnsignedToFloat
                              (uVar9 * *(int *)(param_3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = FUN_01012c10((fVar19 * 10.0) / fVar17);
    uVar18 = FUN_0102fbe0(uVar7);
    uVar7 = FUN_0101f3f4((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    lVar21 = (ulonglong)uVar20 * 10;
    uVar12 = (undefined4)lVar21;
    uVar13 = (undefined4)((ulonglong)lVar21 >> 0x20);
    uVar7 = FUN_0101369c(uVar7,uVar12,uVar13,uVar9 * *(int *)(param_1 + 8),0);
    uVar20 = VectorFloatToUnsigned(uVar7,3);
    uVar9 = uVar20;
    while ((cVar16 = uVar9 == 0x20, uVar3 = uVar20, uVar9 < 0x20 &&
           (FUN_01018dd8(), uVar3 = extraout_r1, cVar16 == '\0'))) {
      uVar9 = extraout_r1 + 1;
    }
    uVar7 = FUN_01018dee(uVar12,uVar13,uVar3);
    *(undefined4 *)(param_3 + 0x40) = uVar7;
    param_3[0x3c] = (byte)uVar3;
    if (param_3[0x46] == 1) {
      uVar6 = FUN_01018de6(local_40[0],local_38,*(undefined4 *)(param_1 + 8));
    }
    else {
      uVar6 = FUN_01018de6(local_40[0],*(undefined4 *)(param_3 + 0x40),*(undefined4 *)(param_1 + 8))
      ;
      *(short *)(param_3 + 0x4a) = (short)(puVar4[3] / *(uint *)(param_1 + 4));
    }
    *(undefined2 *)(param_3 + 0x44) = uVar6;
    uVar9 = 1;
    param_3[0x47] = 0;
    param_3[0x48] = 1;
    uVar20 = *(uint *)(param_1 + 4);
    if (uVar20 != 0) {
      uVar9 = *(uint *)(param_1 + 8);
    }
    if (uVar20 == 0 || uVar9 == 0) goto LAB_01018dcc;
    if (uVar9 < uVar20) {
      param_3[0x47] = 1;
      bVar15 = param_3[0x46] == 2;
      param_3[0x48] = (byte)(uVar20 / uVar9);
      goto LAB_01018d9c;
    }
    if ((uVar9 <= uVar20) && (param_3[0x46] != 2)) goto LAB_01018dcc;
    param_3[0x47] = 2;
    param_3[0x48] = (byte)(uVar9 / uVar20);
    if (param_3[0x46] != 2) goto LAB_01018dcc;
    uVar14 = *(ushort *)(param_3 + 0x4a) / (ushort)param_3[0x48];
  }
  else {
LAB_01018d9c:
    if (!bVar15) goto LAB_01018dcc;
    uVar14 = *(short *)(param_3 + 0x4a) * (ushort)param_3[0x48];
  }
  *(ushort *)(param_3 + 0x4a) = uVar14;
LAB_01018dcc:
  return CONCAT44(param_4,iVar11);
}

