
longlong FUN_01038ee8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  undefined2 uVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = thunk_FUN_0102fb6e();
  *(undefined2 *)(param_1 + 0x3c) = uVar2;
  uVar2 = thunk_FUN_0102fb62();
  *(undefined2 *)(param_1 + 0x3a) = uVar2;
  fVar4 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(DAT_0103925c + param_2 * 0xbc + 0x1b8),
                            (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 / DAT_01039194;
  *(float *)(param_1 + 0x34) = fVar4;
  fVar3 = DAT_0103919c;
  fVar4 = fVar4 / DAT_01039198;
  fVar6 = fVar4 * DAT_010391a0 + fVar4 * fVar4 * DAT_010391a4;
  *(float *)(param_1 + 0xc) = fVar6;
  fVar4 = *(float *)(param_1 + 0x30) * fVar6;
  uVar7 = VectorFloatToUnsigned(fVar4 * fVar3 + 0.5,3);
  *(ushort *)(param_1 + 0x4a) = (ushort)(byte)((uint)uVar7 >> 8);
  *(short *)(param_1 + 0x4e) = (short)(int)(fVar4 * DAT_010391a8 + 0.5);
  fVar3 = DAT_01039240;
  *(ushort *)(param_1 + 0x48) = (ushort)uVar7 & 0xff;
  fVar6 = fVar6 * DAT_01039244;
  fVar5 = (float)VectorFloatToUnsignedFixed((uint)*(ushort *)(param_1 + 0x3c),0x10,0xb);
  *(short *)(param_1 + 0x50) = (short)(int)(fVar4 * fVar3 + 0.5);
  fVar3 = DAT_0103924c;
  fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x38),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar4 = fVar4 * DAT_01039248 * DAT_01039194;
  *(char *)(param_1 + 0x46) = (char)(int)((fVar6 * fVar5) / *(float *)(param_1 + 0x2c));
  uVar8 = FUN_01012c10(fVar4 * fVar3);
  uVar8 = FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_01039260,DAT_01039264);
  uVar9 = FUN_010200bc((uint)*(ushort *)(param_1 + 0x3c) / (uint)*(ushort *)(param_1 + 0x3a));
  uVar8 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar8,
                       (int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,0x3fc00000);
  FUN_0102035c(0,DAT_01039268,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  fVar3 = (float)FUN_0101f3f4();
  fVar4 = fVar3 + DAT_01039250 + 0.5;
  if (fVar4 != 0.0 && fVar4 < 0.0 == NAN(fVar4)) {
    fVar3 = (float)(int)fVar4;
  }
  bVar1 = SUB41(fVar3,0);
  if (fVar4 == 0.0 || fVar4 < 0.0 != NAN(fVar4)) {
    bVar1 = 0;
  }
  if (0x3f < bVar1) {
    bVar1 = 0x3f;
  }
  *(byte *)(param_1 + 0x52) = bVar1;
  return (ulonglong)param_4 << 0x20;
}

