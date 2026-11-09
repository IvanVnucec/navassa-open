
undefined4 FUN_0102f04c(undefined4 param_1,undefined4 param_2,char *param_3,int param_4)

{
  float fVar1;
  char cVar2;
  uint in_fpscr;
  float fVar3;
  
  cVar2 = '\b';
  do {
    fVar3 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_4 + cVar2 * 8),(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = (float)FUN_01014570(param_1,param_2);
    in_fpscr = in_fpscr & 0xfffffff;
    if (DAT_0102f21c / fVar1 < fVar3) {
      *param_3 = cVar2;
      return 0;
    }
    cVar2 = cVar2 + -1;
  } while (-1 < cVar2);
  return 0x2e03;
}

