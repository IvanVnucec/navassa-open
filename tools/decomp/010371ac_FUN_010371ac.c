
void FUN_010371ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  task_enter_critical();
  iVar5 = param_1 * 0xc + DAT_01037374;
  fVar12 = *(float *)(iVar5 + 8);
  fVar11 = *(float *)(iVar5 + 4);
  FUN_0102bf96();
  uVar3 = FUN_01012c10(fVar8 * fVar8 + fVar9 * fVar9);
  uVar7 = FUN_0103ba18(uVar3);
  FUN_0101f250(0,0x3f000000,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  fVar8 = (float)FUN_0101f3f4();
  uVar3 = FUN_01012c10();
  FUN_01035f92(uVar3);
  FUN_010372fc();
  fVar9 = (float)FUN_0101f3f4();
  uVar7 = FUN_01012c10();
  uVar4 = (undefined4)((ulonglong)DAT_01037380 >> 0x20);
  uVar10 = (undefined4)DAT_01037380;
  FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar10,uVar4);
  FUN_01037308();
  uVar3 = FUN_010372f4();
  *(undefined4 *)(iVar5 + 0x1c) = uVar3;
  uVar3 = VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = FUN_01012c10(uVar3);
  uVar7 = FUN_0102035c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_01037388);
  FUN_0102035c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_01037390);
  FUN_0101f3f4();
  fVar6 = (float)FUN_01011240(0x41200000);
  uVar3 = FUN_01012c10((1.0 - fVar12) * fVar8 + fVar12 * fVar6);
  FUN_01035f92(uVar3);
  uVar7 = FUN_010372fc();
  FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar10,uVar4);
  FUN_01037308();
  uVar3 = FUN_010372f4();
  fVar9 = fVar9 - fVar11;
  bVar1 = fVar9 < DAT_0103738c;
  bVar2 = NAN(DAT_0103738c);
  *(undefined4 *)(iVar5 + 0x20) = uVar3;
  if (bVar1 == (NAN(fVar9) || bVar2)) {
    fVar9 = 0.5;
  }
  else if ((int)((uint)(fVar9 < -0.5) << 0x1f) < 0) {
    fVar9 = -0.5;
  }
  uVar7 = FUN_01012c10(fVar9);
  FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_01037390);
  FUN_01037308();
  uVar3 = FUN_010372f4();
  *(undefined4 *)(iVar5 + 0x18) = uVar3;
  return;
}

