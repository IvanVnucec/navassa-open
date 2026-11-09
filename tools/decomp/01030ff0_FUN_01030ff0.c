
undefined8 FUN_01030ff0(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  fVar4 = DAT_01031264;
  if (param_1 < 2) {
    if ((*(byte *)(DAT_010313f4 + 1) & 3) == 2) {
      fVar6 = 1.0;
      fVar3 = DAT_01031264;
    }
    else {
      uVar1 = FUN_0102fb60();
      uVar2 = FUN_0102fb6c();
      fVar3 = (float)VectorFloatToUnsignedFixed(uVar2,0x10,0xb);
      fVar6 = (float)VectorFloatToUnsignedFixed(uVar1,0x10,8);
      fVar3 = fVar3 * fVar4;
    }
    fVar4 = (float)FUN_01036d04(0x40000000);
    fVar5 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 * 0xbc + DAT_010313ec + 0x38),
                              (byte)(in_fpscr >> 0x15) & 3);
    uVar7 = FUN_01012c10(fVar4 / (fVar3 * fVar6 * DAT_01031268 * fVar5));
    uVar7 = FUN_010200e0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_010313f8,DAT_010313fc);
    FUN_0102035c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_01031400,DAT_01031404);
    fVar4 = (float)FUN_0101f3f4();
    *param_2 = (short)(int)(fVar4 + 0.5);
    uVar1 = 0;
  }
  else {
    uVar1 = 0x2409;
  }
  return CONCAT44(param_4,uVar1);
}

