
undefined4 FUN_0103fcd6(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar5 = VectorUnsignedToFloat
                    ((uint)*(ushort *)(iVar4 + 8 + (uint)*param_2 * 0x16),
                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)FUN_0101edc0(uVar5);
  fVar7 = (float)FUN_0101edc0(0x40000000);
  uVar5 = FUN_01012c10(fVar6 / fVar7);
  uVar8 = FUN_010205a4(uVar5);
  FUN_0101f3f4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  fVar6 = (float)FUN_01011240(0x40000000);
  sVar1 = (short)(int)fVar6 + -1;
  psVar2 = (short *)(param_1 + 0x68);
  if (*(char *)(param_1 + 6) == '\x02') {
    sVar1 = (short)(int)fVar6 + 0x1f;
  }
  *psVar2 = sVar1;
  sVar1 = *(short *)(iVar4 + 8 + (uint)*param_2 * 0x16) - *psVar2;
  if (sVar1 < 10) {
    sVar1 = 10;
  }
  *(short *)(param_2 + 4) = sVar1;
  uVar3 = *psVar2 + *(short *)(iVar4 + 8 + (uint)*param_2 * 0x16);
  if (0x3ff < uVar3) {
    uVar3 = 0x3ff;
  }
  *(ushort *)(param_2 + 6) = uVar3;
  if (*(char *)(param_1 + 6) == '\x02') {
    sVar1 = *(short *)(iVar4 + 10 + (short)(ushort)*param_2 * 0x16);
    uVar3 = sVar1 - *(short *)(param_1 + 0x6a);
    *(short *)(param_2 + 10) = *(short *)(param_1 + 0x6a) + sVar1;
  }
  if (uVar3 < 10) {
    uVar3 = 10;
  }
  *(ushort *)(param_2 + 8) = uVar3;
  if (0x3ff < *(ushort *)(param_2 + 10)) {
    param_2[10] = 0xff;
    param_2[0xb] = 3;
  }
  return param_4;
}

