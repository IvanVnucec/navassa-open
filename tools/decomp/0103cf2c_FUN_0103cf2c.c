
undefined8
FUN_0103cf2c(int param_1,uint param_2,undefined4 param_3,float *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 auStack_4c [5];
  
  fVar4 = DAT_0103d01c;
  iVar1 = 0;
  if (param_1 < 2) {
    fVar5 = DAT_0103d020;
    fVar6 = DAT_0103d020;
    for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
      iVar1 = FUN_0103cdf4(auStack_4c,0,0,param_3,param_1,param_5,param_6);
      if (iVar1 != 0) goto LAB_0103cfa8;
      fVar3 = (float)VectorUnsignedToFloat(auStack_4c[param_1 * 2],(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 + fVar3 * fVar4;
      fVar3 = (float)VectorUnsignedToFloat(auStack_4c[param_1 * 2 + 1],(byte)(in_fpscr >> 0x15) & 3)
      ;
      fVar6 = fVar6 + fVar3 * fVar4;
    }
    if (param_2 == 0) {
      *param_4 = 0.0;
      param_4[1] = 0.0;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      *param_4 = fVar5 / fVar4;
      param_4[1] = fVar6 / fVar4;
    }
  }
  else {
    iVar1 = 0xe103;
  }
LAB_0103cfa8:
  return CONCAT44(param_4,iVar1);
}

