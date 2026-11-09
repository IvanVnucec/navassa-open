
float FUN_01027404(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_01027670;
  for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1) {
    fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar2 = fVar2 + fVar3 * *(float *)(param_1 + uVar1 * 4);
    param_3 = param_2 * param_3;
  }
  return fVar2;
}

