
void FUN_0103c4ac(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  uVar5 = 0;
  iVar1 = param_5;
  if (param_5 != 1) {
    iVar1 = 0;
  }
  iVar6 = param_3 + (short)param_4 * 0x18;
  sVar7 = 0;
  if ((int)(short)(*(byte *)(iVar6 + 0x2f) & 1 | (ushort)iVar1) *
      (int)(short)(ushort)(*(byte *)(iVar6 + 0x2f) >> 1) == 0) {
    uVar10 = 0;
    uVar9 = 0xff;
  }
  else {
    uVar5 = *(undefined2 *)(iVar6 + 0x2c);
    sVar7 = (short)*(char *)(iVar6 + 0x2e);
    uVar9 = (undefined1)(*(ushort *)(iVar6 + 0x2a) + 0x80 >> 8);
    uVar10 = uVar9;
  }
  iVar1 = (short)param_5 * 10 + param_3 + (short)param_4 * 0x14;
  *(undefined2 *)(iVar1 + 0x1c8) = 0;
  *(undefined2 *)(iVar1 + 0x1ca) = 0;
  *(undefined2 *)(iVar1 + 0x1ce) = uVar5;
  *(short *)(iVar1 + 0x1cc) = sVar7;
  *(undefined1 *)(iVar1 + 0x1d0) = uVar9;
  *(undefined1 *)(iVar1 + 0x1d1) = uVar10;
  param_3 = param_3 + param_5 * 4;
  uVar2 = 0x80000000 >> (param_4 & 0xff);
  uVar8 = uVar2 ^ 0xffffffff;
  *(uint *)(param_3 + 4) = uVar8 & *(uint *)(param_3 + 4);
  *(uint *)(param_3 + 0xc) = uVar2 | *(uint *)(param_3 + 0xc);
  uVar18 = FUN_010200bc((int)*(short *)(iVar1 + 0x1cc));
  FUN_0101f250((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_0103cd8c,DAT_0103cd90);
  uVar3 = FUN_0101f3f4();
  fVar17 = (float)VectorSignedToFloat(-(uint)*(ushort *)(iVar1 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3
                                     );
  fVar14 = (float)FUN_01011240(0x41200000,fVar17 / DAT_0103c7e0);
  *(uint *)(param_3 + 0xc) = uVar8 & *(uint *)(param_3 + 0xc);
  fVar15 = (float)FUN_01038854(uVar3);
  fVar16 = (float)FUN_01038850(uVar3);
  fVar15 = fVar14 * fVar15;
  bVar13 = NAN(fVar15);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar15 < 0.0) << 0x1f | (uint)(fVar15 == 0.0) << 0x1e;
  bVar4 = (byte)(uVar2 >> 0x18);
  bVar11 = (bool)(bVar4 >> 7);
  bVar12 = (bool)(bVar4 >> 6 & 1);
  fVar17 = fVar15;
  if (bVar12 || bVar11 != bVar13) {
    fVar17 = -fVar15;
    bVar13 = NAN(fVar17);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar17 < 0.0) << 0x1f | (uint)(fVar17 == 0.0) << 0x1e;
    bVar4 = (byte)(uVar2 >> 0x18);
    bVar11 = (bool)(bVar4 >> 7);
    bVar12 = (bool)(bVar4 >> 6 & 1);
  }
  fVar14 = fVar14 * fVar16;
  fVar16 = DAT_0103c7e4;
  if (!bVar12 && bVar11 == bVar13) {
    fVar16 = fVar17;
  }
  fVar17 = fVar14;
  if (fVar14 == 0.0 || fVar14 < 0.0 != NAN(fVar14)) {
    fVar17 = -fVar14;
  }
  if (fVar16 < fVar17) {
    fVar16 = fVar17;
  }
  fVar16 = fVar16 * DAT_0103c7e8;
  bVar4 = 0;
  fVar17 = DAT_0103c7f0;
  if (fVar16 < DAT_0103c7ec != (NAN(fVar16) || NAN(DAT_0103c7ec))) {
    for (; (fVar16 < 0.5 && (bVar4 < 7)); bVar4 = bVar4 + 1) {
      fVar16 = fVar16 * 2.0;
    }
    fVar17 = (float)VectorSignedToFloat(1 << (uint)(byte)(bVar4 + 0xf),
                                        (byte)((uVar2 & 0xfffffff) >> 0x15) & 3);
    fVar17 = -fVar17;
  }
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1) = 0;
    iVar6 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar6 + 5) = 0;
  } while (iVar1 < 5);
  *(byte *)(param_1 + 10) = bVar4;
  *(char *)(param_1 + 2) = (char)(int)(fVar14 * fVar17);
  *(char *)(param_1 + 7) = (char)(int)(fVar15 * fVar17);
  return;
}

