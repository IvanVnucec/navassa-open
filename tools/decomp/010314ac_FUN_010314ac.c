
undefined4 FUN_010314ac(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)FUN_01031468();
  uVar3 = 0;
  uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 < 0.0) << 0x1f | (uint)(param_1 == 0.0) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == NAN(param_1)) {
    param_1 = -param_1;
  }
  param_1 = param_1 + DAT_01031624;
  fVar5 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(DAT_01031644 + param_2 * 0x16 + 0xe2),
                            (byte)(uVar1 >> 0x15) & 3);
  FUN_01012c10((fVar5 / 25.0) / DAT_01031628);
  FUN_01031548();
  FUN_01031550();
  fVar5 = (float)FUN_0101f3f4();
  if ((fVar5 < DAT_0103162c == (NAN(fVar5) || NAN(DAT_0103162c))) ||
     ((int)((uint)(fVar5 < 0.0) << 0x1f) < 0)) {
    uVar3 = 0xff15;
  }
  else {
    *param_4 = (fVar4 + fVar5) - param_1;
  }
  return uVar3;
}

