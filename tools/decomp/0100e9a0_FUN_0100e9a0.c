
undefined4 FUN_0100e9a0(int param_1,int param_2,uint param_3,int param_4,float *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar9;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  if (1 < param_3) {
    param_3 = 0;
  }
  iVar3 = DAT_0100ee1c + param_1 * 0xd00;
  if (*(short *)(iVar3 + param_3 * 0x40 + param_2 * 2 + 0xc00) == 1) {
    iVar5 = iVar3 + param_3 * 0x20 + param_2;
    uVar4 = (uint)*(byte *)(iVar5 + 0xc80);
    uVar6 = (uint)*(byte *)(iVar5 + 0xcc0);
    iVar5 = iVar3 + param_3 * 0x400 + param_2 * 0x20;
    iVar7 = iVar5 + uVar6 * 4;
    iVar3 = iVar3 + param_3 * 0x200 + param_2 * 0x10;
    if (uVar4 == uVar6) {
      uVar1 = *(undefined2 *)(iVar3 + uVar6 * 2);
      fVar8 = *(float *)(iVar7 + 0x400);
    }
    else {
      uVar2 = (uint)(param_4 << 0x15) >> 0x18;
      if (uVar2 < uVar6) {
        if (uVar4 < uVar2) {
          iVar7 = iVar5 + uVar2 * 4;
          uVar12 = FUN_0100eae8(0x3e000000,
                                (*(float *)(iVar7 + 0x404) - *(float *)(iVar7 + 0x400)) * 0.125,
                                (int)*(short *)(iVar3 + uVar2 * 2),
                                (int)*(short *)(iVar3 + uVar2 * 2 + 2));
          fVar8 = extraout_s1_01;
          fVar10 = extraout_s2_01;
        }
        else {
          iVar7 = iVar5 + uVar4 * 4;
          uVar12 = FUN_0100eae8(0x3e000000,
                                (*(float *)(iVar7 + 0x404) - *(float *)(iVar7 + 0x400)) * 0.125,
                                (int)*(short *)(iVar3 + uVar4 * 2),
                                (int)*(short *)(iVar3 + uVar4 * 2 + 2));
          uVar2 = uVar4;
          fVar8 = extraout_s1_00;
          fVar10 = extraout_s2_00;
        }
      }
      else {
        uVar12 = FUN_0100eae8(0x3e000000,
                              (*(float *)(iVar7 + 0x400) - *(float *)(iVar7 + 0x3fc)) * 0.125,
                              (int)*(short *)(iVar3 + uVar6 * 2 + -2),
                              (int)*(short *)(iVar3 + uVar6 * 2));
        uVar2 = uVar6;
        fVar8 = extraout_s1;
        fVar10 = extraout_s2;
      }
      param_5 = (float *)uVar12;
      fVar11 = (float)VectorSignedToFloat(param_4 + uVar2 * -8,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = *(float *)(iVar5 + uVar2 * 4 + 0x400) + fVar11 * fVar8;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)((int)((ulonglong)uVar12 >> 0x20) +
                                                        uVar2 * 2),(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = (undefined2)(int)(fVar9 + fVar11 * fVar10);
    }
    *(undefined2 *)(param_5 + 1) = uVar1;
    *param_5 = fVar8;
  }
  else {
    *(undefined2 *)(param_5 + 1) = 0x4000;
    *param_5 = 0.0;
  }
  return 0;
}

