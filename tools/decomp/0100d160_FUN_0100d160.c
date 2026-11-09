
undefined8 FUN_0100d160(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  short sVar1;
  short sVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_r7;
  int in_r12;
  short *psVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  short local_2c;
  undefined1 uStack_29;
  
  pcVar3 = DAT_0100d2ec;
  iVar6 = DAT_0100d2e8;
  local_2c = (short)param_3;
  uStack_29 = (undefined1)(param_3 >> 0x18);
  uVar4 = (uint)*(byte *)(DAT_0100d2e8 + 0xf);
  if ((*DAT_0100d2ec == '\0') && (iVar5 = 0, uVar4 != 0)) {
    do {
      *(undefined4 *)(param_2 + iVar5 * 4) = *param_1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar4);
  }
  for (iVar6 = *(int *)(iVar6 + 0x1c); iVar6 <= (int)((param_3 & 0xff) - 1); iVar6 = iVar6 + 1) {
    psVar7 = (short *)(param_1 + iVar6);
    sVar1 = *psVar7;
    sVar2 = *(short *)((int)param_1 + iVar6 * 4 + 2);
    unaff_r7 = (uint)*(byte *)(param_4 + iVar6 + 1);
    local_2c = psVar7[2];
    in_r12 = (int)psVar7[3];
    fVar8 = (float)VectorSignedToFloat(unaff_r7 - uVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((int)local_2c - (int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(in_r12 - sVar2,(byte)(in_fpscr >> 0x15) & 3);
    for (iVar5 = 0; iVar5 < (int)(unaff_r7 - uVar4); iVar5 = iVar5 + 1) {
      fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_2 + (iVar5 + uVar4) * 4) =
           (short)(int)(fVar9 * fVar10 * (1.0 / fVar8)) + sVar1;
      *(short *)(param_2 + 2 + (iVar5 + uVar4) * 4) =
           (short)(int)(fVar9 * fVar11 * (1.0 / fVar8)) + sVar2;
    }
    uVar4 = unaff_r7;
  }
  *(short *)(param_2 + unaff_r7 * 4) = local_2c;
  *(short *)(param_2 + 2 + unaff_r7 * 4) = (short)in_r12;
  if ((*pcVar3 == '\0') && (unaff_r7 < 0x3f)) {
    uVar4 = unaff_r7;
    while (uVar4 = uVar4 + 1, uVar4 < 0x40) {
      *(short *)(param_2 + (uVar4 + unaff_r7) * 4) = local_2c;
      *(short *)(param_2 + 2 + (uVar4 + unaff_r7) * 4) = (short)in_r12;
    }
  }
  return CONCAT44(param_4,CONCAT13(uStack_29,CONCAT12((char)param_3,local_2c)));
}

