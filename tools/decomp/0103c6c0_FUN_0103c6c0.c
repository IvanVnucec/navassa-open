
undefined4 FUN_0103c6c0(int param_1,int param_2,undefined2 *param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(ushort *)(param_4 + 0x18);
  param_3[0x25e] = uVar2;
  uVar7 = *(uint *)(param_4 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x34);
  sVar3 = (short)(int)-*(float *)(param_2 + 0xc);
  fVar13 = (float)VectorSignedToFloat((int)(short)((char)(uVar7 >> 8) * sVar3),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * fVar12;
  if (param_1 == 1) {
    fVar12 = *(float *)(param_2 + 0x3c);
  }
  fVar14 = (float)VectorSignedFixedToFloat((int)(short)(uVar7 >> 0x10) * (int)sVar3,0x10,8);
  iVar10 = (int)((fVar12 / DAT_0103ca0c) * fVar14) +
           (int)(fVar13 / DAT_0103ca0c) +
           *(int *)(param_2 + 0x20) * (uVar7 & 0xff) + *(int *)(param_2 + 0x1c);
  *param_3 = (short)(iVar10 / 1000);
  iVar4 = DAT_0103cd94;
  uVar5 = 0;
  iVar9 = *(int *)(param_2 + 0x28);
  uVar6 = 0;
  bVar11 = SBORROW4(iVar10,iVar9);
  iVar1 = iVar10 - iVar9;
  if (iVar9 <= iVar10) {
    bVar11 = SBORROW4(*(int *)(param_2 + 0x2c),iVar10);
    iVar1 = *(int *)(param_2 + 0x2c) - iVar10;
  }
  if ((iVar1 < 0 == bVar11) && (uVar2 < 0x49)) {
    while (iVar9 = *(int *)(param_2 + 0x30) + iVar9, iVar9 < iVar10) {
      uVar5 = uVar5 + 1;
    }
    for (uVar8 = 4; uVar8 < uVar2; uVar8 = uVar8 + 4) {
      uVar6 = uVar6 + 1;
    }
  }
  else {
    uVar6 = 0x12;
    uVar5 = 1;
  }
  if ((int)((uint)*(ushort *)(param_2 + 4) << 0x15) < 0) {
    if (*(byte *)((int)param_3 + 3) != uVar6) {
      *(ushort *)(DAT_0103cd94 + 0x14) = *(ushort *)(DAT_0103cd94 + 0x14) | 0x8000;
    }
    if (*(byte *)(param_3 + 1) != uVar5) {
      *(ushort *)(iVar4 + 0x14) = *(ushort *)(iVar4 + 0x14) | 0x4000;
    }
  }
  *(char *)(param_3 + 1) = (char)uVar5;
  *(char *)((int)param_3 + 3) = (char)uVar6;
  if (uVar6 != 0x12) {
    *(ushort *)(iVar4 + 0x12) =
         (*(byte *)((int)param_3 + (uint)uVar5 * 0x18 + (uint)uVar6 * 0x18 + 0x2f) & 0xfe) << 7;
  }
  if (*(char *)((int)param_3 + 3) != '\x12') {
    return 0;
  }
  return 1;
}

