
void FUN_01022f4e(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)FUN_0101f1f8(param_3[0x18],param_3[0x19]);
  param_2[3] = fVar1 + param_2[3];
  fVar1 = (float)FUN_0101f1f8(param_3[0x1e],param_3[0x1f]);
  param_2[4] = fVar1 + param_2[4];
  fVar1 = (float)FUN_0101f1f8(param_3[0x24],param_3[0x25]);
  param_2[5] = fVar1 + param_2[5];
  fVar1 = (float)FUN_0101f1f8(param_3[0x2a],param_3[0x2b]);
  param_2[6] = fVar1 + param_2[6];
  fVar1 = (float)FUN_0101f1f8(*param_3,param_3[1]);
  fVar4 = *param_2;
  *param_2 = fVar1 + fVar4;
  fVar2 = (float)FUN_0101f1f8(param_3[0x12],param_3[0x13]);
  param_2[1] = fVar2 + param_2[1];
  fVar2 = (float)FUN_0101f1f8(param_3[6],param_3[7]);
  param_2[2] = fVar2 + param_2[2];
  fVar2 = (float)FUN_0101f1f8(param_3[0x30],param_3[0x31]);
  fVar2 = fVar2 + param_2[7];
  param_2[7] = fVar2;
  fVar3 = (float)FUN_0101f1f8(param_3[0x32],param_3[0x33]);
  param_2[8] = fVar3 + param_2[8];
  fVar3 = (float)FUN_0101f1f8(param_3[0x34],param_3[0x35]);
  param_2[9] = fVar3 + param_2[9];
  fVar3 = (float)FUN_0101f1f8(param_3[0x36],param_3[0x37]);
  param_2[10] = fVar3 + param_2[10];
  fVar5 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = param_2[0x12];
  param_2[0x12] = fVar5 + fVar3;
  param_2[0xb] = (fVar1 + fVar4) - (fVar2 * fVar2) / (fVar5 + fVar3);
  param_2[0xc] = param_2[1] - (param_2[8] * param_2[8]) / param_2[0x12];
  fVar1 = (float)FUN_01023116(param_2[7]);
  param_2[0xd] = param_2[2] - fVar1;
  fVar1 = (float)FUN_0102311a(param_2[9],param_2[7]);
  param_2[0xe] = param_2[3] - fVar1;
  fVar1 = (float)FUN_01023116(param_2[9]);
  param_2[0x10] = param_2[5] - fVar1;
  fVar1 = (float)FUN_0102311a(param_2[10],param_2[7]);
  param_2[0xf] = param_2[4] - fVar1;
  fVar1 = (float)FUN_01023116(param_2[10]);
  param_2[0x11] = param_2[6] - fVar1;
  return;
}

