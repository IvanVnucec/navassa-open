
void FUN_01011b10(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (float)VectorFloatToUnsignedFixed(*(undefined4 *)(param_1 + 0x378),0x20,1);
  uVar2 = (int)(fVar5 / *(float *)(param_1 + 0x374) + 0.5) & 0xff;
  fVar5 = DAT_01011d94;
  for (bVar3 = 0; bVar3 < uVar2; bVar3 = bVar3 + 1) {
    fVar5 = fVar5 + *(float *)(param_2 + (uint)bVar3 * 4 + 0x534);
  }
  fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x2f8) * 4 + 0x338) = fVar5 / fVar6;
  fVar5 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x378),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = (int)(fVar5 / *(float *)(param_1 + 0x374) + 0.5) & 0xff;
  bVar3 = 0;
  fVar5 = DAT_01011d94;
  while( true ) {
    uVar4 = (uint)bVar3;
    if (uVar2 <= uVar4) break;
    bVar3 = bVar3 + 1;
    fVar5 = fVar5 + *(float *)(param_2 + 0x598 + uVar4 * 4);
  }
  fVar7 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = DAT_01011d94;
  for (iVar1 = 0; iVar1 < (int)uVar2; iVar1 = iVar1 + 1) {
    fVar8 = *(float *)(param_2 + 0x598 + iVar1 * 4) - fVar5 / fVar7;
    fVar6 = fVar6 + fVar8 * fVar8;
  }
  *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x2f8) * 4 + 0x2fc) = fVar6 / fVar7;
  return;
}

