
undefined8 FUN_010287c0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *extraout_r1;
  char cVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float local_2c;
  float local_28 [2];
  
  param_1[0x78] = 1;
  puVar1 = (undefined4 *)param_1[3];
  puVar1[8] = 3;
  *puVar1 = 5;
  FUN_01028996(puVar1,3,1);
  FUN_010278dc();
  iVar2 = param_1[0x6e];
  if (iVar2 == 0) goto LAB_01028980;
  FUN_01028996();
  uVar11 = FUN_0102778c();
  iVar2 = (int)uVar11;
  FUN_01028996(0,(int)((ulonglong)uVar11 >> 0x20),local_28,&local_2c,0);
  FUN_01027674();
  iVar3 = param_1[2];
  uVar4 = *(uint *)(iVar3 + 0x21c);
  if (uVar4 == 0) {
    *(float *)(iVar3 + 0x220) = local_28[0];
    *(float *)(iVar3 + 0x224) = local_2c;
  }
  else {
    iVar5 = *param_1;
    if (uVar4 < *(uint *)(iVar5 + 0x94)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat(uVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
      uVar4 = *(uint *)(iVar3 + 0x21c);
      *(float *)(iVar3 + 0x220) = (local_28[0] + fVar10 * *(float *)(iVar3 + 0x220)) / fVar8;
      fVar10 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat(uVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(iVar3 + 0x224) = (local_2c + fVar10 * *(float *)(iVar3 + 0x224)) / fVar8;
    }
    else {
      *(float *)(iVar3 + 0x220) =
           *(float *)(iVar3 + 0x220) * (1.0 - *(float *)(iVar5 + 0x90)) +
           local_28[0] * *(float *)(iVar5 + 0x90);
      *(float *)(iVar3 + 0x224) =
           *(float *)(iVar3 + 0x224) * (1.0 - *(float *)(iVar5 + 0x90)) +
           local_2c * *(float *)(iVar5 + 0x90);
    }
  }
  if (iVar2 == 1 || iVar2 == 4) {
    iVar5 = *param_1;
    fVar10 = *(float *)(iVar5 + 0x88) * DAT_01028988;
  }
  else {
    iVar5 = *param_1;
    fVar10 = *(float *)(iVar5 + 0x88);
  }
  fVar8 = *(float *)(iVar3 + 0x220) + -1.0;
  fVar8 = (fVar8 * fVar8 + *(float *)(iVar3 + 0x224) * *(float *)(iVar3 + 0x224)) * 0.25;
  if (iVar2 == 1 || iVar2 == 4) {
    uVar4 = *(uint *)(iVar5 + 0x9c);
  }
  else {
    uVar4 = *(uint *)(iVar5 + 0x98);
  }
  iVar2 = 1 << (uVar4 & 0xff);
  cVar6 = iVar2 < 0;
  fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_0102898c(((local_28[0] + -1.0) * (local_28[0] + -1.0) + local_2c * local_2c) * 0.25,
               fVar9 * fVar10);
  if (cVar6 == '\0') {
    if (*extraout_r1 < *(uint *)(iVar5 + 0x94)) {
      *extraout_r1 = *extraout_r1 + 1;
      iVar2 = 0;
      goto LAB_01028980;
    }
    uVar7 = FUN_010287ae(fVar8);
    *param_2 = uVar7;
    if ((int)((uint)(fVar8 < fVar10) << 0x1f) < 0) {
      iVar2 = 1;
      goto LAB_01028980;
    }
  }
  else {
    uVar7 = FUN_010287ae();
    *param_2 = uVar7;
  }
  iVar2 = 2;
LAB_01028980:
  return CONCAT44(param_4,iVar2);
}

