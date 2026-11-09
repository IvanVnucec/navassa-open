
ulonglong FUN_0103e418(int param_1)

{
  float fVar1;
  undefined4 unaff_r7;
  uint in_fpscr;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  fVar1 = (float)FUN_01014570(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  return CONCAT44(unaff_r7,(int)((fVar3 / fVar1) * 0.5)) & 0xffffffff000000ff;
}

