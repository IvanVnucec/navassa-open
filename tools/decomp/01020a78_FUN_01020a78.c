
undefined4
FUN_01020a78(float param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char *extraout_r1;
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  fVar10 = DAT_01020d6c;
  uVar6 = in_fpscr & 0xfffffff | (uint)(param_1 == 0.0) << 0x1e;
  fVar8 = DAT_01020d6c;
  if ((byte)(uVar6 >> 0x1e) == 0) {
    fVar8 = (float)FUN_0101edc0();
    fVar8 = fVar8 * 10.0;
  }
  iVar3 = DAT_01020f64 + (short)param_2 * 0xd0;
  iVar5 = DAT_01020f58 + (short)param_2 * 0xb;
  fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar5 + 4),(byte)(uVar6 >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(char *)(iVar5 + 8),(byte)(uVar6 >> 0x15) & 3);
  fVar11 = fVar8 + (3.0 - fVar11) * 6.0;
  uVar6 = uVar6 & 0xfffffff | (uint)(fVar11 < fVar9) << 0x1f;
  uVar7 = uVar6 | (uint)(NAN(fVar11) || NAN(fVar9)) << 0x1c;
  if (((byte)(uVar6 >> 0x1f) == ((byte)(uVar7 >> 0x1c) & 1)) && (*(char *)(iVar5 + 10) != '\0')) {
    *(undefined1 *)(iVar3 + 0xc9) = 0;
    *(byte *)(iVar3 + 200) = 0;
    *(float *)(iVar3 + 0xcc) = param_1;
    FUN_01020ba8();
    *extraout_r1 = *extraout_r1 + '\x01';
    extraout_r1[1] = extraout_r1[1] + '\x01';
    fVar10 = fVar8;
  }
  else {
    param_1 = *(float *)(iVar3 + 0xcc) + param_1;
    *(float *)(iVar3 + 0xcc) = param_1;
    if (*(char *)(iVar3 + 0xc9) == *(char *)(iVar5 + 7)) {
      *(float *)(iVar3 + 0xcc) = param_1 - *(float *)(iVar3 + (uint)*(byte *)(iVar3 + 200) * 4);
    }
    uVar12 = FUN_01020ba8();
    pbVar1 = (byte *)((ulonglong)uVar12 >> 0x20);
    uVar6 = (uint)uVar12;
    bVar2 = *pbVar1;
    *pbVar1 = bVar2 + 1;
    if ((byte)(bVar2 + 1) == uVar6) {
      *pbVar1 = 0;
    }
    bVar2 = pbVar1[1];
    uVar4 = (uint)bVar2;
    if (uVar4 < uVar6) {
      bVar2 = bVar2 + 1;
    }
    if (uVar4 < uVar6) {
      pbVar1[1] = bVar2;
    }
    param_1 = (float)VectorUnsignedToFloat((uint)pbVar1[1],(byte)(uVar7 >> 0x15) & 3);
    param_1 = *(float *)(pbVar1 + 4) / param_1;
    if (param_1 != 0.0) {
      fVar10 = (float)FUN_0101edc0(param_1);
      fVar10 = fVar10 * 10.0;
    }
  }
  uVar12 = FUN_01012c10(param_1);
  iVar3 = DAT_01020f54;
  *(undefined8 *)(DAT_01020f54 + param_2 * 0x10) = uVar12;
  *(float *)(iVar3 + param_2 * 0x10 + 8) = fVar10;
  return param_5;
}

