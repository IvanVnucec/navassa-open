
void FUN_010284d4(float param_1,float param_2)

{
  int *unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  int unaff_r8;
  float fVar1;
  undefined4 in_stack_00000000;
  
  *(float *)(unaff_r8 + 0x1c) = param_1 + param_2;
  *(undefined4 *)(unaff_r7 + 0x38) = unaff_r6;
  fVar1 = *(float *)(unaff_r7 + 0x30) * *(float *)(unaff_r7 + 0x30);
  *(float *)(unaff_r8 + 0x20) = fVar1;
  *(float *)(unaff_r8 + 0x20) = fVar1 * *(float *)(*unaff_r4 + 0x14);
  FUN_0102727c(in_stack_00000000);
  return;
}

