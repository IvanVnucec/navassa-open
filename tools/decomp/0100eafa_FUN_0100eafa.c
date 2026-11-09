
undefined4 FUN_0100eafa(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  iVar1 = DAT_0100ee14;
  if (1 < param_4) {
    param_4 = 0;
  }
  iVar5 = DAT_0100ee1c + (short)param_1 * 0xd00;
  if (*(short *)(iVar5 + param_4 * 0x40 + param_2 * 2 + 0xc00) == 1) {
    iVar2 = iVar5 + param_4 * 0x20 + param_2;
    bVar4 = *(byte *)(iVar2 + 0xc80);
    uVar9 = (uint)bVar4;
    uVar3 = (uint)*(byte *)(iVar2 + 0xcc0);
    iVar2 = DAT_0100ee14 + param_1 * 0x24c;
    if (uVar9 == uVar3) {
      iVar5 = iVar5 + param_4 * 0x400 + param_2 * 0x20 + uVar3 * 4;
      uVar19 = CONCAT44(iVar5,uVar3);
      if (param_3 == 0) {
        for (uVar3 = uVar3 << 3; uVar3 < (uint)(((int)uVar19 + 1) * 8); uVar3 = uVar3 + 1) {
          if (uVar3 < 0x40) {
            *(undefined4 *)(iVar2 + uVar3 * 4 + 0x144) =
                 *(undefined4 *)((int)((ulonglong)uVar19 >> 0x20) + 0x400);
            uVar19 = FUN_0100ecd2();
          }
        }
      }
      else {
        uVar3 = 0;
        do {
          *(undefined4 *)(iVar2 + uVar3 * 4 + 0x144) = *(undefined4 *)(iVar5 + 0x400);
          FUN_0100ecd2();
          uVar3 = uVar3 + 1;
          iVar5 = extraout_r1;
        } while (uVar3 < 0x40);
      }
    }
    else {
      iVar12 = iVar5 + param_4 * 0x400 + param_2 * 0x20;
      iVar8 = iVar12 + uVar9 * 4;
      iVar5 = iVar5 + param_4 * 0x200 + param_2 * 0x10;
      fVar14 = (*(float *)(iVar8 + 0x404) - *(float *)(iVar8 + 0x400)) * 0.125;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2 + 2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (fVar15 - fVar16) * 0.125;
      iVar8 = iVar12 + uVar9 * 4;
      if (param_3 == 0) {
        bVar4 = bVar4 << 3;
        fVar16 = *(float *)(iVar8 + 0x400);
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        iVar8 = (uVar3 & 0x1f) << 3;
      }
      else {
        fVar17 = (float)VectorSignedToFloat(uVar9 << 3,(byte)(in_fpscr >> 0x15) & 3);
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2),
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar16 = *(float *)(iVar8 + 0x400) - fVar17 * fVar14;
        fVar18 = fVar18 - fVar17 * fVar15;
        bVar4 = 0;
        iVar8 = 0x40;
      }
      fVar18 = fVar18 - fVar15;
      fVar16 = fVar16 - fVar14;
      for (uVar6 = (uint)bVar4; (int)uVar6 < iVar8; uVar6 = uVar6 + 1) {
        iVar10 = uVar9 + 1;
        iVar7 = iVar10 * 8;
        bVar13 = SBORROW4(iVar7,uVar6);
        iVar11 = iVar7 - uVar6;
        if (iVar7 < (int)uVar6) {
          bVar13 = SBORROW4(iVar10,uVar3 - 1);
          iVar11 = iVar10 - (uVar3 - 1);
        }
        if (iVar11 < 0 != bVar13) {
          uVar9 = uVar9 + 1 & 0xff;
          iVar11 = iVar12 + uVar9 * 4;
          fVar14 = (*(float *)(iVar11 + 0x404) - *(float *)(iVar11 + 0x400)) * 0.125;
          fVar17 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2 + 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + uVar9 * 2),
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = (fVar17 - fVar15) * 0.125;
        }
        fVar18 = fVar18 + fVar15;
        fVar16 = fVar16 + fVar14;
        *(float *)(iVar2 + uVar6 * 4 + 0x144) = fVar16;
        *(short *)(iVar2 + uVar6 * 2 + 0xc2) = (short)(int)fVar18;
      }
    }
    *(undefined2 *)(iVar1 + param_1 * 0x24c) = 1;
    *(char *)(iVar2 + 0x24a) = (char)param_2;
  }
  return 0;
}

