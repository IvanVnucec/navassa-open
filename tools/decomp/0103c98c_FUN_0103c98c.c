
undefined8 FUN_0103c98c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    uVar3 = *(undefined4 *)(param_4 + 0x24);
    uVar1 = *(ushort *)(param_4 + 0x20);
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + 0x2c);
    uVar1 = *(ushort *)(param_4 + 0x28);
  }
  uVar2 = *(ushort *)(param_3 + 0x4bc);
  uVar6 = FUN_0102025c(uVar3);
  FUN_0101f250((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0,DAT_0103cd9c);
  uVar3 = FUN_0101f3f4();
  fVar4 = (float)FUN_0101edc0(uVar3);
  fVar5 = (float)VectorUnsignedToFloat((uint)uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * 5.0 - (DAT_0103ca2c + fVar5 * -0.25);
  if ((int)((uint)(fVar4 < 0.0) << 0x1f) < 0) {
    fVar4 = -fVar4;
  }
  if (((int)((uint)(fVar4 < 2.0) << 0x1f) < 0) && (0x38 < ((uint)uVar1 << 0x12) >> 0x1a)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return CONCAT44(param_4,uVar3);
}

