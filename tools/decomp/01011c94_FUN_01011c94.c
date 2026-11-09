
void FUN_01011c94(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  uint in_fpscr;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  
  pbVar3 = (byte *)(param_1 + 0x2f8);
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)(param_1 + 0x2fa) = 0;
  *pbVar3 = 0;
  while (*pbVar3 < 0xf) {
    *(undefined4 *)(param_1 + (uint)*pbVar3 * 4 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + (uint)*pbVar3 * 4 + 0x338) = DAT_01011dac;
    *pbVar3 = *pbVar3 + 1;
  }
  puVar4 = (uint *)(param_1 + 0x378);
  uVar1 = FUN_0101175c(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 0x2a) == '\x01') {
    *puVar4 = *(uint *)(iVar2 + 0x20) >> 1;
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x12) == '\x01') goto LAB_01011d1a;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20);
  }
  else {
    *puVar4 = *(uint *)(iVar2 + 0x24) >> 1;
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x13) == '\x01') goto LAB_01011d1a;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24);
  }
  fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorFloatToUnsigned(fVar5 / DAT_01011d98,3);
  *puVar4 = uVar6;
LAB_01011d1a:
  uVar6 = DAT_01011db0;
  fVar5 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)(param_1 + 0x37c),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 / DAT_01011d9c;
  *(float *)(param_1 + 0x374) = fVar5;
  if (uVar6 <= *puVar4) {
    fVar7 = (float)VectorUnsignedToFloat(*puVar4,(byte)(in_fpscr >> 0x15) & 3);
    uVar8 = VectorFloatToUnsigned((fVar7 * 0.25) / fVar5,3);
    uVar9 = VectorFloatToUnsigned((fVar7 * 0.5) / fVar5,3);
    uVar6 = VectorFloatToUnsigned((fVar7 * DAT_01011da0) / fVar5,3);
    iVar2 = (1 << (uVar6 & 0xff)) + (1 << (uVar9 & 0xff)) + (1 << (uVar8 & 0xff));
    **(int **)(param_1 + 0x14) = iVar2;
    *(int *)(*(int *)(param_1 + 0x14) + 4) = iVar2;
  }
  return;
}

